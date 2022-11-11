#include <iostream>
using namespace std;

int main()
{
    int m, d, a, s;
    int num1 = 4, num2 = 2;
    
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