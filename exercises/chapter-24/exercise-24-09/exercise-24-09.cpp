#include <iostream>
#include <string>

class MyClass
{
private:
    double d;
    std::string s;

public:
    // Constructor
    MyClass(double dd, std::string ss)
        : d{dd}, s{ss}
    {
        std::cout << "MyClass constructor invoked." << '\n';
    }

    // Move Constructor
    MyClass(MyClass&& otherobject)
        : d{std::move(otherobject.d)}, s{std::move(otherobject.s)}
    {
        std::cout << "MyClass move constructor invoked." << '\n';
    }

    void printdata()
    {
        std::cout << "The value of d is: " << d << '\n';
        std::cout << "The value of s is: " << s << '\n';
        std::cout << '\n';
    }
};

int main()
{
    std::cout << "Hold on, cronstructing object o1." << '\n';
    MyClass o1{3.14, "String originally constructed in o1."};
    o1.printdata();

    std::cout << "Hold on, cronstructing object o2." << '\n';
    MyClass o2 = std::move(o1);
    o2.printdata();
}
