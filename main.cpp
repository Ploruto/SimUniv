#include "include/core/event/datastructes/event.hpp"
#include "include/core/spatial/datastructes/spatialGrid.hpp"
#include "include/core/time/tickTime.hpp"
#include "include/entities/entity.hpp"
#include "include/utils/calculations/suRandom.hpp"
#include <iostream>

int main()
{
  auto *randomRef = su_random::suRandom::get_instance();
  std::cout << randomRef->get_random_int(20, 25) << std::endl;
  std::cout << randomRef->get_random_float(1, 40) << std::endl;
  std::cout << randomRef->get_random_double(1, 40) << std::endl;
  return 0;
}