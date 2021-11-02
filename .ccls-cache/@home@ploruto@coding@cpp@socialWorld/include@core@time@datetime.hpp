#ifndef SW_DATETIME
#define SW_DATETIME
#include <string>

namespace tick
{
    class Datetime
    {
    private:
        unsigned long long m_date_time_tick;

    public:
        Datetime(unsigned long long tick);

        bool operator<(const Datetime &dt);
        bool operator>(const Datetime &dt);

        std::string get_date();
        std::string get_time();

        void set_date_time(unsigned long long tick);
    };

}

#endif