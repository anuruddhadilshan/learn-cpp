#include "io.h"
#include "add.h"
#include <iostream>

//int add(int x, int y);

int main()
{
    //std::cout << "The sum of 3 and 4 is: " << add(3,4) << '\n';
    int x = readNumber(1);
    int y = readNumber(2);

    int ans = add(x,y);

    writeAnswer(ans);

    return 0;
}