#include "../../include/entities/entity.hpp"
#include "../../include/utils/calculations/DVector.hpp"

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

calculations::DVector<double, 3> Entity::get_position()
{
    return this->m_pos;
}
void Entity::set_pos(std::array<double, 3> pos)
{
    this->m_pos = calculations::DVector<double, 3>{pos};
}
void Entity::set_pos(calculations::DVector<double, 3> pos)
{
    this->m_pos = pos;
}

calculations::DVector<double, 3> Entity::get_velocity()
{
    return this->m_vel;
}
void Entity::set_velo(std::array<double, 3> vel)
{
    this->m_vel = calculations::DVector<double, 3>{vel};
}
void Entity::set_velo(calculations::DVector<double, 3> vel)
{
    this->m_vel = vel;
}

calculations::DVector<float, 3> Entity::get_size()
{
    return this->m_size;
}
void Entity::set_size(std::array<float, 3> size)
{
    this->m_size = calculations::DVector<float, 3>{size};
}
void Entity::set_size(calculations::DVector<float, 3> vel)
{
    this->m_size = vel;
}