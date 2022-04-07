/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-15-05.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 15.5 Strings from Standard Input
 *
 * Solution for exercise 15.5 from the book Modern C++ for Absolute Beginners.
 *
 * Program that reads in a string including spaces and then prints it out in the
 * console.
 *
 * Key takeaways from this exercise:
 *  - A line of text can be retrieved from a user using std::getline
 *  - The string library shall be included when using std::getline
 *  - std::getline extracts characters from an input stream provided as argument
 *  - std::getline places extracted characters in a string provided as argument
 *  - The newline character will by default end the extraction
 */

#include <iostream>
#include <string>

 /**
  * @brief     Read and print a persons full name.
  */
int main()
{
    std::string fullname;
    std::cout << "Please enter first and last name on this row: ";
    std::getline(std::cin, fullname);
    std::cout << "Your name is: " << fullname;
}
