#pragma once
#include "def.h"
#include "node.h"
#include "types.h"
#include <vector>
#include <memory>

class ArrayNode:public Node{
    public:
    ArrayNode(size_t sz);

    virtual NODE_TYPE type() const override;

    virtual Result execute() override;

    virtual Result execute(size_t index) override;

    virtual void insert(std::shared_ptr<Node> node) override;

    virtual void serialize(std::ostream& stream) override;

    virtual void deserialize(std::ostream& stream) override;

    size_t size() const;

    bool empty() const;

    std::vector<std::shared_ptr<Node>>::const_iterator begin() const;

    std::vector<std::shared_ptr<Node>>::iterator begin();

    std::vector<std::shared_ptr<Node>>::const_iterator end() const;

    std::vector<std::shared_ptr<Node>>::iterator end();

    virtual bool is_numeric() const override;

    virtual bool is_string() const override;

    virtual bool is_array() const override;

    virtual void print_text(std::ostream& stream) const override;

    virtual void print_result(std::ostream& stream) const override;
};