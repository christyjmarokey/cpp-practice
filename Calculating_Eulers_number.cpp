/* Write a program to calculate the Euler’s number raised to the power of a
double number x (received as input) with two methods using exp() and pow().
Print out two results.
Hint: the precise value of e can be retrieved as std::numbers::e, required
#include <numbers> // C++20 header. For local setup, g++ -std=c++20 …
*/

#include <iostream>
#include <numbers>
#include <math.h>

int main()
{
    //std::numbers::e;
    // since we don't know the C++ version running on the online compiler we used the manuall e value. Other wise we can use std::numbers::e;, if the C++ version is 20 or above.
    double e = 2.71828;
    double x = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> x;
    std::cout << "Euler's number raised to the power of " << x << exp(x) << std::endl;
    std::cout << "Euler's number raised to the power of " << x << pow(e,x) << std::endl;
    return 0;
}