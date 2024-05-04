#ifndef UnitStat_HPP
#define UnitStat_HPP

#include <string>

struct UnitStats
{
//varaibles which apply for all units
protected:
    int hp;
    int dmg;
    std::string name;

//giving perms to edit as necessary
public:
    UnitStats(int charHp, int charDmg, std::string Name);

    void setHp(int Hp);
    int getHp();
    int getDmg();
    std::string getName();

};

#endif