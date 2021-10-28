#ifndef SW_ENTITY
#define SW_ENTITY
#include "../utils/calculations/DVector.hpp"

namespace entity
{
    class Entity
    {
    private:
        unsigned long m_uid;
        unsigned short m_type;
        calculations::DVector<double, 3> m_pos;
        calculations::DVector<double, 3> m_vel;
        calculations::DVector<float, 3> m_size;

    public:
        Entity(unsigned short type);
        Entity();
        unsigned long get_uid();
        void set_uid(unsigned long);

        unsigned short get_type();
        void set_type(unsigned short);

        calculations::DVector<double, 3> get_position();
        void set_pos(std::array<double, 3> pos);
        void set_pos(calculations::DVector<double, 3> pos);

        calculations::DVector<double, 3> get_velocity();
        void set_velo(std::array<double, 3> vel);
        void set_velo(calculations::DVector<double, 3> vel);

        calculations::DVector<float, 3> get_size();
        void set_size(std::array<float, 3> size);
        void set_size(calculations::DVector<float, 3> vel);
    };

}
#endif