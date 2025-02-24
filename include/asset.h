#ifndef ASSET_H
#define ASSET_H

#include "currency.h"

class Asset
{
private:
    double value;
    Currency currency;
public:
    Asset(const Currency& _currency) : value(0), currency(_currency) {};
    Asset(double _value, const Currency& _currency) : value(_value), currency(_currency) {};
    
    void exchange(Currency& new_currency);
    std::string show() const;
    void add(Asset x);
    void multiply(double m);
    
    double getValue();
    Currency getCurrency();

    Asset operator + (Asset a);

    Asset operator * (double m);

    friend std::ostream& operator<<(std::ostream& os, const Asset& obj)
    {
        os << obj.show();
        return os;
    }
};

#endif
