#include <iostream>

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
