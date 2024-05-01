#include "unitStats.hpp"


UnitStats::UnitStats(int charHp, int charDmg) : hp(charHp), dmg(charDmg){};

void UnitStats::setHp(int Hp) { hp = Hp; }
int UnitStats::getHp() { return hp; }
int UnitStats::getDmg() { return dmg; }
void UnitStats::hit(int Dmg) { hp -= Dmg; }
