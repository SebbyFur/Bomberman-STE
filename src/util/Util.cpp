#include "util/Util.hpp"

void rm_spaces(std::string& str) {
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
}

int is_length_equal(std::string& str, char delim) {
    std::string strtmp;
    std::istringstream streamstr(str);

    std::getline(streamstr, strtmp, delim);
    size_t size = strtmp.size();
    strtmp.clear();

    while (std::getline(streamstr, strtmp, delim)) {
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