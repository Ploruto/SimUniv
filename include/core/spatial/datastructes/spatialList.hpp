#ifndef SU_SPATIALLIST
#define SU_SPATIALLIST

namespace spatial
{
    template <class T>
    struct spatialList
    {
        T *head = nullptr;
        T *next;
        T *prev;
    };

}

#endif