#ifndef SW_TIME
#define SW_TIME
#include "./datetime.hpp"

namespace tick
{
    class TickTime
    {
    private:
        unsigned long long m_current_tick;
        unsigned int m_tick_per_day;

        TickTime();

    public:
        unsigned long long get_current_tick();
        void set_ticks_per_day(unsigned long long ticks);
        static TickTime *get_instance();
        Datetime create_current_datetime();
        unsigned long long next_tick();
    };
}

#endif