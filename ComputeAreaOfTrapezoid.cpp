#include <iostream>
using namespace std;

int main ()
{
double basetop, basebot, height, area;

cout<<"Enter value of base top: ";
cin>>basetop;

cout<<"Enter value of base bottom: ";
cin>>basebot;

cout<<"Enter value of height: ";
cin>>height;

area = ((basetop*basebot)/(2)*height);

cout<<"The area of TRAPEZOID is: "<<area;

    return 0;
}
