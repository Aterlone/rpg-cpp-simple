#include "../characters/player.hpp"
#include "combat.hpp"

void Combat::hit(UnitStats &attacker, UnitStats &defender) 
{
    defender.setHp(defender.getHp() - attacker.getDmg());
}
