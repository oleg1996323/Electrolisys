#include "def.h"
#include "types.h"
#include "arithmetic_types.h"
#include "data.h"

void VariableBase::print_result(){
    get_stream()<<result()<<std::endl;
}

void VariableBase::print_text(){
    get_stream()<<text()<<std::endl;
}

VariableBase::VariableBase(std::string_view name, BaseData* data_base):
    node_(std::make_shared<VariableNode>(this)),
    domains_(node_),
    name_(name),
    data_base_(data_base)
{}

std::string_view VariableBase::name() const{
    return name_;
}

void VariableBase::set_name(std::string_view name){
    name_=name;
}

#include "arithmetic_types.h"

void VariableBase::refresh() const{
    node_->refresh();
}

void VariableBase::set_data_base(BaseData* data_base){
    data_base_=data_base;
}

BaseData* VariableBase::get_data_base() const{
    return data_base_;
}

Result VariableBase::result(){
    return domains_.execute();
}

Result VariableBase::result() const{
    return domains_.execute();
}

std::string VariableBase::text(){
    std::ostringstream stream;
    node_->print_text(stream);
    stream<<" = ";
    if(node_->has_childs()){
        node_->child(0)->print_text(stream);
    }
    else stream<<"#NAN";
    return stream.str();
}

std::string VariableBase::text() const{
    std::ostringstream stream;
    node_->print_text(stream);
    return stream.str();
}

const std::shared_ptr<VariableNode>& VariableBase::node() const{
    return node_;
}

const std::shared_ptr<VariableNode>& VariableBase::node(){
    return node_;
}

bool VariableBase::is_expression() const{
    return node_->has_childs() && (node_->type() == NODE_TYPE::UNARY || node_->type() == NODE_TYPE::BINARY);
}

bool VariableBase::is_value() const{
    return node_->has_childs() && node_->is_numeric();
}

bool VariableBase::is_string() const{
    return node_->has_childs() && node_->is_string();
}

bool VariableBase::is_array() const{
    return node_->has_childs() && node_->is_array();
}

bool VariableBase::is_undef() const{
    return !node_->has_childs();
}

bool VariableBase::is_numeric() const{
    return node_->is_numeric();
}

TYPE_VAL VariableBase::type() const{
    if(node_->has_childs()){
        if(node_->is_numeric()){
            if(node_->is_array())
                return TYPE_VAL::NUMERIC_ARRAY;
            else return TYPE_VAL::VALUE;
        }
        else if(node_->is_string()){
            if(node_->is_array())
                return TYPE_VAL::STRING_ARRAY;
            else return TYPE_VAL::STRING;
        }
        else{
            if(node_->is_array())
                return TYPE_VAL::ARRAY;
            else return TYPE_VAL::UNKNOWN;
        }
    }
    else
        return TYPE_VAL::UNKNOWN;
}

VariableBase::~VariableBase(){}

void VariableBase::add_domain(Domain&& domain){
    domains_.add_domain(std::move(domain));
}

VariableDomain& VariableBase::get_domains(){
    return domains_;
}

const VariableDomain& VariableBase::get_domains() const{
    return domains_;
}

std::string_view VariableBase::get_data_base_name() const{
    return data_base_->name();
}