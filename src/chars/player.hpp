#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "unit.hpp"
#include <string>

struct PlayerStats : public UnitStats
{
    private:
        int income;
    public:
        PlayerStats(std::string Name);
};

#endif