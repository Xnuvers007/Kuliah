// Buatlah program menampilkan bilangan Genap dan Ganjil menggunakan Fungsi!
#include <iostream>
using namespace std;

int total(int a, int b);
int main()
{
    int a=0, b=0, batas;
    cout<<"======================================="<<endl;
    cout<<"Code By Indra Dwi Aryadi (211011450468)"<<endl;
    cout<<"======================================="<<endl;
    cout<<"Masukan Batas : ";
    cin>>batas;
    cout<<"Bilangan Genap : ";
    while(a<=batas)
    {
        cout<<a<<" ";
        a+=2;
    }
    cout<<endl;
    cout<<"Bilangan Ganjil : ";
    while(b<=batas)
    {
        b=b+1;
        cout<<b<<" ";
        b++;
    }
    cout<<endl;
    return 0;

}

int total(int a, int b)
{
    int total=0;
    for(int i=0; i<=a; i++)
    {
        total+=i;
    }
    for(int i=0; i<=b; i++)
    {
        total+=i;
    }
    return total;
}
