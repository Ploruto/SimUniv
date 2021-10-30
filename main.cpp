#include "include/core/time/tickTime.hpp"
#include <iostream>
#include <functional>
#include "include/entities/entity.hpp"

int main()
{
    entity::Entity e;
    auto func = e.get_entity_handler();
    func(0, 0);
    return 0;
}