/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-24-02.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 24.2 Class with Data members
 *
 * Solution for exercise 24.2 from the book Modern C++ for Absolute Beginners.
 *
 * A program that defines a class called ClassWithData with three data members 
 * of different types and creates an instance of the class inside the main 
 * function.
 *
 * Key takeaways from this exercise:
 *  - A class can include class specific data
 *  - Data included in a class are called data members
 *  - Data members are declared inside the class
 */

/**
 * @brief Dummy class that includes three data members of different types.
 */
class ClassWithData
{
    char c;
    int i;
    bool b;
};

/**
 * @brief Creates an instance of type ClassWithData called cwd.
 */
int main()
{
    ClassWithData cwd;
}
