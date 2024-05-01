#include <iostream>
#include "player_stats.hpp"

using namespace std;

int main()
{
    Stats player = Stats(50, 5);
    player.hit(player.getDmg());
    cout << player.getHp() << player.getDmg() << "\n";
    return 0;
}