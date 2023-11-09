#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int Nilai[10];
    int i, Jumlah = 0;
    float Rata_Rata;

    cout << "\nNama : Indra Dwi Aryadi\n";
    cout << "NIM  : 211011450468\n";

    for (i=0 ; i<10 ; i++)
    {
        cout<<"Masukan elemen ke-"<<i<<" = ";
        cin>>Nilai [ i ] ;
        Jumlah+=Nilai [ i ];
    }
    Rata_Rata= ( float ) Jumlah / 10;
    
    cout<<"\n\nDeretan Bilangan      = ";
    for ( i=0;i<10;i++)
    {
        cout<<Nilai[i]<<" " ;
    }
    
    cout<<"\nJumlah Bilangan       = "<<Jumlah;
    cout<<"\nRata-Rata Bilangan    = "<<Rata_Rata;

getch ();
}