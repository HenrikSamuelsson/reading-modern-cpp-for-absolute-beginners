#include <iostream>

int main()
{
    auto c = 'a';
    std::cout << "The type of c is deduced as char, the value is: "
              << c << '\n';
    auto i = 123;
    std::cout << "The type of i is deduced as int, the value is: "
              << i << '\n';
    auto d = 3.14;
    std::cout << "The type of d is deduced as double, the value is: "
              << d << '\n';
}
