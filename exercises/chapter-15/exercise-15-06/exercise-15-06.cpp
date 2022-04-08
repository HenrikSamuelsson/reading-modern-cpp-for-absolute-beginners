/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-15-06.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 15.6 Creating a Substring
 * 
 * Solution for exercise 15.6 from the book Modern C++ for Absolute Beginners.
 * 
 * Program that creates two substrings from a parent string.
 * 
 * Key takeaways from this exercise:
 *  - The string library member function substr copies a part of a string
 *  - First argument to substr is the start position in the original string
 *  - Second argument to substr is the number of characters to copy
 */

#include <iostream>

/**
 * @brief     Splits a string into substrings based on hardcoded lengths.
 */
int main()
{
    std::string fullname = "Henrik Samuelsson";
    int lengthFirstName = 6;
    int lengthLastName = 10;
    std::string firstname = fullname.substr(0, lengthFirstName);
    std::string lastname = fullname.substr(lengthFirstName + 1, lengthLastName);
    std::cout << "The full name is: " << fullname << '\n';
    std::cout << "The first name is: " << firstname << '\n';
    std::cout << "The last name is: " << lastname << '\n';
}
