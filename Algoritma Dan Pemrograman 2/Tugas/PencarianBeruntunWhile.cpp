// Membuat program untuk pencarian berurutan dengan menggunakan algoritma while

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b, c, d, z[50];

    cout<<"Pencarian Berulang"<<endl;
    cout<<"masukan banyak data : ";
    cin>>d;
    cout<<"Masukan banyaknya "<<d<<" data : \n\n";
    a=1;
    while(a<=d)
    {
        cout<<"Masukan data ke - "<<a<<" = ";
        cin>>z[a];
        a++;
    }
    cout<<endl;
    cout<<"Input bilangan yang B : ";
    cin>>b;
    cout<<endl;

    c=0;
    a=0;
    while(a<=d)
    {
        if (z[a]==b)
        {
            c=1;
            cout<<"data ditemukan pada indeks ke - "<<a<<endl;
        }
        a++;
    }
    if (c==0)
    {
        cout<<"Data tidak ditemukan"<<endl;
    }
    getch();
}