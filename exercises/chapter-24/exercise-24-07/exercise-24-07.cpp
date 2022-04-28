#include <iostream>

class MyClass
{
private:
    int i;
    double d;

public:
    MyClass(int ii, double dd);
    void printData();
};

MyClass::MyClass(int ii, double dd)
    : i{ii}, d{dd}
{
}

void MyClass::printData()
{
    std::cout << i << ' ' << d << '\n';
}

int main()
{
    MyClass o{123, 45.6};
    o.printData();
}
