/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-15-02.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 15.2 Pointer to an Object
 *
 * Solution for exercise 6.3 from the book Modern C++ for Absolute Beginners.
 *
 * Program that defines an object of type double and define a pointer that
 * points to this object. The value of the object is then printed by
 * dereferencing the pointer.
 *
 * Key takeaways from this exercise:
 *  - A pointer is declared using the type and a *
 *  - Pointer assignment to the address of an a variable is done by using a &
 *  - Use a * to access what a pointer points at, this is called dereferencing
 *  - Note how the * symbol is used in two different ways related to pointers 
 */

#include <iostream>

/**
 * @brief Using pointer dereferencing to print a value.
 */
int main()
{
    double d = 0.5;
    double* p = &d;
    std::cout << "The value of the pointed-to object is: " << *p;
}
