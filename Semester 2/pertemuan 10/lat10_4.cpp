#include <iostream>
using namespace std;
int main()
{
    char s[]= "pointer masih digunakan.";
    char *p;
    p = s;
    cout << "p = " << p << endl;
    cout << "s = " << s << endl;
    cout << "*p = " << *p << endl;
    
    // s = "pointer masih digunakan.";
    // cout<< s; 
    
    return 0;
}