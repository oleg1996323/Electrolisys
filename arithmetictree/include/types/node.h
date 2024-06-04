#pragma once
#include <memory>
#include <optional>
#include <vector>
#include <unordered_set>
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
    EXPRESSION
};

class Node{
    public:
    Node(size_t sz):
        childs_([&sz](){std::vector<std::shared_ptr<Node>> vector;
                        vector.reserve(sz);
                        return vector;}()){}
    
    Node() =default;

    virtual NODE_TYPE type() const = 0;

    virtual Node* first_undefined_child_node() = 0;

    virtual Result execute() = 0;

    virtual Result execute(size_t index) = 0;

    const std::shared_ptr<Node>& child(size_t id) const{
        return childs_.at(id);
    }

    std::shared_ptr<Node>& child(size_t id){
        return childs_.at(id);
    }

    bool has_childs() const{
        return !childs_.empty();
    }

    bool has_child(size_t id) const{
        return childs_.size()>id;
    }

    void refresh();

    bool is_numeric() const{
        for(auto& child:childs_)
            if(child->is_numeric())
                continue;
            else return false;
        return true;
    }

    virtual void insert(std::shared_ptr<Node> node) = 0;

    virtual void serialize(std::ostream& stream) = 0;

    virtual void deserialize(std::ostream& stream) = 0;

    bool refer_to(std::string_view var_name) const{
        for(auto& child:childs_)
            if(child->refer_to(var_name))
                return true;
            else continue;
    }

    #ifdef DEBUG
    virtual void print() const{
        std::cout<<"Undef node"<<std::endl;
    }
    #endif

    virtual ~Node(){}

    virtual void add_parent(Node*);

    bool has_parents() const;

    bool caller() const{
        return caller_;
    }

    const std::vector<std::shared_ptr<Node>>& childs() const;

    protected:
    mutable std::unordered_set<Node*> parents_;
    std::vector<std::shared_ptr<Node>> childs_;
    bool caller_ = false;
};