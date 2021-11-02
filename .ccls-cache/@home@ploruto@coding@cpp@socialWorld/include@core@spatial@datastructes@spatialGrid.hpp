#ifndef SU_SPATIALGRID
#define SU_SPATIALGRID
#include "./spatialObject.hpp"
#include <array>
namespace spatial {
template <unsigned short SIZE, class T> struct spatialGrid {
private:
  std::array<spatial::SpatialObject<T> *, SIZE * SIZE> cells{nullptr};

public:
  spatial::SpatialObject<T> *get_test() { return cells[0]; }
  void add_entity(unsigned short x, unsigned short y, T *entity) {
    spatial::SpatialObject<T> *e = new spatial::SpatialObject<T>(entity);
    if (!cells[x][y]) {
      cells[x][y] = e;
      e->m_prev = nullptr;
    } else {
      spatial::SpatialObject<T> *current = cells[x][y];
      while (current->m_next) {
        current = current->m_next;
      }
      current->m_next = e;
      e->m_prev = current;
    }
  }
  spatial::SpatialObject<T> *remove_entity(unsigned short x, unsigned short y,
                                           T *entity) {
    spatial::SpatialObject<T> *current = cells[x][y];
    while (current->m_next && current->m_entity != entity) {
      current = current->m_next;
    }
    // current is now the needed spatialObject
    current->m_prev->m_next = current->m_next;
    current->m_next->m_prev = current->m_prev;

    return current;
  }
};

} // namespace spatial

#endif