#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include "chars/chars.hpp"

using namespace std;

struct Game 
{
    private:
        UnitStats player;
        UnitStats enemy;
    public:
        Game();

        void play();
        string getPlayerName();

        void readFile(string filename);

        void takeTurn();
        
        void fight(UnitStats &attacker, UnitStats &defender);
        void shop();
        void getStats(UnitStats unit);
        void end();

        void getStatsAll();


};

#endif