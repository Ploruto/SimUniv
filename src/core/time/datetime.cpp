#include "../../../include/core/time/datetime.hpp"
#include "../../../include/core/time/tickTime.hpp"

using tick::Datetime;

Datetime::Datetime(unsigned long long tick) : m_date_time_tick(tick) {}

bool Datetime::operator<(const Datetime &dt)
{
    return this->m_date_time_tick < dt.m_date_time_tick;
}

bool Datetime::operator>(const Datetime &dt)
{
    return this->m_date_time_tick > dt.m_date_time_tick;
}

void Datetime::set_date_time(unsigned long long tick)
{
    this->m_date_time_tick = tick;
}

char *Datetime::get_date()
{
    TickTime::get_instance()->get_current_tick();
    return "placeHolderForNow";
}

char *Datetime::get_time()
{
    return "placeHolderForNow";
}