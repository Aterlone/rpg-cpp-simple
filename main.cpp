#include <iostream>
#include <string>
#include "unitStats.hpp"
#include "combat.hpp"

using namespace std;

int main()
{
    UnitStats player = UnitStats(50, 5);
    Combat combatActions = Combat();
    string action;
    while(player.getHp() > 0){
        cout << "Attack?" << "\n";
        cin >> action;

        combatActions.hit(player, player);

        cout << "Player Hp: " << player.getHp() << "\n" << endl;
    }
    cout << "Game Over \n" << endl;
    return 0;
}