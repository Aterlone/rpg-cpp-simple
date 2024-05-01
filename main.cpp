#include <iostream>
#include "unitStats.hpp"

using namespace std;

int main()
{
    UnitStats player = UnitStats(50, 5);
    player.hit(player.getDmg());
    cout << player.getHp() << player.getDmg() << "\n";
    return 0;
}