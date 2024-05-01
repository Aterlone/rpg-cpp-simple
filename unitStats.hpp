#ifndef UnitStat_HPP
#define UnitStat_HPP

#include <string>

struct UnitStats
{
private:
    int hp;
    int dmg;

public:
    UnitStats(int charHp, int charDmg);

    void setHp(int Hp);
    int getHp();
    int getDmg();

    void hit(int Dmg);
};

#endif