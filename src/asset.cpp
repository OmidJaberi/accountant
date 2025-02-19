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
    return "";
}
