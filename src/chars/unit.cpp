#include "unit.hpp"
#include <string>

UnitStats::UnitStats(std::string Name, int Hp, int Dmg) : name(Name), hp_c(Hp), hp_m(Hp), dmg(Dmg), t_dmg(Dmg), weapon(WeaponStats(0,"None","None")){};

std::string UnitStats::getName() {return name;}
int UnitStats::getHp_C() {return hp_c;}
void UnitStats::setHp(int newHp) {hp_c = newHp;}
int UnitStats::getHp_M() {return hp_m;}
int UnitStats::getDmg() {return t_dmg;}
void UnitStats::setDmg() {t_dmg = dmg + weapon.getDmg();}
void UnitStats::setWeapon(WeaponStats &Weapon)
{
    weapon = Weapon;
    setDmg();
}

