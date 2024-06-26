#pragma once
#include <memory>
#include <optional>
#include <vector>
#include <unordered_set>
#include <functional>
#include "def.h"

class Node;
class UnaryNode;
class BinaryNode;
class ValueNode;
class VariableNode;
class MultiArgumentNode;
class RangeOperationNode;

enum class NODE_TYPE{
    UNARY,
    BINARY,
    VALUE,
    VARIABLE,
    RANGEOP,
    FUNCTION,
    ARRAY,
    STRING,
    UNDEF,
    CUSTOM
};

namespace serialization{
    class SerialData;
}

class Node{
    public:
    Node(size_t sz);

    Node();

    virtual NODE_TYPE type() const;

    virtual Result execute() = 0;

    virtual Result execute(size_t index) = 0;

    Result execute() const;

    Result execute(size_t index) const;

    const std::shared_ptr<Node>& child(size_t id) const{
        return childs_.at(id);
    }

    std::shared_ptr<Node>& child(size_t id){
        return childs_.at(id);
    }

    void release_childs(){
        for(auto child:childs_){
            assert(child->parents_.contains(this));
            child->parents_.erase(this);
        }
        childs_.clear();
    }

    bool has_childs() const{
        return !childs_.empty();
    }

    bool has_child(size_t id) const{
        return childs_.size()>id;
    }

    virtual void get_array_childs(std::vector<std::shared_ptr<Node>>& childs) const;

    virtual bool is_numeric() const = 0;

    virtual bool is_string() const = 0;

    virtual bool is_array() const = 0;

    void refresh();

    virtual void insert(std::shared_ptr<Node> node) = 0;

    virtual void serialize(std::ostream& stream) = 0;

    virtual void deserialize(std::ostream& stream) = 0;

    void serialize_header(serialization::SerialData& serial_data, const std::shared_ptr<Node>& from);

    void deserialize_header(serialization::SerialData& serial_data, const std::shared_ptr<Node>& from);

    void refresh_parent_links() const;

    virtual void print_text(std::ostream& stream) const;

    virtual void print_result(std::ostream& stream) const = 0;

    virtual ~Node(){
        for(auto child:childs_){
            assert(child->parents_.contains(this));
            child->parents_.erase(this);
        }
    }

    void add_parent(Node*);

    bool has_parents() const;

    const std::unordered_set<Node*>& parents() const;

    bool refer_to(std::string_view var_name) const;

    bool caller() const{
        return caller_;
    }

    template<typename T, typename... U>
    void recursive_function_applied_to_all_childs(std::function<T(const std::shared_ptr<Node>&,U...)> func);

    const std::vector<std::shared_ptr<Node>>& childs() const;
    
    protected:
    mutable std::unordered_set<Node*> parents_;
    std::vector<std::shared_ptr<Node>> childs_;
    bool caller_ = false;
    private:

    private:

    template<typename T, typename... U>
    void recursive_function_applied_to_all_childs(std::function<T(const std::shared_ptr<Node>&,U...)> func, Node* root);
};

template<typename T, typename... U>
void Node::recursive_function_applied_to_all_childs(std::function<T(const std::shared_ptr<Node>&,U...)> func){
    for(auto& child:childs_){
        if(child->type()!=NODE_TYPE::VARIABLE){
            func(child);
            child->recursive_function_applied_to_all_childs(func,this);
        }
    }
}

template<typename T, typename... U>
void Node::recursive_function_applied_to_all_childs(std::function<T(const std::shared_ptr<Node>&,U...)> func, Node* root){
    for(auto& child:childs_)
        if(child.get()!=root && child->type()!=NODE_TYPE::VARIABLE){
            func(child);
            child->recursive_function_applied_to_all_childs(func,this);
        }
}