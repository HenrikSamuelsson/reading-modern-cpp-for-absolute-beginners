/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-15-07.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 15.7 Finding a single Character
 * 
 * Solution for exercise 15.7 from the book Modern C++ for Absolute Beginners.
 */
#include <iostream>
#include <string>

int main()
{
    std::string s = "Hello C++ World.";
    char c = 'C';
    auto characterfound = s.find(c);
    if (characterfound != std::string::npos)
    {
        std::cout << c << " found at position: " << characterfound << '\n';
    }
    else
    {
        std::cout << c << " was not found." << '\n';
    }
    c = 'c';
    characterfound = s.find(c);
    if (characterfound != std::string::npos)
    {
        std::cout << c << " found at position: " << characterfound << '\n';
    }
    else
    {
        std::cout << c << " was not found." << '\n';
    }
}
