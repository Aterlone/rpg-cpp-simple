#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

struct ItemStats
{
    private:
        std::string name;
        std::string description;
    public:
        ItemStats(std::string Name, std::string Desc);

        std::string getName();
        std::string getDesc();
};

#endif