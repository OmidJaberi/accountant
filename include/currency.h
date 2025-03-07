#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>
#include <unordered_map>

class Currency
{
private:
    std::string name;
    double relative_val;
    std::unordered_map<std::string, double> exchange_rate;
public:
    Currency(std::string _name);
    Currency(std::string _name, Currency base, double exchange_rate);
    void add_rate(std::string&, double);
    float getVal();
    std::string getName() const;
};

#endif
