#include "def.h"
#include "array_node.h"
#include "types.h"
#include <vector>
#include <memory>

ArrayNode::ArrayNode(size_t sz):
    Node(sz)
{}

NODE_TYPE ArrayNode::type() const{
    return NODE_TYPE::ARRAY;
}

Result ArrayNode::execute(){
    return this;
}

Result ArrayNode::execute(size_t index){
    if(childs_.size()>index)
        return childs_.at(index)->execute(index);
    else throw std::invalid_argument("Invalid index. Prompt: out of range index");
}

size_t ArrayNode::size() const{
    return childs_.size();
}

bool ArrayNode::empty() const{
    return childs_.empty();
}

std::vector<std::shared_ptr<Node>>::const_iterator ArrayNode::begin() const{
    return childs_.begin();
}

std::vector<std::shared_ptr<Node>>::iterator ArrayNode::begin(){
    return childs_.begin();
}

std::vector<std::shared_ptr<Node>>::const_iterator ArrayNode::end() const{
    return childs_.end();
}

std::vector<std::shared_ptr<Node>>::iterator ArrayNode::end(){
    return childs_.end();
}

void ArrayNode::insert(std::shared_ptr<Node> node){
    if(childs_.size()<childs_.capacity()){
        childs_.push_back(node);
        node->add_parent(this);
    }
    else throw std::logic_error("Invalid inserting. Prompt: Unvalailable to insert node to full defined array");
}

void ArrayNode::serialize(std::ostream& stream){

}

void ArrayNode::deserialize(std::ostream& stream){

}

bool ArrayNode::is_numeric() const{
    return std::all_of(childs_.begin(),childs_.end(),[](std::shared_ptr<Node> child){
        return child->is_numeric();
    });
}

bool ArrayNode::is_string() const{
    return std::all_of(childs_.begin(),childs_.end(),[](std::shared_ptr<Node> child){
        return child->is_string();
    });
}

bool ArrayNode::is_array() const{
    return true;
}

void ArrayNode::print_text(std::ostream& stream) const{
    stream<<'[';
    if(!childs_.empty()){
        for(auto child:childs_){
                child->print_text(stream);
                stream<<"; ";
        }
        stream.seekp(-2,std::ios_base::end);
    }
    stream<<']';
}

void ArrayNode::print_result(std::ostream& stream) const{
    stream<<'[';
    if(!childs_.empty()){
        for(auto child:childs_){
                child->print_result(stream);
                stream<<"; ";
        }
        stream.seekp(-2,std::ios_base::end);
    }
    stream<<']';
}

std::ostream& operator<<(std::ostream& stream, std::shared_ptr<ArrayNode>& node){
    node->print_text(stream);
    return stream;
}