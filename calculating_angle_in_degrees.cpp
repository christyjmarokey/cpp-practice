/* » Write a program to calculate the angle in degrees (∈ [−180∘
, 180∘
]), rounded to
the nearest integer for which the drone needs to rotate in order to align its
heading towards the user. The drone’s yaw axis points downward (i.e. positive
angle means turn right). The program requests two double inputs 𝑥𝑒
, 𝑦𝑒
- the
user’s position on the drone’s local coordinate system as shown below.
*/

#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    double x = 0, y = 0, z = 0;
    //double pie =  3.14159;
    std::cout << "Enter the the x axis and y axis values" << std::endl;
    std::cin >> x >> y;
    z = -((atan2 (y,x))* (180/M_PI));
    //M_PI give the pie value, it comes from math library.
    std::cout << "The users position in relation to drone in (angle): " << round(z) << std::endl;
    return 0;
}