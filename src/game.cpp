#include "characters/player.hpp"
#include "characters/rat.hpp"
#include "characters/golem.hpp"

#include "actions/combat.hpp"
#include "actions/turnStart.hpp"
#include "unitStats.hpp"
#include "game.hpp"

#include <string>
#include <sstream>
#include <random>

using namespace std;

Game::Game() : player(PlayerStats()), enemy(RatStats()), action("1") {};

int Game::getPlayerHp() {player.getHp();}
int Game::getEnemyHp() {enemy.getHp();}

string Game::setAction(string &Action) 
{
    action = Action;
    return Game::turnLogic(action);
}

string Game::turnLogic(string &Action)
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
    oss << "Player Hp: " << player.getHp() << "\n" << enemy.getName() << " Hp: " << enemy.getHp() << "\n\n";
    return oss.str();
}

string Game::isDead() {return "Game Over";}

string Game::enemyDefeated()
{
    ostringstream oss;
    oss << "Enemy Exterminated. " << enemy.getName() << " appeared. \n\n";
    return oss.str();
}

void Game::genNewEnemy() 
{
    int number;
    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<> distr(0, 3); 

    number = distr(gen);

    if(number == 1)
    {
        enemy = RatStats();
    }
    else
    {
        enemy = GolemStats();
    }
}