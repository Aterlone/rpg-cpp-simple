#include <iostream>
#include "player_stats.hpp"

using namespace std;

int main()
{
    Stats player = Stats(3, 5);
    cout << player.getHp() << player.getDmg() << "\n";
    return 0;
}