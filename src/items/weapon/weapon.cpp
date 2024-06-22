#include "../item.hpp"
#include "weapon.hpp"

WeaponStats::WeaponStats(int Dmg, std::string Name, std::string Desc) : ItemStats("Name", "Desc"), dmg(3){};

int WeaponStats::getDmg() {return dmg;}
