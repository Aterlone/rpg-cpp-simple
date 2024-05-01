#include <iostream>
#include <string>
#include "unitStats.hpp"

using namespace std;

int main()
{
    UnitStats player = UnitStats(50, 5);
    string action;
    while(player.getHp() > 0){
        cout << "Attack?" << "\n";
        cin >> action;

        player.hit(player.getDmg());

        cout << "Player Hp: " << player.getHp() << "\n" << endl;
    }
    cout << "Game Over \n" << endl;
    return 0;
}