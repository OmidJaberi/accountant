#include <iostream>
#include "currency.h"
#include "asset.h"

int main()
{
    Currency IRR("IRR");
    Currency Toman("Toman", IRR, 10);
    Currency USD("USD", IRR, 900000);

    Asset a(2, USD);
    Asset b(45000, Toman);
    Asset c(900000, IRR);
    std::cout << (a + b) * 10 - c * 10 << std::endl;

    return 0;
}
