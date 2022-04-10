#include "util/Random.hpp"
#include <ctime>

std::mt19937 Random::generator(time(nullptr));
std::uniform_int_distribution<int> Random::distribution(0, 1);

void Random::changeDist(int a, int b) {
    std::uniform_int_distribution<int>::param_type params(a, b);
    distribution.param(params);
}

int Random::randRange(int a, int b) {
    Random::changeDist(a, b);
    return Random::distribution(Random::generator);
}