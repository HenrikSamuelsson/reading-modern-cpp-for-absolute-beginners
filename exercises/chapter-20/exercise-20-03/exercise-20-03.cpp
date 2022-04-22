#include <iostream>

int multiplication(int factor1, int factor2);

int main()
{
    int product = multiplication(2, 5);
    std::cout << "Product = " << product << '\n';
}

int multiplication(int factor1, int factor2)
{
    return factor1 * factor2;
}
