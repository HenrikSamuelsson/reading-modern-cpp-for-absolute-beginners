/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-15-03.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 15.3 Reference Type
 *
 * Solution for exercise 15.3 from the book Modern C++ for Absolute Beginners.
 *
 * A program that defines a reference to a double object and changes both of
 * these.
 *
 * Key takeaways from this exercise:
 *  - The & symbol is used to define a reference
 *  - Changes of a reference will also change the underlying object
 *  - Changes of an object will also change references to the object
 */

#include <iostream>

/**
 * @brief Program illustrating that a reference is an alias for an object.
 *
 * /return int
 */
int main()
{
    double d = 3.14;
    double& r = d;
    std::cout << "The values are: " << d << " and " << r << '\n';

    std::cout << "Changing the value of the reference." << '\n';
    r = 6.28;
    std::cout << "The values are: " << d << " and " << r << '\n';

    std::cout << "Changing the value of the double." << '\n';
    d = 9.45;
    std::cout << "The values are: " << d << " and " << r << '\n';
}
