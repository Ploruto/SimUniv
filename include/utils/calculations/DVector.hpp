#ifndef SW_VECTOR
#define SW_VECTOR
#include <array>

namespace calculations
{
    template <typename TClass, short DIMENSION>
    struct DVector
    {
    private:
        std::array<TClass, DIMENSION> m_points;

    public:
        DVector() {}
        DVector(std::array<TClass, DIMENSION> &points) : m_points(points) {}

        std::array<TClass, DIMENSION> get_points()
        {
            return this->m_points;
        }
        void set_points(std::array<TClass, DIMENSION> &points)
        {
            this->m_points = points;
        }
    };
}
#endif
