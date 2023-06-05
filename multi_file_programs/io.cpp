#include "io.h"
#include <iostream>

int readNumber(int n)
{
    std::cout << "Enter number " << n << ": ";
    int x{0};
    std::cin >> x;

    return x;
}

void writeAnswer(int ans)
{
    std::cout << "The sum of the two numbers is : " << ans << '\n';
}