#ifndef SU_SPATIALGRID
#define SU_SPATIALGRID
#include "./spatialObject.hpp"
#include <limits>
#include <math.h>
namespace spatial
{
  template <unsigned short SIZE, class T>
  struct spatialGrid
  {
  private:
    spatial::SpatialObject<T> **cells = new spatial::SpatialObject<T> *[SIZE * SIZE];

  public:
    unsigned int get_index(T *entity)
    {
      int xIndex = (int)std::floor(entity->get_position().get_points()[0] / std::numeric_limits<double>::max() * 2);
      int yIndex = (int)std::floor(entity->get_position().get_points()[1] / std::numeric_limits<double>::max() * 2);
      std::cout << xIndex << std::endl;
      std::cout << yIndex << std::endl;
      return 0;
      //return (y * SIZE) + x;
    }

  public:
    void
    add_entity(T *entity)
    {
      spatial::SpatialObject<T> *e = new spatial::SpatialObject<T>(entity);
      if (!cells[get_index(e)])
      {
        cells[get_index(e)] = e;
        e->m_prev = nullptr;
      }
      else
      {
        spatial::SpatialObject<T> *current = cells[get_index(e)];
        while (current->m_next)
        {
          current = current->m_next;
        }
        current->m_next = e;
        e->m_prev = current;
      }
    }
    spatial::SpatialObject<T> *remove_entity(
        T *entity)
    {
      spatial::SpatialObject<T> *current = cells[get_index(entity)];
      while (current->m_next && current->m_entity != entity)
      {
        current = current->m_next;
      }
      // current is now the needed spatialObject
      current->m_prev->m_next = current->m_next;
      current->m_next->m_prev = current->m_prev;

      return current;
    }

    spatial::SpatialObject<T> *get_entity(unsigned short x, unsigned short y)
    {
      return cells[get_index(x, y)];
    }
  };

}

#endif