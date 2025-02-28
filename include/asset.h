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
    void negate();
    void add(Asset x);
    void multiply(double m);
    void divide(double d);
    
    double getValue();
    Currency getCurrency();

    Asset operator + (Asset a);

    Asset operator - (Asset a);

    Asset operator * (double m);

    Asset operator / (double d);

    void operator = (double a);

    void operator = (Asset a);

    void operator += (Asset a);

    void operator -= (Asset a);

    void operator *= (double a);

    void operator /= (double a);

    bool operator == (Asset a);
    
    bool operator < (Asset a);
    
    bool operator <= (Asset a);
    
    bool operator > (Asset a);
    
    bool operator >= (Asset a);
    
    friend std::ostream& operator<<(std::ostream& os, const Asset& obj)
    {
        os << obj.show();
        return os;
    }
};

#endif
