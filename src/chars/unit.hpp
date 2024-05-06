#ifndef UNIT_HPP
#define UNIT_HPP

#include <string>

struct UnitStats
{
    private:
        std::string name;
        // current hp
        int hp_c;
        // max hp
        int hp_m;
        int dmg;
    public:
        UnitStats(std::string Name, int Hp, int Dmg);

        std::string getName();
        int getHp_C();
        void setHp(int newHp);

        int getHp_M();
        int getDmg();
};

#endif