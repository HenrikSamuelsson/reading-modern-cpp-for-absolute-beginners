#include <iostream>

class MyClass
{
    public:
    void printMessage();
};

void MyClass::printMessage()
{
    std::cout << "Hello World!" << '\n';
}

int main()
{
    MyClass greeting;
    greeting.printMessage();
}
