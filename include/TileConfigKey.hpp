#ifndef _TILE_KEYS_
#define _TILE_KEYS_

#include <string>

class TileConfigKey {
    private:
        std::string strKey;
        char charKey;
    public:
        TileConfigKey(std::string strKey, char charKey);
        char getChar() const;
        std::string getStr() const;
        std::string to_str() const;
        bool operator<(const TileConfigKey& key) const;
        bool operator==(char charKey) const;
        bool operator==(std::string strKey) const;
        friend std::ostream& operator<<(std::ostream& out, const TileConfigKey& key);
};

#endif