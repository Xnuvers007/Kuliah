#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa {
    char Nim[13];
    char Nama[25];
    char Alamat[40];
    int Umur;
};

int main() {

    cout << "==========================="<<endl;
    cout << "Nama   : Indra Dwi Aryadi\n";
    cout << "NIM    : 211011450468\n\n";
    cout << "==========================="<<endl<<endl;

    Mahasiswa Mhs[2];

    for (int i = 0; i < 2; i++) {
        // cout<<"==========================="<<endl;
        cout << "Nim   : ";
        cin >> Mhs[i].Nim;
        cout << "Nama  : ";
        cin >> Mhs[i].Nama;
        cout << "Alamat: ";
        cin >> Mhs[i].Alamat;
        cout << "Umur  : ";
        cin >> Mhs[i].Umur;
        // cout<<"==========================="<<endl;
        cout<<endl<<endl;
    }

    cout << "Hasilnya"<<endl;
    for (int i = 0; i < 2; i++) {
        cout<<"================"<<endl;
        cout << "Nim   : " << Mhs[i].Nim;
        cout << "\nNama  : " << Mhs[i].Nama;
        cout << "\nAlamat: " << Mhs[i].Alamat;
        cout << "\nUmur  : " << Mhs[i].Umur<<endl;
        cout<<"================"<<endl;
        cout<<endl;
    }

    getch();
    return 0;
}
