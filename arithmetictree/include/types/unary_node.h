#pragma once
#include "def.h"
#include "node.h"

enum class UNARY_OP{
    ADD,
    SUB,
    PARENS
};

class MultiArgumentNode;
class BinaryNode;
class ValueNode;
class VariableNode;

class UnaryNode:public Node{
    friend MultiArgumentNode;
    friend BinaryNode;
    friend ValueNode;
    friend VariableNode;
    public:
    UnaryNode(UNARY_OP op):operation_(op){}

    virtual NODE_TYPE type() const override{
        return NODE_TYPE::UNARY;
    }

    std::shared_ptr<Node>& child(){
        return childs_.at(0);
    }

    const std::shared_ptr<Node>& child() const{
        return childs_.at(0);
    }

    virtual void insert(std::shared_ptr<Node> node) override;

    virtual Result execute() override;

    virtual Result execute(size_t index) override;

    virtual bool is_numeric() const override;

    virtual bool is_string() const override;

    virtual bool is_array() const override;

    virtual void serialize(std::ostream& stream) override{

    }

    virtual void deserialize(std::ostream& stream) override{

    }

    UNARY_OP operation() const;

    virtual void print_text(std::ostream& stream) const override;

    virtual void print_result(std::ostream& stream) const override;

    private:
    Result __calculate__();
    Result __calculate__(size_t index);
    UNARY_OP operation_;
};
