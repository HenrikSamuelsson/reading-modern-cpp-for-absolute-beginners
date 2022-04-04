/**
 * @copyright Copyright 2022 Henrik Samuelsson
 * @author    Henrik Samuelsson (henrik.samuelsson@gmail.com)
 * @brief     9.5 Post-Increment and Compound Assignment
 *
 * Solution for exercise 9.4 from the book Modern C++ for Absolute Beginners.
 *
 * A program that defines an integer variable with a value, postincrements the
 * value, and add to the value using the compound assignment operator. The value
 * is printed out afterwards.
 *
 * Key takeaways from this exercise:
 *  - Postincrement means that a value is incresaed by 1 after eventual usage
 *  - The operator symbol for post increment is ++
 *  - Compound assignment operators do both arithmetic operation and assignment
 */

#include <iostream>

 /**
 * @brief     Adding to a value using postincrement and compound assignment.
 */
int main()
{
    int x = 123;
    x++;
    x += 20;
    std::cout << "x is now " << x << '\n';
}
