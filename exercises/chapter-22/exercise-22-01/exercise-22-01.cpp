#include <iostream>

int main()
{
    // The storage for x and y is allocated here and is placed on the stack.
    int x = 123;
    int y = 456;
    std::cout << "The values with automatic storage durations are: " << x
              << " and " << y;
    // The storage for x and y is deallocated here at the end of the code block.
}
