#include <iostream>
using namespace std;

int main ()
{
    float n1,n2,n3,n4,n5,average;

    cout<<"Enter value of n1";
    cin>>n1;
    cout<<"Enter value of n2";
    cin>>n2;
    cout<<"Enter value of n3";
    cin>>n3;
    cout<<"Enter value of n4";
    cin>>n4;
    cout<<"Enter value of n5";
    cin>>n5;

    average = (n1+n2+n3+n4+n5)/5;
    
    cout<<"The average is:"<<average;

    return 0;
}
