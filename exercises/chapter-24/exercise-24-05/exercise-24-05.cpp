#include <iostream>

class MyClass
{
private:
    int x;

public:
    void setX(int myValue)
    {
        x = myValue;
    }
    int getX()
    {
        return x;
    }
};

int main()
{
    MyClass o;
    o.setX(666);
    std::cout << "The number of the beast: " << o.getX();
}
