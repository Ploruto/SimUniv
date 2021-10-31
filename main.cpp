#include "include/core/time/tickTime.hpp"
#include <iostream>
#include "include/entities/entity.hpp"
#include "include/core/event/datastructes/event.hpp"
#include "include/core/spatial/datastructes/spatialGrid.hpp"

int main()
{
    entity::Entity e;
    entity::Entity e1;
    event::Event<entity::Entity> *e_event = new event::Event<entity::Entity>(&e, 0, 0, 0);
    e_event->set_arg_value(10);


    
    spatial::spatialGrid<30, entity::Entity> grid;

    e_event->call_event_handler();
    return 0;
}