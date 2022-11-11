#include <iostream>
using namespace std;

int main ()
{
    int age;

    cout<<"Enter Age: ";
    cin>>age;

    if (age>=18)
    {
        cout<<"You are eligible to vote\n";
    }
    else
    {
        cout<<"You are not Eligible to vote";
    }
    
    cout<<"=========================";

    return 0;
}


