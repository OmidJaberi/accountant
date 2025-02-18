#include <iostream>
#include "currency.h"

int main()
{
    Currency IRR("IRR");
    Currency Toman("Toman", IRR, 10);
    std::cout << Toman.getVal() << std::endl;
    return 0;
}
