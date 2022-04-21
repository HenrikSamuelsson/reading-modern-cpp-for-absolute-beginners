#include <iostream>

int main()
{
    const int i1 = 123;
    std::cout << "Constant integer i1 = " << i1 << '\n';

    const double d = 456.789;
    std::cout << "Constant double d value = " << d << '\n';
    
    const std::string s = "Hello World!";
    std::cout << "Constant std::string s = " << s << '\n';

    const int i2 = i1;
    std::cout << "Constant integer i2  = " << i2 << '\n';
}
