#include <iostream>

// Function declaration, also known as function forward declaration.
void printmessage();

int main()
{
    printmessage();
}

// Function definition.
void printmessage()
{
    std::cout << "Hello World from a function.";
}
