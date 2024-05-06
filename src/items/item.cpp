#include "item.hpp"
#include <string>

ItemStats::ItemStats(std::string Name, std::string Desc) : name(Name), description(Desc){};

std::string ItemStats::getName() {return name;}
std::string ItemStats::getDesc() {return description;}