#include <iostream>

class MyClass
{
private:
    int i1;
    int i2;
    double d;

public:
    MyClass(int i1_, int i2_, double d_);  // user-provided constructor
    MyClass(const MyClass &rhs); // user-defined copy constructor
    void printdata();
};

MyClass::MyClass(int i1_, int i2_, double d_)
    : i1{i1_}, i2{i2_}, d{d_}
{
    std::cout << "User-defined constructor invoked." << '\n';
}

MyClass::MyClass(const MyClass &rhs)
    : i1{rhs.i1}, i2{rhs.i2}, d{rhs.d}
{
    std::cout << "User-defined copy constructor invoked." << '\n';
}

void MyClass::printdata()
{
    std::cout << "i1 = " << i1 << ", i2 = " << i2 << ", d = " << d << '\n';
}

int main()
{
    MyClass o1{123, 456, 7.89};  // Invokes the user-defined constructor.
    o1.printdata();

    MyClass o2 = o1;             // invokes the user-defined copy constructor.
    o2.printdata();
}
