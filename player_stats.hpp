#ifndef Stat_HPP
#define Stat_HPP

#include <string>

struct Stats
{
private:
    int hp;
    int dmg;

public:
    Stats(int charHp, int charDmg) : hp(charHp), dmg(charDmg){};

    void setHp(int Hp) { hp = Hp; }
    int getHp() { return hp; }
    int getDmg() { return dmg; }

    void hit(int Dmg) { hp -= Dmg; }
};

#endif