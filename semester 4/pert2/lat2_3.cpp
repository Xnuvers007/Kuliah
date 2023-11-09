#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int Nilai [20];
    int i, N, Terbesar;

    cout << "\nNama : Indra Dwi Aryadi\n";
    cout << "NIM  : 211011450468\n\n";
    cout<<"Masukan Banyaknya Bilangan = ";
    cin>>N;

    cout<<endl;

    //Membaca elemen array
    for(i=0; i<N; i++)
    {
        cout<<"Masukan elemen ke-"<<i<<" = ";
        cin>>Nilai [i];
    }
    Terbesar = Nilai [1]; //elemen pertama dibuat sebagai Terbesar
    for (i=1; i<N; i++)
    {
        if (Nilai [i]>Terbesar)
        Terbesar = Nilai [i];
    }
    //Mencetak Bilangan Terbesar
    cout<<"\nBilangan Terbesar   = "<< Terbesar;

getch();

}