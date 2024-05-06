#include <iostream>
#include <fstream>
#include <string>

#include "game.hpp"
#include "chars/chars.hpp"

using namespace std;

Game::Game() : player(PlayerStats("R")), enemy(GardronStats()) {};


void Game::play()
{
    player = PlayerStats(getPlayerName());

    while(player.getHp_C() > 0) takeTurn();    
}

string Game::getPlayerName()
{
    string name;
    cout << "What do you want your name to be?\n";
    cin >> name;

    return name;
}

void Game::readFile(string filename)
{
    ifstream inputFile(filename);

    if (!inputFile.is_open()) { 
        cerr << "Error opening the file!" << endl; 
    } 
    
    string line;

    while (getline(inputFile, line)) { 
        cout << line << endl; 
    } 
  
    inputFile.close();
}

void Game::takeTurn()
{
    readFile("C:/Users/Tane/rpg-cpp-simple/src/text/options.txt");
    //option
    string o;
    cin >> o;

    if (o == "1")
    {
        fight(player, enemy);
        fight(enemy, player);

        getStatsAll();    
    }
    else if (o == "2") shop();
    else if (o == "3") getStatsAll();
    else if (o == "4") {fight(enemy, player); getStatsAll();}
    else if (o == "5") end();
    else cout << "Choose a valid option";
}

void Game::fight(UnitStats &attacker, UnitStats &defender)
{
    defender.setHp(defender.getHp_C() - attacker.getDmg());
}
void Game::shop()
{
    cout << "Nothing you can buy right now.";
}
void Game::getStats(UnitStats unit)
{
    cout << "=========" << unit.getName() << "'s Stats=========\n";
    cout << "Name: " << unit.getName() << "\nHp: " << unit.getHp_C() << "/" << unit.getHp_M() << "\nDmg: " << unit.getDmg() << "\n";
}
void Game::end()
{
    cout << "Going to exit.\n";
    exit(0);
} 

void Game::getStatsAll()
{
    getStats(player); 
    getStats(enemy);
}