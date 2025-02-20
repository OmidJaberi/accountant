#include <string>
#include "asset.h"

void Asset::exchange(Currency& new_currency)
{
    value *= currency.getVal() / new_currency.getVal();
    currency = new_currency;
}

double Asset::getValue()
{
    return value;
}

Currency Asset::getCurrency()
{
    return currency;
}

std::string Asset::show()
{
    int val = value;
    int dec = value * 100 - val * 100;
    std::string s = std::to_string(val);
    if (dec > 0)
    {
        s = s + "." + (dec < 10 ? "0" : "") + std::to_string(dec);
    }
    return s;
}
