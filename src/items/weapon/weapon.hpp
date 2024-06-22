
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "../item.hpp"
#include <string>

struct WeaponStats : public ItemStats
{
    private:
        int dmg;
    public:
        WeaponStats(int Dmg, std::string Name, std::string Desc);
        int getDmg();
};

#endif