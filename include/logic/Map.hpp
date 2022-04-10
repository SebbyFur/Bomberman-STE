#ifndef _MAP_HPP_
#define _MAP_HPP_

#include "logic/Tile.hpp"
#include "element/ElementsConfig.hpp"
#include "util/Position.hpp"
#include "entity/Player.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <fstream>

class Map {
    private:
        int width;
        int height;
        int logic_size;

        std::string strmap;
        Tile** logic_map;

        const ElementsConfig& display;

        std::vector<Entity*> mobs;
        std::vector<Player*> players;

        bool aim_spawned;
        int players_lost;
    public:
        Map(std::string path, const ElementsConfig& display);
        ~Map();
        const std::string& get_str() const;
        Tile* getTileAtPos(int x, int y) const;
        Tile* getTileAtPos(const Position pos) const;
        std::vector<Player*> getPlayers() const;
        int getMobsLeft() const;
        void minusPlayersLost();
        const ElementsConfig& getConfig() const;
        int hasAimSpawned() const;
        void setAimSpawned(int aim_spawned);
        int tick();
        friend std::ostream& operator<<(std::ostream& out, const Map& map);
};

#endif