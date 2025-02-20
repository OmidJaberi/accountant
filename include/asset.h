#ifndef ASSET_H
#define ASSET_H

#include "currency.h"

class Asset
{
private:
    double value;
    Currency currency;
public:
    Asset(const Currency& _currency) : currency(_currency) {};
    Asset(double _value, const Currency& _currency) : value(_value), currency(_currency) {};
    void exchange(Currency& new_currency);
    double getValue();
    Currency getCurrency();
    std::string show();

    friend std::ostream& operator<<(std::ostream& os, Asset& obj)
    {
        os << obj.show();
        return os;
    }
};

#endif
