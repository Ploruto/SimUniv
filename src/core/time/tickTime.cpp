#include "../../../include/core/time/tickTime.hpp"
#include "../../../include/core/time/datetime.hpp"
using tick::TickTime;

TickTime::TickTime()
{
    this->m_tick_per_day = 0LL;
    this->m_current_tick = 0LL;
}

unsigned long long TickTime::get_current_tick()
{
    return this->m_current_tick;
}

TickTime *TickTime::get_instance()
{
    if (!instance)
        TickTime *instace;
    return instance;
}

tick::Datetime TickTime::create_current_datetime()
{
    return Datetime{this->m_current_tick};
}

void TickTime::set_ticks_per_day(unsigned long long ticks)
{
    this->m_tick_per_day = ticks;
}

unsigned long long TickTime::next_tick()
{
    this->m_current_tick++;
    return this->m_current_tick;
}