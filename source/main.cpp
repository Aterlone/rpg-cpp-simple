#include <iostream>
#include <string>

#include "../source/characters/player.hpp"
#include "../source/characters/rat.hpp"
#include "../source/actions/combat.hpp"

using namespace std;

int main()
{
    PlayerStats playerOne = PlayerStats();
    RatStats enemyOne = RatStats();
    Combat combatActions = Combat();
    string action;
    while(playerOne.getHp() > 0){
        cout << "Attack?" << "\n";
        cin >> action;

        combatActions.hit(playerOne, enemyOne);
        combatActions.hit(enemyOne, playerOne);

        cout << "Player Hp: " << playerOne.getHp() << "\n" << "Rat Hp: " << enemyOne.getHp() << endl;
    }
    cout << "Game Over \n" << endl;
    return 0;
}