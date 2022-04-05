/**
 * @copyright Copyright (c) 2022 Henrik Samuelsson
 * @file      exercise-09-06.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 9.6 Integral and Floating-point Division
 * 
 * Solution for exercise 9.6 from the book Modern C++ for Absolute Beginners.
 *
 * A program that illustrates the differences between integral and
 * floating-point division.
 *
 * Key takeaways from this exercise:
 *  - Division of two integers will result in an integer result
 *  - Eventual fraction in integer division is truncated away i.e. rounded down
 *  - Division with a floating-point operand gives a floating-point result
 */

#include <iostream>

 /**
 * @brief     Test of division with different types.
 */
int main()
{
    int i = 9 / 2;
    std::cout << "Result with only integer numbers: " << i << '\n';
    double d = 9 / 2;
    std::cout << "Result with result storage of type double: " << d << '\n';
    d = 9.0 / 2;
    std::cout << "Result with one operand of type double: " << d << '\n';
}
