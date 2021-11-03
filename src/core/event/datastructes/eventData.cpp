#include "../../../../include/core/event/datastructes/eventData.hpp"
using event::eventData;

eventData::eventData(unsigned short function_id,
                     unsigned short arg_id, short arg_value,
                     unsigned short priority) : priority(priority),
                                                function_id(function_id), function_arg_id(arg_id),
                                                arg_value(arg_value) {}

void eventData::set_arg_value(short new_value)
{
    this->arg_value = new_value;
}

void eventData::set_function_id(unsigned short id)
{
    this->function_id = id;
}

void eventData::set_arg_id(unsigned short id)
{
    this->function_arg_id = id;
}

void eventData::set_priority(unsigned short priority)
{
    this->priority = priority;
}