#include <iostream>

using namespace std;

int main ()
{
    int a, b, c, d, z[50];

    cout<<"Pencarian Berulang\n";
    cout<<"masukan banyak data : ";
    cin>>d;
    cout<<"Masukan banyaknya "<<d<<" data : \n\n";
    for(a=1; a<=d; a++)
    {
        cout<<"Masukan data ke - "<<a<<" = ";
        cin>>z[a];
    }
    cout<<endl;
    cout<<"Input bilangan yang B : ";
    cin>>b;
    cout<<endl;

    c=0;
    for(a=0; a<=d; a++)
    {
        if (z[a]==b)
        {
            c=1;
            cout<<"data ditemukan pada indeks ke - "<<a<<endl;
        }
    }
    if (c==0)
    {
        cout<<"Data tidak ditemukan"<<endl;
    }
}