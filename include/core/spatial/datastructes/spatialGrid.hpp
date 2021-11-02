#ifndef SU_SPATIALGRID
#define SU_SPATIALGRID
#include "./spatialObject.hpp"
#include <array>
namespace spatial
{
  template <unsigned short SIZE, class T>
  struct spatialGrid
  {
  private:
    spatial::SpatialObject *cells = new spatial::SpatialObject *[SIZE * SIZE]
    { nullptr };

  public:
    void add_entity(unsigned short x, unsigned short y, T *entity)
    {
      spatial::SpatialObject<T> *e = new spatial::SpatialObject<T>(entity);
      if (!get_cell(x, y)) //get cell at x,y
      {
        set_cell(x, y, e); //set cell at x,y

        e->m_prev = nullptr;
      }
      else
      {
        spatial::SpatialObject<T> *current = get_cell(x, y);
        while (current->m_next)
        {
          current = current->m_next;
        }
        current->m_next = e;
        e->m_prev = current;
      }
    }
    spatial::SpatialObject<T> *remove_entity(unsigned short x, unsigned short y,
                                             T *entity)
    {
      spatial::SpatialObject<T> *current = get_cell(x, y);
      while (current->m_next && current->m_entity != entity)
      {
        current = current->m_next;
      }
      // current is now the needed spatialObject
      current->m_prev->m_next = current->m_next;
      current->m_next->m_prev = current->m_prev;

      return current;
    }
  };

}

#endif