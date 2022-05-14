#include <iostream>

// Definition of a namespace.
namespace A
{
    // Definition of a nested namespace.
    namespace B
    {
        void myFunction();
    }
}

// Definition of function declared in a nested namespace.
void A::B::myFunction()
{
    std::cout << "Hello World from a function inside a nested namespace."
              << '\n';
}

int main()
{
    A::B::myFunction();

    // Introduce an entire namespace to the curren scope.
    using namespace A::B;
    myFunction();
}
