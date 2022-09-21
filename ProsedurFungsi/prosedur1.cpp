#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum is: "<<add(a,b);
}
