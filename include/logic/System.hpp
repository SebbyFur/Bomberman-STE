#ifndef _SYSTEM_HPP_
#define _SYSTEM_HPP_

#include "logic/Map.hpp"
#include "element/ElementsConfig.hpp"
#include <string>
#include <memory>

class System {
    private:
        std::unique_ptr<Map> map;
        std::unique_ptr<ElementsConfig> display_config;
    public:
        System(std::string map_path, std::string config_path);
        void startSystem();
};

#endif