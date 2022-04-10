#include "util/Util.hpp"
#include <iostream>
#include <chrono>
#include <thread>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

void rm_spaces(std::string& str) {
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
}

int is_length_equal(std::string& str, char delim) {
    std::string strtmp;
    std::istringstream streamstr(str);

    std::getline(streamstr, strtmp, delim);
    rm_spaces(strtmp);
    size_t size = strtmp.length();
    strtmp.clear();

    while (std::getline(streamstr, strtmp, delim)) {
        rm_spaces(strtmp);
        if (strtmp.size() != size) return 0;
        strtmp.clear();
    }

    return size;
}

int get_nb_lines(std::string& str, char ch) {
    int count = std::count(str.begin(), str.end(), ch);
    if (*(str.end() - 1) == '\n') return count - 1;

    return count;
}

void sleep_for(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

void clear() {
    std::system(CLEAR);
}