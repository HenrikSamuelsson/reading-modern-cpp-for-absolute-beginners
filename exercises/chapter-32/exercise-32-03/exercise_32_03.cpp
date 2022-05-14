#include <iostream>

namespace dummyNameSpace
{
    void dummyFunction();
}

void dummyNameSpace::dummyFunction()
{
    std::cout << "Invoked dummyFunction in the dummyNameSpace scope." << '\n';
}

int main()
{
    std::cout << "Exercise 32.3" << '\n';
    dummyNameSpace::dummyFunction();
}
