#include <iostream>

/**
 * @brief     Prints a message to the console.
 */
void printMessage()
{
    std::cout << "Hello World from a function.";
}

/**
 * @brief     Invokes a function that in turn will print a message.
 */
int main()
{
    printMessage();
}
