#ifndef SU_RANDOM
#define SU_RANDOM

namespace su_random
{
    struct suRandom
    {
        suRandom();

        static suRandom *get_instance();

        int get_random_int();
        int get_random_int(int min, int max);

        float get_random_float();
        float get_random_float(float min, float max);

        double get_random_double();
        double get_random_double(double min, double max);
    };
}

#endif