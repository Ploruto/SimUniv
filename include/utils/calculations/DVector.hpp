#ifndef SW_VECTOR
#define SW_VECTOR
#include <array>

namespace calculations
{
    template <typename T, short DIMENSION>
    struct DVector
    {
    private:
        std::array<T, DIMENSION> m_points;

    public:
        DVector() {}
        DVector(std::array<T, DIMENSION> points) : m_points(points) {}

        std::array<T, DIMENSION> get_points()
        {
            return this->m_points;
        }
        void set_points(std::array<T, DIMENSION> points)
        {
            this->m_points = points;
        }
    };
}
#endif