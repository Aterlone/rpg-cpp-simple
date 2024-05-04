#include "unitStats.hpp"
#include <string>

UnitStats::UnitStats(int charHp, int charDmg, std::string Name) : hp(charHp), dmg(charDmg), name(Name){};

void UnitStats::setHp(int Hp) { hp = Hp; }
int UnitStats::getHp() { return hp; }
int UnitStats::getDmg() { return dmg; }
std::string UnitStats::getName() { return name;}
