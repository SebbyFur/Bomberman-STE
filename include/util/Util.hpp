#ifndef _UTIL_HPP_
#define _UTIL_HPP_

#include <string>
#include <sstream>
#include <algorithm>

void rm_spaces(std::string& str);
int is_length_equal(std::string& str, char delim);
int get_nb_lines(std::string& str, char ch);
void sleep_for(int ms);
void clear();

#endif