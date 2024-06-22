#ifndef POORLYFORGEDSWORD_HPP
#ifndef POORLYFORGEDSWORD_HPP

#include "weapon.hpp"
#include <string>

struct WeaponStats : public WeaponStats
{
    private:
        int dmg;
    public:
        WeaponStats(int Dmg, std::string Name, std::string Desc);
        int getDmg();
};

#endif