#include <iostream>

int main()
{
    int x = 123;
    int y = 0;
    double d = 456.789;
    bool b = true;

    // Int to double will work fine.
    double doubleResult = static_cast<double>(x);
    std::cout << "Int to double: " << doubleResult << '\n';
    
    // Double to int will truncate away eventual decimals.
    int intResult = static_cast<int>(d);
    std::cout << "Double to int: " << intResult << '\n';
    
    // Int to bool, non-zero numbers casts to true.
    bool boolResult = static_cast<bool>(x);
    std::cout << "Int to bool: " << boolResult << '\n';
    if (boolResult)
    {
        std::cout << "Variable boolResult is true" << '\n';
    }

    // Int to bool, the number 0 casts to false.
    boolResult = static_cast<bool>(y);
    std::cout << "Int to bool: " << boolResult << '\n';
    if (boolResult)
    {
        std::cout << "Variable boolResult is true" << '\n';
    }
}
