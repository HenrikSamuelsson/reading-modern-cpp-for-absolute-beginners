/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-15-08.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 15.8 Finding a Substring
 */

#include <iostream>
#include <string>

int main()
{
    std::string s = "Hello C++ World.";
    std::string subString = "C++";
    std::cout << "Searching for \"" << subString << "\" in \"" << s << "\"\n";
    auto substringFound = s.find(subString);
    if (substringFound != std::string::npos)
    {
        std::cout << "Substring found at position: " << substringFound << '\n';
    }
    else
    {
        std::cout << "Substring was not found." << '\n';
    }
}
