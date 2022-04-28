#include <iostream>

class MyClass
{
public:
    MyClass();
    ~MyClass();
};

MyClass::MyClass()
{
    std::cout << "MyClass constructor invoked." << '\n';
}

MyClass::~MyClass()
{
    std::cout << "MyClass destructor invoked." << '\n';
}

int main()
{
    MyClass myClassInstance;
}
