#ifndef _MAP_
#define _MAP_

#include <string>
#include <map>

class Map {
    private:
        std::string map;
    public:
        Map(std::string path);
        friend std::ostream& operator<<(std::ostream& out, const Map& map);
};

#endif