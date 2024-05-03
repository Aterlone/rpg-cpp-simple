#include "characters/player.hpp"
#include "characters/rat.hpp"
#include "actions/combat.hpp"
#include "actions/turnStart.hpp"
#include "unitStats.hpp"
#include "game.hpp"

#include <string>
#include <sstream>

using namespace std;

Game::Game() : player(PlayerStats()), enemy(RatStats()), action("1") {};

int Game::getPlayerHp() {player.getHp();}
int Game::getEnemyHp() {enemy.getHp();}

string Game::setAction(string &Action) 
{
    action = Action;
    return Game::turnStuff(action);
}

string Game::turnStuff(string &Action)
{
    Combat combat = Combat();

    if (action == "1")
    {
        //action is fight so fighting stuff
        //From combat.hpp is a hit action
        combat.hit(player, enemy);

    }
    else if (action == "2") {return displayStats();}
    else if (action == "3") {}
    else{
        
        return "Choose a valid action! \n\n";
    }
    
    combat.hit(enemy, player);
    return "";
}

string Game::turnDecide()
{
    return "1. Fight \n2. Display Stats \n3. Nothing";
}

string Game::displayStats() 
{
    std::ostringstream oss; 
    oss << "Player Hp: " << player.getHp() << "\nRat Hp: " << enemy.getHp() << "\n\n";
    return oss.str();
}

string Game::isDead() {return "Game Over";}