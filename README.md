# Bomberman : Single Threaded Edition
Bomberman : Single Threaded Edition is a small C++ school project I wrote in 2022. We were instructed to make a small Bomberman game, but we hadn't studied multi-threading yet so the game is fully sequential. The goal is to kill enemies using bombs, and attain the aim tile by breaking walls to win the game. The game is also multi-player, you can add as many players as you want by placing player tiles on the map. You can compile the game using CMake and MSVC for Windows or Make for Linux.

## Usage
```bash
Usage (Windows): bomberman.exe [options...]
Usage (Linux): ./bomberman [options...]

Options:
--nocolor			Disable color support
```
## Tile characters
The source directory contains two maps to play the game (maps/map.txt and maps/map2.txt). You have to provide the relative path to the map when starting a new game to load the map. You can create a map for yourself using a simple text file and this pattern :

|  Character  |        Tile           |
| :---------: | :-------------------: |
|     P       |Player                 |
|     O       |Bomb                   |
|     @       |Explosion              |
|     W       |Wall                   |
|     w       |Broken wall            |
|     I       |Unbreakable wall       |
|     M       |Monster                |
|     G       |Ghost                  |
|     B       |Bowman                 |
|     L       |More life item         |
|     U       |Power up item          |
|     E       |More bombs item        |
|     Y       |Control bombs item     |
|     #       |Move through walls item|
|     S       |Speed up item          |
|     R       |Bigger explosion item  |
|     X       |Aim                    |
|     _       |Air                    |

## Options
When starting the game, a config.txt file is created in the binary folder. You can configure a specific color for each tile. By default, all tiles' color are set as WHITE.

|  Colors         |
| :-------------: |
|BLACK            |
|RED              |
|GREEN            |
|YELLOW           |
|BLUE             |
|MAGENTA          |
|CYAN             |
|WHITE            |
|BOLDBLACK        |
|BOLDRED          |
|BOLDGREEN        |
|BOLDYELLOW       |
|BOLDBLUE         |
|BOLDMAGENTA      |
|BOLDCYAN         |
|BOLDWHITE        |
