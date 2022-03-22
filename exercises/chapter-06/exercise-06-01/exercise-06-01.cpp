/**
 * @file exercise-06-01.cpp
 * @copyright Copyright (c) 2022
 * @author Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief Exercise 6.1 Hello World and Comments
 *
 * Solution for exercise 6.1 in the book Modern C++ for Absolute Beginners.
 *
 * Program that has a comment in it, outputs "Hello World." on one line, and
 * "C++ rocks!" on a new line.
 *
 * Key takeaways from this exercise:
 *  - The code in the function main is the execution start point of C++ program
 *  - A single line comment starts with // and ends when the line ends
 *  - Text can be output to the console using std::cout and the operator <<
 *  - A backslash and the letter n causes a line break in console output
 *  - Statements in C++ shall end with a semicolon
 *
 */

#include <iostream>

/**
 * @brief Outputs two messages to the console.
 *
 * @return int 
 */
int main()
{
    // Below lines will output text in the console using cout.
    std::cout << "Hello World" << '\n';
    std::cout << "C++ rocks!";
}
