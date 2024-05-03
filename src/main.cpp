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
    string repeat;

    bool breaking = false;

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
        //Enemy hits you.

        //Stats of both sides.
        cout << game.displayStats();
        breaking = false;
    }
    cout << game.isDead() << endl;
    return 0;
}