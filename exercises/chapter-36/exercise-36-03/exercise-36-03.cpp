#include <iostream>
#include <memory>

class MyClass
{
private:
    int x;
    double d;

public:
    MyClass(int aX, double aD)
        : x{aX}, d{aD}
    {
    }
    void printData()
    {
        std::cout << "Data members values are: " << '\n'
                  << '\t' << "x = " << x << '\n'
                  << '\t' << "d = " << d << '\n';
    }
};

int main()
{
    std::unique_ptr<MyClass> p = std::make_unique<MyClass>(123, 456.789);
    p->printData();
}
