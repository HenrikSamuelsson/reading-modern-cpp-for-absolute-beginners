/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-06-03.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 6.3 Definition
 *
 * Solution for exercise 6.3 from the book Modern C++ for Absolute Beginners.
 * 
 * Program that defines three variables inside the main function.
 *
 * Key takeaways from this exercise:
 *  - A definition is a declaration and a initialization of a variable
 *  - A definition will cause a memory location to be reserved for the variable
 *  - All definitions are declarations but not all declarations are definitons
 */

#include <iostream>

/**
 * @brief   Defines three variables of various types.
 */
int main()
{
    char c = 'a';
    int i = 42;
    double d = 0.5;

    std::cout << "The value of a char variable is: " << c << '\n';
    std::cout << "The value of an int variable is: " << i << '\n';
    std::cout << "The value of a double variable is: " << d << '\n';
}
