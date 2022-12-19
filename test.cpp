#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, i, n;

    cout<<"Masukan Data N: ";
    cin>>n;

    i = 1;
    a = 0;
    b = 1;
    c = 2;
    d = 0;
    while(d<=n)
    {
        if(i<=2)
        {
            cout<<"   "<<i;
        }
        if(i>=3)
        {
            d = a + b + c;
            cout<<"   "<<d;
            a = b;
            b = c;
            c = d;
            cout<<endl;
            cout<<"data C menjadi : "<<c;
            cout<<endl;
        }
        i++;
        if(d==n)
        {
            cout<<endl<<"Data Ditemukan";
            break;
        }
    }
}