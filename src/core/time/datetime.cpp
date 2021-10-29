#include "../../../include/core/time/datetime.hpp"
#include "../../../include/core/time/tickTime.hpp"
#include <string>

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

std::string Datetime::get_date()
{
    TickTime::get_instance()->get_current_tick();
    return "someTest";
}

std::string Datetime::get_time()
{
    return "placeHolderForNow";
}