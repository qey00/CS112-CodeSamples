#include <iostream>
using namespace std;

int main()
{
    int num1, num2, m, d, a, s;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    m = num1*num2;
    d = num1/num2;
    a = num1+num2;
    s = num1-num2;
    
    cout << "Multiplication: " << m << endl;
    cout << "Division: " << d << endl;
    cout << "Addition: "<< a << endl;
    cout << "Subtraction: " << s << endl;
    
    
    return 0;
}