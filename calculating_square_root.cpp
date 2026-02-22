/* Write a program to calculate the square root of a double number x (received
as input) with two methods using sqrt(x) and pow(x, 0.5). Print out the two
results to 2 digits after the decimal point. Remember to check the positivity of
x before the calculation.*/

#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    std::cout << "Enter a positive number: " << std::endl;
    double num1 = 0, num2 = 0;
    double sqroot = 0;
    double expo = 0;
    std::cin >> num1 >> num2;
    if (num1, num2 >=0)
    {
        sqroot = sqrt(num1);
        std::cout << "Square root of " << num1 << ": " << std::fixed << std::setprecision (2)<< sqroot << std::endl;
        expo = pow(num1,num2);
        std::cout << "Exponentiation of " << num1 << ": " << std::fixed << std::setprecision(2) << expo << std::endl;
    }
    else
    {
        std::cout << "Invalid Entry - Please re check your numbers" << std::endl;
    }
    return 0;
}