#include "include/core/time/tickTime.hpp"
#include <iostream>

int main()
{
    tick::TickTime *time = tick::TickTime::get_instance();
    std::cout << time->get_current_tick() << std::endl;
    time->next_tick();
    std::cout << time->create_current_datetime().get_date() << std::endl;
    return 0;
}