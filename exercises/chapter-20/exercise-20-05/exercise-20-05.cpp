#include <iostream>

double division(double dividend, double divisor);
int division(int dividend, int divisor);

int main()
{
    double doubleResult = division(3.0, 2.0);
    std::cout << "Result double division = " << doubleResult << '\n';

    int intResult = division(3, 2);
    std::cout << "Result int division = " << intResult << '\n';

}

double division(double dividend, double divisor)
{
    std::cout << "Double division version invoked." << '\n';
    return dividend / divisor;
}

int division(int dividend, int divisor)
{   
    std::cout << "Int divisinon version invoked." << '\n';
    return dividend / divisor;
}
