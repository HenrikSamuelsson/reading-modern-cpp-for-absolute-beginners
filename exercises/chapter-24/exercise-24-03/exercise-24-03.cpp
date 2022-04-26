#include <iostream>

class HelloWorld
{
    public:

    void printMessage()
    {
        std::cout << "Hello World!" << '\n';
    }
};

int main(void)
{
    HelloWorld helloWorld;
    helloWorld.printMessage();
}
