#include "currency.h"
    
Currency::Currency(std::string _name) : name(_name)
{
    name = _name;
    relative_val = 1;
}

Currency::Currency(std::string _name, Currency base, double exchange_rate) : name(_name)
{
    name = _name;
    relative_val = base.getVal() * exchange_rate;
}

float Currency::getVal()
{
    return relative_val;
}
