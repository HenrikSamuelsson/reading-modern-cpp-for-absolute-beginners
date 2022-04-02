/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-09-02.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 9.2 Two Inputs
 * 
 * A program that accepts two integer numbers from the standard input and then
 * prints them.
 * 
 * Key takeaways from this exercise:
 *  - Chain the >> operator to input into multiple variables in one statement
 *  - Input with multiple >> operators can be separated by space or line break
 */

#include <iostream>

int main()
{
    std::cout << "Pleas enter two integer numbers: ";
    int x0;
    int x1;
    std::cin >> x0 >> x1;
    std::cout << "You entered: " << x0 << " and " << x1 << '\n';
}
