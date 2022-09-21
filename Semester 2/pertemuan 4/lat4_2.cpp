#include <iostream>
#include <math.h>
using namespace std;

float Luas, Keliling;

int main(){

    awal:

    char tanya;

    //system("cls||clear");
    cout<<"Nama  : Indra Dwi Aryadi"<<endl;
    cout<<"NIM : xxxxxxxxx"<<endl;
    cout<<"======================================\n";
    cout<<"Membuat Program menu Untuk menghitung Luas dan Keliling Segitiga, Persegi Panjang, Lingkaran"<<endl;
    cout<<"======================================\n";
    cout<<"1. Tekan 1/S/s maka menghitung Segitiga\n";
    cout<<"2. Tekan 2/P/p Maka menghitung Persegi Panjang\n";
    cout<<"3. Tekan 3/L/l maka menghitung Lingkaran\n";
    cout<<"======================================\n";
    cout<<"Masukan Menu : ";
    cin>>tanya;

    switch(tanya)
    {
        case 'S':
        case 's':
        case '1':

            float alas, tinggi, sisi;

            cout<<"===============================\n";
            cout<<"Menghitung Luas dan Keliling Segitiga\n";
            cout<<"================================\n";

            cout<<"Masukan alas : ";
            cin>>alas;

            cout<<"Masukan tinggi : ";
            cin>>tinggi;

            cout<<"Masukan Sisi : ";
            cin>>sisi;

            Luas = 0.5 * alas * tinggi;
            Keliling = sisi+sisi+sisi;

            cout<<"Keliling Segitiga = "<<Keliling<<endl;
            cout<<"Luas Segitiga = "<<Luas<<endl;

            break;

        case 'P':
        case 'p':
        case '2':

            float panjang, lebar;

            cout<<"===============================\n";
            cout<<"Menghitung Luas dan Keliling Persegi Panjang\n";
            cout<<"================================\n";

            cout<<"Masukan Panjang  = ";
            cin>>panjang;

            cout<<"Masukan Lebar = ";
            cin>>lebar;

            Luas = panjang * lebar;
            Keliling = 2*(panjang+lebar);

            cout<<"Luas Persegi Panjang = "<<Luas<<endl;
            cout<<"Keliling Persegi Panjang = "<<Keliling<<endl;
            
            break;
        
        case 'L':
        case 'l':
        case '3':

            int pangkat;
            float jari_jari, pi, setengahLingkaran;

            cout<<"===============================\n";
            cout<<"Menghitung Luas dan Keliling Lingkaran\n";
            cout<<"================================\n";

            cout<<"Masukan Jari - Jari = ";
            cin>>jari_jari;

            pangkat = pow(jari_jari,2);
            pi = 3.14;
            Luas = pi * pangkat;
            Keliling = pi * jari_jari;
            setengahLingkaran = 2 * pi * jari_jari;

            cout<<"Luas Lingkaran = "<<Luas<<endl;
            cout<<"Keliling Lingkaran = "<<Keliling<<endl;
            cout<<"Keliling setengah Lingkaran = "<<setengahLingkaran<<endl;

            break;

        default:

            cout<<"Pilihan tidak ada\n";
            system("exit");
    }

    char ulang;

    cout<<"ingin mengulang kembali ? [y/N] = ";
    cin>>ulang;

    if(ulang=='y' || ulang=='Y'){
        goto awal;
    }
    else if(ulang=='N' || ulang=='n')
    {
        goto akhir;
    }

    akhir:
        cout<<"\nterimakasih sudah menggunakan Program buatan : "<<endl;
        cout<<"Nama : Indra Dwi Aryadi \n";
        cout<<"NIM : xxxxxxxxx\n";
        cout<<"Teknik Informatika";

        return 0;
}
