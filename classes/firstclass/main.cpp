#include <iostream>

class DateClass
{
public:
    int m_year {};
    int m_month {};
    int m_day {};

    void print()
    {
        std::cout << m_year << '/' << m_month << '/' << m_day << '\n';
    }
};

/*void print(const DateClass& today)
{
    std::cout << today.m_year << '/' << today.m_month << '/' << today.m_day << '\n';
}*/

int main()
{
    DateClass today {2023, 06, 04};

    today.m_day = 16;

    today.print();

    return 0;
}