#ifndef SW_TIME
#define SW_TIME
#include "./datetime.hpp"

namespace time
{
    struct Time
    {
    private:
        unsigned long long m_current_tick;
        const unsigned int m_tick_per_day;

    public:
        unsigned long long get_current_tick();
    };
}

#endif