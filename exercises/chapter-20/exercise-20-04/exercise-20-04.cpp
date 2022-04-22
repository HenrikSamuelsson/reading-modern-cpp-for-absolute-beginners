#include <iostream>
#include <string>

void customMessage(const std::string& message);

int main()
{
    const std::string testMessage = "Test message text";
    customMessage(testMessage);
}

void customMessage(const std::string& message)
{
    std::cout << message << '\n';
}
