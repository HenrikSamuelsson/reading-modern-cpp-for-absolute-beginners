/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-15-04.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 15.4 Strings
 *
 * Solution for exercise 15.4 from the book Modern C++ for Absolute Beginners
 *
 * A program that defines two strings and then combines this into a new string.
 *
 * Key takeaways from this exercise:
 *
 */

#include <iostream>
#include <string>

 /**
 * @brief String concatenation using the + operator on two strings.
 */
int main()
{
    std::string s1 = "Hello ";
    std::string s2 = "World!";
    std::string s3 = s1 + s2;
    std::cout << s3 << '\n';
}
