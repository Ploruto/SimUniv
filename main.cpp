#include "include/core/time/tickTime.hpp"
#include <iostream>

void test()
{
    tick::TickTime::get_instance()->next_tick();
}
int main()
{
    test();
    std::cout << "f1" << std::endl;

    tick::TickTime *time = tick::TickTime::get_instance();
    std::cout << time->get_current_tick() << std::endl;
    time->next_tick();
    std::cout << time->create_current_datetime().get_date() << std::endl;
    std::cout << time->get_current_tick() << std::endl;
    time->next_tick();
    std::cout << time->get_current_tick();
    return 0;
}