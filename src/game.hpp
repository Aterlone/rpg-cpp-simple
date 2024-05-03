#ifndef GAME_HPP
#define GAME_HPP

#include "characters/player.hpp"
#include "unitStats.hpp"

#include <string>

using namespace std;

class Game
{
    private:
        PlayerStats player;

        //Make array later so can have multiple enemies
        UnitStats enemy;

        string action;
    public:
        //Player is dead then returns gameover message. Otherwise don't.
        Game();
                
        int getPlayerHp();
        int getEnemyHp();

        string setAction(string &Action);

        string turnStuff(string &Action);

        string turnDecide();

        string displayStats();
        string isDead();

};


#endif