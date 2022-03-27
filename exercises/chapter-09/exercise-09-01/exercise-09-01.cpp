/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-09-01.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 9.1 Standard Input
 *
 * Solution for exercise 9.1 from the book Modern C++ for Absolute Beginners.
 *
 * A program that accepts an integer number from the standard input and then
 * print the number.
 *
 * Key takeaways from this exercise:
 *  - Input of data from console is handled by std::cin and the operator >>
 *  - The library file iostream need to be included if to use std::cout
 */

#include <iostream>

int main()
{
    std::cout << "Enter a integer number: ";
    int i;
    std::cin >> i;
    std::cout << "You entered: " << i << '\n';
}
