#include "include/entities/entity.hpp"
#include <iostream>

int main()
{
    entity::Entity e(20U);
    std::cout << e.get_type() << std::endl;
    return 0;
}