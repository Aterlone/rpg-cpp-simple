#ifndef UNIT_HPP
#define UNIT_HPP

#include <string>
#include "../items/itemsGathered.hpp"

struct UnitStats
{
    private:
        std::string name;
        // current hp
        int hp_c;
        // max hp
        int hp_m;
        int dmg;
        //total dmg
        int t_dmg;
        WeaponStats weapon;
    public:
        UnitStats(std::string Name, int Hp, int Dmg);

        std::string getName();
        int getHp_C();
        void setHp(int newHp);

        int getHp_M();
        int getDmg();
        void setDmg();

        void setWeapon(WeaponStats &Weapon);
        
};

#endif