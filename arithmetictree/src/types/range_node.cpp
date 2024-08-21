#include "range_node.h"
#include "def.h"

RangeOperationNode::RangeOperationNode(const RangeOperationNode& other):
Node(other),
range_size(other.range_size),
operation_(other.operation_),
cache_(other.cache_)
{}

Result RangeOperationNode::execute(){
    Value_t result;
    child(0)->get_array_childs(childs_);
    define_range_length();
    if(operation_==RANGE_OP::SUM)
        result = 0.;
    else if(operation_==RANGE_OP::PROD)
        result = 1.;
    for(size_t i=0;i<range_size;++i){
        //std::cout<<"Index: "<<i<<std::endl;
        if(operation_==RANGE_OP::SUM)
            result+=execute(i).get<Value_t>();
        else if(operation_==RANGE_OP::PROD)
            result*=execute(i).get<Value_t>();
    }
    return result;
}

Result RangeOperationNode::execute(size_t index){
    if(has_childs())
        return childs_.at(0)->execute(index);
    else return 0.;
}

void RangeOperationNode::print_text(std::ostream& stream) const{
    if(operation_==RANGE_OP::PROD)
        stream<<"product_i(";
    else if(operation_==RANGE_OP::SUM)
        stream<<"sum_i(";
    else stream<<"";

    if(has_childs())
        childs_.at(0)->print_text(stream);
    else {
        Node node;
        node.print_text(stream);
    }
    stream<<")";
}

RANGE_OP RangeOperationNode::operation() const{
    return operation_;
}

void RangeOperationNode::print_result(std::ostream& stream) const{
    stream<<const_cast<RangeOperationNode*>(this)->execute();
}

bool RangeOperationNode::is_numeric() const{
    if(has_childs())
        return childs_.at(0)->is_numeric();
    else return false;
}

bool RangeOperationNode::is_string() const{
    if(has_childs())
        return childs_.at(0)->is_string();
    else return false;
}

bool RangeOperationNode::is_array() const{
    return false;
}

void RangeOperationNode::insert_back(std::shared_ptr<Node> node){
    if(has_childs())
        childs_.at(0) = node;
    else
        childs_.push_back(node);
    node->add_parent(this);
}

void RangeOperationNode::define_range_length(){
    size_t sz = 0;
    for (auto child:childs_){
        if(sz==0){
            sz = reinterpret_cast<std::shared_ptr<ArrayNode>&>(child)->size();
            if(sz==0)
                throw std::invalid_argument("Empty array argument to range-operation-function");
        }
        else{
            if(reinterpret_cast<std::shared_ptr<ArrayNode>&>(child)->size()!=sz)
                throw std::invalid_argument("Innegal sizes of range-operation-function arguments");
        }
    }
    range_size = sz;
}