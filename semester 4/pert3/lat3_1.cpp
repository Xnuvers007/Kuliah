#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct Mahasiswa
{
    char Nim[13];
    char Nama[25];
    char Alamat[40];
    short Umur;
};

int main()
{

    cout << "==========================="<<endl;
    cout << "Nama   : Indra Dwi Aryadi\n";
    cout << "NIM    : 211011450468\n\n";
    cout << "==========================="<<endl<<endl;

    Mahasiswa Mhs;

    cout << "NIM    : ";
    cin.getline(Mhs.Nim, 13);
    cout << "Nama   : ";
    cin.getline(Mhs.Nama, 25);
    cout << "Alamat : ";
    cin.getline(Mhs.Alamat, 40);
    cout << "Umur   : ";
    cin >> Mhs.Umur;

    cout << "\n\n\nNIM    : " << Mhs.Nim;
    cout << "\nNama   : " << Mhs.Nama;
    cout << "\nAlamat : " << Mhs.Alamat;
    cout << "\nUmur   : " << Mhs.Umur;

    getch();
    return 0;
}