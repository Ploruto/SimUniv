#include "../../include/entities/entity.hpp"

using entity::Entity;

Entity::Entity() : m_type(0), m_uid(0) {}
Entity::Entity(unsigned short type) : m_type(type) {}

unsigned short Entity::get_type()
{
    return this->m_type;
}
void Entity::set_type(unsigned short type)
{
    this->m_type = type;
}

unsigned long Entity::get_uid()
{
    return this->m_uid;
}

void Entity::set_uid(unsigned long uid)
{
    this->m_uid = uid;
}