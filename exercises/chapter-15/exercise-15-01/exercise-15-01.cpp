/**
 * @file        exercise-15-01.cpp
 * @author      Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief       Exercise 15.1 Array Definition
 *
 * Solution for exercise 15.1 from the book Modern C++ for Absolute Beginners.
 *
 * Program that defines and initializes an array of five doubles and then change
 * the values of the first and last array elements.
 *
 * Key takeaways from this exercise:
 *  - An array is declared by using brackets after the name in the declaration
 *  - Array initialization can be done with a comma separated list with braces
 *  - A individual element is accessed using brackets and an index number
 *  - Array indexing is 0-based, i.e. first element have index 0
 */

#include <iostream>

 /**
 * @brief   Defines an array of five doubles and changes the content.
 */
int main()
{
    double arr[5] = { 1.23, 2.45, 8.52, 6.3, 10.15 };
    std::cout << "The first array element is: " << arr[0] << '\n';
    std::cout << "The last array element is: " << arr[4] << '\n';
    std::cout << "Changing first and last array element." << '\n';
    arr[0] = 2.56;
    arr[4] = 3.14;
    std::cout << "The first array element is: " << arr[0] << '\n';
    std::cout << "The last array element is: " << arr[4] << '\n';
}
