#ifndef UnitStat_HPP
#define UnitStat_HPP

#include <string>

struct UnitStats
{
//varaibles which apply for all units
protected:
    int hp;
    int dmg;

//giving perms to edit as necessary
public:
    UnitStats(int charHp, int charDmg);

    void setHp(int Hp);
    int getHp();
    int getDmg();
    

};

#endif