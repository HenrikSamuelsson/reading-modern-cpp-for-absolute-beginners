#include <iostream>

int main()
{
    // Define int with dynamic storage duration, placed at the heap.
    // Note that pointer p have automatic storage duration, placed at the stack.
    int *p = new int{123};
    std::cout << "The value with a dynamic storage duration is: " << *p;
    // Need to delete the object when not needed anymore.
    delete p;
}
