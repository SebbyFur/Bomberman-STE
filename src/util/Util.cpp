#include "util/Util.hpp"

void rm_spaces(std::string& str) {
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
}

bool is_length_equal(std::string& str, char delim) {
    std::string strtmp;
    std::istringstream streamstr(str);

    std::getline(streamstr, strtmp, delim);
    size_t size = strtmp.size();
    strtmp.clear();

    while (std::getline(streamstr, strtmp, delim)) {
        if (strtmp.size() != size) return false;
        strtmp.clear(); 
    }

    return true;
}