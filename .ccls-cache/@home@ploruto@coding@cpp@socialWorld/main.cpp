#include "include/core/event/datastructes/event.hpp"
#include "include/core/spatial/datastructes/spatialGrid.hpp"
#include "include/core/time/tickTime.hpp"
#include "include/entities/entity.hpp"
#include <iostream>

int main() {
  entity::Entity e;
  entity::Entity e1;
  entity::Entity e2;
  event::Event<entity::Entity> *e_event =
      new event::Event<entity::Entity>(&e, 0, 0, 0);
  e_event->set_arg_value(10);

  spatial::spatialGrid<30, entity::Entity> grid;

  std::cout << grid.get_test() << std::endl;
  e_event->call_event_handler();
  return 0;
}