#include "../../../include/utils/calculations/suRandom.hpp"
#include <random>

using su_random::suRandom;

suRandom::suRandom()
{
    srand(543);
}

suRandom *suRandom::get_instance()
{
    static suRandom instance;
    return &instance;
}

int suRandom::get_random_int()
{
    return rand() - (int)(RAND_MAX / 2);
}

int suRandom::get_random_int(int min, int max)
{
    return min + (rand() % (int)(max - min + 1));
}

float suRandom::get_random_float()
{
    return static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
}

float suRandom::get_random_float(float min, float max)
{
    return min + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (max - min)));
}

double suRandom::get_random_double()
{
    return (double)rand() / RAND_MAX;
}

double suRandom::get_random_double(double min, double max)
{
    double f = (double)rand() / RAND_MAX;
    return min + f * (max - min);
}
