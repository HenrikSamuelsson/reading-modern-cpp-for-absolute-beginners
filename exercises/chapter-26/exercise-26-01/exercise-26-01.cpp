#include <iostream>
#include <string>

class Person
{
private:
    std::string name;

public:
    explicit Person(const std::string &aName)
        : name{aName}
    {
    }
    std::string getname() const { return name; }
};

class Student : public Person
{
private:
    int semester;

public:
    Student(const std::string &aName, int aSemester)
        : Person::Person{aName}, semester{aSemester}
    {
    }
    int getsemester() const { return semester; }
};

int main()
{
    Person person{"John Doe"};
    std::cout << person.getname() << '\n';

    Student student{"Jane Doe", 2};
    std::cout << student.getname() << '\n';
    std::cout << "Semester is: " << student.getsemester() << '\n';
}
