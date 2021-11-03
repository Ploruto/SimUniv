cmake_minimum_required(VERSION 3.0.0)
project(SocialWorld VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(include)

add_executable(SocialWorld
main.cpp

src/entities/entity.cpp
include/entities/entity.hpp

src/core/time/datetime.cpp
include/core/time/datetime.hpp

src/core/time/tickTime.cpp
include/core/time/tickTime.hpp

include/core/event/datastructes/event.hpp

include/core/spatial/datastructes/spatialGrid.hpp

include/core/spatial/datastructes/spatialObject.hpp

src/utils/calculations/suRandom.cpp
include/utils/calculations/suRandom.hpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
