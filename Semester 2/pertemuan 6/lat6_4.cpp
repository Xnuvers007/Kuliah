#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int bil1 = 0, bil2=0, bil3=0,akhir;

cout<<"=============================================================="<<endl;
cout<<"              Indra Dwi Aryadi (xxxxxxxxxxx)                 "<<endl;
cout<<"=============================================================="<<endl;
cout<<"Masukkan batas : ";
cin>>akhir;
cout<<"=============================================================="<<endl;

cout<<"1.Menampilkan deret angka 1 sampai "<<akhir<<"                      :  ";
    while(bil1<=akhir)
        {
            cout<<bil1<<" ";
            bil1++;
        }
cout<<endl;

cout<<"2.Menampilkan deret bilangan genap dari angka 1 sampai "<<akhir<<"  :  ";
    while(bil2<akhir)
        {
            bil2=bil2+2;
            cout<<bil2<<" ";
        }
cout<<endl;

cout<<"3.Menampilkan deret bilangan ganjil dari angka 1 sampai "<<akhir<<" :  ";
    while(bil3<akhir)
    {
        bil3=bil3+1;
        cout<<bil3<<" ";
        bil3++;
    }

return 0;
}
