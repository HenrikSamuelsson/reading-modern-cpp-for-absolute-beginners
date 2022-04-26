#include <iostream>

int main()
{
    // Define x to have automatic storage duration.
    int x = 123;
    std::cout << "The variable x holds the value " << x << '\n';
    std::cout << "x lives at the stack at address " << &x << '\n';

    // Allocate memory for an int an copy the value of x to that memory.
    int *p = new int{x};
    std::cout << "The value that p points at is " << *p << '\n';
    std::cout << "p holds the following address at the heap " << p << '\n';
    delete p;
} // End of scope for x here.
