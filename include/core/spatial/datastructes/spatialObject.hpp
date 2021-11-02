#ifndef SU_SPATIALOBJECT
#define SU_SPATIALOBJECT

namespace spatial
{
    template <class T>
    class SpatialObject
    {
    private:
        T *m_entity;

    public:
        SpatialObject<T> *m_next;
        SpatialObject<T> *m_prev;

        SpatialObject(T *entity) : m_entity(entity), m_next(nullptr), m_prev(nullptr) {}
    };

}

#endif