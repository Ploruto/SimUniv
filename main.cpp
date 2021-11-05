#include "include/core/event/datastructes/event.hpp"
#include "include/core/spatial/datastructes/spatialGrid.hpp"
#include "include/core/time/tickTime.hpp"
#include "include/entities/entity.hpp"
#include "include/utils/calculations/suRandom.hpp"
#include <iostream>

int main()
{
  entity::Entity e, e1, e2, e3;
  spatial::spatialGrid<30, entity::Entity> grid;
  std::array<double, 3> pos{140410, 14010, 140};
  e.set_pos(pos);
  grid.get_index(&e);

  return 0;
}