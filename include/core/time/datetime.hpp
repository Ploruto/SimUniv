#ifndef SW_DATETIME
#define SW_DATETIME

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

        char *get_date();
        char *get_time();

        void set_date_time(unsigned long long tick);
    };

}

#endif