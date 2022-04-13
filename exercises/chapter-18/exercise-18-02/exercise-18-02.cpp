#include <iostream>
int main()
{
    int i = 256;
    if (i > 100 && i < 300)
    {
        std::cout << i << " is inside the range 100 to 300" << '\n';
    }
    else
    {
        std::cout << i << " is not inside the range 100 to 300" << '\n';
    }
    bool b1 = true;
    if (i > 100 || b1)
    {
        std::cout << i << " is greater than 100 or b1 is set to true" << '\n';
    }
    else
    {
        std::cout << i << " is less than 101 and b1 is set to false" << '\n';
    }
    bool b2 = !b1;
    if (b2)
    {
        std::cout << "b2 is set to true" << '\n';
    }
    else
    {
        std::cout << "b2 is set to false" << '\n';
    }
}
