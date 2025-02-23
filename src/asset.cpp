#include <string>
#include <iostream>
#include "asset.h"

void Asset::exchange(Currency& new_currency)
{
    value *= currency.getVal() / new_currency.getVal();
    currency = new_currency;
}

std::string Asset::show() const
{
    int val = value;
    int dec = value * 100 - val * 100;
    std::string s = std::to_string(val);
    if (dec > 0)
    {
        s = s + "." + (dec < 10 ? "0" : "") + std::to_string(dec);
    }
    s += ' ' + currency.getName();
    return s;
}

void Asset::add(Asset x)
{
    x.exchange(currency);
    value += x.getValue();
}

double Asset::getValue()
{
    return value;
}

Currency Asset::getCurrency()
{
    return currency;
}

Asset Asset::operator + (Asset a)
{
    Asset ans(value, currency);
    ans.add(a);
    return ans;
}
