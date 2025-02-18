#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>

class Currency
{
private:
    std::string name;
    double relative_val;
public:
    Currency(std::string _name);
    Currency(std::string _name, Currency base, double exchange_rate);
    float getVal();
};

#endif
