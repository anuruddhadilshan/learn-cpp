#include <array>
#include <cassert>
#include <iostream>

class Stack
{
private:
    //Use std::array to store the elements
    using Array = std::array<int, 10>;
    using Index = Array::size_type;

    Array m_array {};
    Index m_next {0};
};