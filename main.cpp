#include <iostream>
#include "currency.h"
#include "asset.h"

int main()
{
    Currency IRR("IRR");
    Currency Toman("Toman", IRR, 10);
    Currency USD("USD", IRR, 900000);

    Asset a(2, USD);
    Asset b(50000, Toman);
    std::cout << (a + b) << std::endl;

    return 0;
}
