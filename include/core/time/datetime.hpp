#ifndef SW_DATETIME
#define SW_DATETIME

namespace time
{
    struct Datetime
    {
    private:
        unsigned long long m_date_time_tick;

    public:
        Datetime(unsigned long long tick);

        bool operator<(const Datetime &dt);
        bool operator>(const Datetime &dt);

        char *get_date(unsigned long long ticks_per_day);
        char *get_time(unsigned long long ticks_per_day);
    };

}

#endif