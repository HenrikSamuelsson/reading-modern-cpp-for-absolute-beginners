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
