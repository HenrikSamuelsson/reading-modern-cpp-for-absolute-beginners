/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @file      exercise-24-01.cpp
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     Exercise 24.1 Class Instance
 *
 * Solution for exercise 24.1 from the book Modern C++ for Absolute Beginners.
 *
 * A program that defines an empty class called MyClass and makes an instance of
 * MyClass in the main function.
 *
 * Key takeaways from this exercise:
 *  - The keyword class is used when defining a class
 *  - Class names will conventionally start with an uppercase letter
 *  - A class definition shall have a semicolon at the end
 *  - An instance is made using the classname followed by a chosen instance name
 */

/**
 * @brief Empty dummy class, introduced just learn how to define a class.
 */
class EmptyClass
{
};

/**
 * @brief Makes an instance of EmptyClass called e.
 */
int main()
{
    EmptyClass e;
}
