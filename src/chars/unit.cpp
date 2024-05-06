#include "unit.hpp"
#include <string>

UnitStats::UnitStats(std::string Name, int Hp, int Dmg) : name(Name), hp_c(Hp), hp_m(Hp), dmg(Dmg){};

std::string UnitStats::getName() {return name;}
int UnitStats::getHp_C() {return hp_c;}
void UnitStats::setHp(int newHp) {hp_c = newHp;}
int UnitStats::getHp_M() {return hp_m;}
int UnitStats::getDmg() {return dmg;}
