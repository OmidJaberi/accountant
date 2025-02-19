#include <iostream>
#include "currency.h"
#include "asset.h"

int main()
{
    Currency IRR("IRR");
    Currency Toman("Toman", IRR, 10);
    Currency USD("USD", IRR, 900000);

    Asset money(100, USD);
    money.exchange(Toman);

    std::cout << money.getValue() << std::endl;
    return 0;
}
