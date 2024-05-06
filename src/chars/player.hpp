#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "unit.hpp"
#include <string>

struct PlayerStats : public UnitStats
{
    PlayerStats(std::string Name);
};

#endif