#ifndef _RANDOM_HPP_
#define _RANDOM_HPP_

#include <random>

class Random {
    private:
        static std::mt19937 generator;
        static std::uniform_int_distribution<int> distribution;
        static void changeDist(int a, int b);
    public:
        static int randRange(int a, int b);
        virtual ~Random() = 0;
};

#endif