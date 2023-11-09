#include<iostream>
#include<conio.h>
using namespace std;
int main()
    {
        int Nilai [ 20 ];
        int Posisi [ 20 ];
        int i, N, Bilangan, Banyak=0;
        bool ketemu;

        cout << "\nNama : Indra Dwi Aryadi\n";
        cout << "NIM  : 211011450468\n\n";

        cout<<"Masukan Banyaknya Bilangan = ";
        cin>>N;

        cout<<endl;

        for (i=0; i<N ;i++)
        {
            cout<<"Masukan elemen ke-"<<i<<" = ";
            cin>>Nilai [i];
        }

        cout<<"\n\nDeretan Bilangan    = ";

        for (i=0; i<N; i++)
            cout<<Nilai [i]<<" ";
            cout<<"\n\nMasukan Bilangan yang akan dicabut = ";
            cin>>Bilangan ;
        
        for(i=0; i<N; i++)
        {
            if(Nilai [i]==Bilangan)
            {
                ketemu = true;
                Posisi [Banyak]=i;
                Banyak++;
            }
        }
    if(ketemu)
    {
        cout<<"Bilangan "<< Bilangan<<" ditentukan sebanyak "<< Banyak;
        cout<<"\npada posisi ke                     = ";
        for(i=0; i<Banyak ; i++)
        cout<<Posisi [i]<<" ";
        cout<<"\n";
    }
    else
        cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
        cout<<endl;
        getch ();
}