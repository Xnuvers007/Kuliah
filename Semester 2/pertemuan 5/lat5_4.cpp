// Buatlah program menampilkan bilangan ganjil dan genap, Tampilan Output 
// sebagai berikut (simpan dengan nama lat5_4.cpp)
// Ganjil : 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 ……
// Ganjil : 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 .……

#include <iostream>
using namespace std;

int main()
{
    awal:
    int pilihan, batasan;
    cout << "Pilihan : " << endl;
    cout << "1. Bilangan Ganjil" << endl;
    cout << "2. Bilangan Genap" << endl;
    cout << "Code by Indra Dwi Aryadi (xxxxxxxxxxx)" << endl;
    cout << "Pilihan : ";
    cin >> pilihan;
    cout << "Batasan : ";
    cin >> batasan;
    cout << "Hasil : ";
    if (pilihan == 1)
    {
        cout<<"Bilangan Ganjil sampai batasan "<<batasan<<" adalah : \n";
        for (int i = 1; i <= batasan; i++)
        {
            if (i % 2 == 1)
            {
                cout << i << " ";
            }
        }
    }
    else if (pilihan == 2)
    {
        cout<<"Bilangan Genap sampai batasan "<<batasan<<" adalah : \n";
        for (int i = 1; i <= batasan; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        cout << "Pilihan tidak tersedia";
    }

    char tanya;
    cout<<"\n\nApakah ingin mengulang program? (y/n) : ";
    cin>>tanya;
    if(tanya=='y' || tanya=='Y'){
        goto awal;
    }
    else if(tanya=='n' || tanya=='N'){
        cout<<"Terima Kasih";
        exit(0);
    }
    else{
        cout<<"Terima Kasih";
        exit(0);
    }
}
