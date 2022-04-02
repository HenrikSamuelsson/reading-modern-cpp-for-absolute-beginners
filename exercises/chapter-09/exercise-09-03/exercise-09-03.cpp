/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-09-03.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 9.3 Multiple Inputs
 *
 * Solution for exercise 9.3 from the book Modern C++ for Absolute Beginners.
 *
 * A program that accepts three values of different types from a user and prints
 * the values afterwards.
 *
 * Key takeaways from this exercise:
 *  - std::cin can handle multiple types of values
 *  - Wrong user input is tricky for example a user might write two as int input
 */

#include <iostream>

/**
 * @brief Reads in a char, int, and a double value and then prints these values.
 */
int main()
{
    std::cout << "Please enter a char, an int and a double: ";
    char c;
    int i;
    double d;
    std::cin >> c >> i >> d;
    std::cout << "You entered: " << c << ", " << i << ", and " << d;
}
