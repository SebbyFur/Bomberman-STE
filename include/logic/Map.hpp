#ifndef _MAP_
#define _MAP_

#include <string>
#include <map>

class Map {
    private:
        std::string map;
    public:
        Map(std::string path);
        const std::string& to_str() const;
        friend std::ostream& operator<<(std::ostream& out, const Map& map);
};

#endif