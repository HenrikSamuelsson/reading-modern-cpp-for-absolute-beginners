#include <iostream>

class MyClass
{
private:
    int x;
    double d;

public:
    MyClass(int xx, double dd)
        : x{xx}, d{dd}
    {
    }

    void printvalues()
    {
        std::cout << "The values of x is: " << x << '\n';
        std::cout << "The value of d is: " << d << '\n';
    }

    MyClass &operator-=(const MyClass &rhs)
    {
        this->x -= rhs.x;
        this->d -= rhs.d;
        return *this;
    }

    friend MyClass operator-(MyClass lhs, const MyClass &rhs)
    {
        lhs -= rhs;
        return lhs;
    }
};

int main()
{
    MyClass three{3, 3.0};
    MyClass one{1, 1.0};
    MyClass result = three - one;
    result.printvalues();
}
