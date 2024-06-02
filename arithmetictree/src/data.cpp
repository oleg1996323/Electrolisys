#include "data.h"
#include "def.h"
#include "types.h"
#include "expr_parser.h"

using namespace std::string_literals;

BaseData::BaseData(std::string_view name):name_(name){}

VariableBase* BaseData::get(std::string_view name){
    if(!exists(name))
        throw std::invalid_argument("Variable "s + std::string(name) + " don't exists.\n");
    else
        return vars_.at(name)?vars_.at(name).get():nullptr; 
};

const VariableBase* BaseData::get(std::string_view name) const{
    return get(name); 
};

bool BaseData::exists(std::string_view name) const{
    return vars_.contains(name);
}

std::string_view BaseData::name() const{
    return name_;
}

void BaseData::set_name(const std::string& name){
    name_ = name;
}

bool BaseData::defined(std::string_view name) const{
    if(exists(name)){
        if(vars_.at(name))
            return true;
        else return false;
    }
    else return false;
}

std::shared_ptr<VariableBase>& BaseData::add_variable(std::string&& name){
    if(!exists(name)){
        auto str_name = var_names_.emplace(name).first;
        return vars_.emplace(
            *str_name,
            std::make_shared<VariableBase>(*str_name,this)).first->second;
    }
    else return vars_.find(name)->second;
}


#include <chrono>

std::string BaseData::generate_hash_name(){
    using namespace std::chrono;
    std::time_t time = system_clock::to_time_t(system_clock::now());
    std::string current_time = std::string(std::ctime(&time));
    return std::to_string(std::hash<std::string>()(current_time) | std::hash<std::string_view>()(name_));
}

void BaseData::erase(std::string_view var_name){
    vars_.erase(var_name);
}

#include <iostream>
#include "expr_parser.h"

void BaseData::setstream(std::istream& stream){
    if(parser_)
        parser_->set_stream(stream);
    else{
        parser_=std::make_unique<Parser>(stream,this);
    }
}

void BaseData::read_new(){
    if(parser_)
        parser_->parse_entry();
}

void BaseData::parse_entry(){
    return parser_->parse_entry();
}

void BaseData::set_pool(DataPool* pool){
    pool_ = pool;
}

const DataPool* BaseData::get_pool() const{
    return pool_;
}

DataPool* BaseData::get_pool(){
    return pool_;
}

DataPool::DataPool(const std::string& name):name_(name){
    add_data("anon"s);
}

std::string_view DataPool::name(){
    return name_;
}

void DataPool::set_name(const std::string& name){
    name_ = name;
}

BaseData* DataPool::add_data(const std::string& name){
    if(!exists(name)){
        std::string_view name_sv = *(data_names_.emplace(name).first);
        data_bases_.emplace(name_sv,name_sv).first->second.set_pool(this);
    }
    return &data_bases_.at(name);
}

bool DataPool::exists(std::string_view name) const{
    return data_bases_.contains(name);
}

void DataPool::erase(std::string_view name){
    if(exists(name)){
        data_bases_.erase(name);
        data_names_.erase(std::string(name));
    }
}

void DataPool::replace(const std::string& name) noexcept{
    if(exists(name)){
        data_bases_.at(name) = BaseData(*data_names_.find(name));
    }
}

size_t DataPool::size() const{
    return data_names_.size();
}

const BaseData* DataPool::get(std::string_view name_data) const noexcept{
    if(exists(name_data))
        return &data_bases_.at(name_data);
    else return nullptr;
}

BaseData* DataPool::get(std::string_view name_data) noexcept{
    if(exists(name_data))
        return &data_bases_.at(name_data);
    else return nullptr;
}