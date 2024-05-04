#include <iostream>
#include <string>
#include <sstream>

#include "game.hpp"

//Makes it so you don't need to write std::cout
using namespace std;

//Need this function in c++
int main()
{

    //Move you take
    string action;
    //If turn should be repeated or not because action is valid/invalid
    string repeat;

    //if should exit out of loop.
    bool breaking = false;

    //instance of all commands necessary.
    Game game = Game();

    //The game continues while below condition is true
    while(game.getPlayerHp() > 0){
        
        /* If the condition is not broken within it keeps asking 
        what you whant to do. If they do not chose a valid option
        it asks again.*/

        while (!breaking)
        {
            //Decide turn
            cout << game.turnDecide() << "\n\nAction: ";

            //Put the decided turn in action varaible.
            cin >> action;
            repeat = game.setAction(action);
            
            
            if(repeat == "")
            {
                breaking = true;  
            }
            else
            {
                cout << repeat;
            }
        }

        //Stats of both sides.
        cout << game.displayStats();
        breaking = false;

        if (game.getPlayerHp() == 0 )
        {
            cout << game.isDead() << endl;
            break;
        }
        if (game.getEnemyHp() == 0 )
        {
            //Add this to game.cpp later so you can have a lot more such as loot drops.
            game.genNewEnemy();
            cout << game.enemyDefeated();

        }
    }
    return 0;
}