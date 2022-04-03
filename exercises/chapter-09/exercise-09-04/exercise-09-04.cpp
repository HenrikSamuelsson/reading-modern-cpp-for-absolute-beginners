/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-09-04.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 9.4 Inputs and Arithmetic Operations
 *
 * Solution for exercise 9.4 from the book Modern C++ for Absolute Beginners.
 *
 * A program that accepts two integer number, sums them up, and assigns the 
 * result to a third integer. The result is printed out to the console.
 *
 * Key takeaways from this exercise:
 *  - C++ directly suppors multiple basic arithmetic operators such as addition
 *  - Summing numbers, like int and double, is done using the + operator
 */

#include <iostream>

/**
 * @brief     Calculates the sum of two given integers.
 */
int main()
{
    std::cout << "Please enter two integer numbers: ";
    int x;
    int y;
    std::cin >> x >> y;
    int sum = x + y;
    std::cout << "The sum of " << x << " and " << y << " is " << sum;
}
