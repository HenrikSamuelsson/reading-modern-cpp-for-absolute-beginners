/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-06-04.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 6.4 Initialization
 *
 * Solution for exercise 6.4 from the book Modern C++ for Absolute Beginners.
 * 
 * Program that uses initializer list to initialize three variables.
 * 
 * Key takeaways from this exercise:
 *  - There are multiple ways to initialize a variable
 *  - Using braces and the variable value is one way to initialize a variable
 */

#include <iostream>

/**
 * @brief     Initialization of variables using initializer list.
 */
int main()
{
    char c{'a'};
    int i{123};
    double d{456.78};

    std::cout << "The value of a char variable is: " << c << '\n';
    std::cout << "The value of an int variable is: " << i << '\n';
    std::cout << "The value of a double variable is: " << d << '\n';
}
