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
    std::cout << ((a + b) * 10 - c * 10) / 5 << std::endl;
    Asset d(0, USD);
    d += ((a + b) * 10 - c * 10) / 5;
    d *= 100;
    d -= Asset(100, USD);
    d /= 3;
    std::cout << d << std::endl;
    return 0;
}
