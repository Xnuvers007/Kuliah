#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct Mahasiswa {
    char Nim[13];
    char Nama[25];
    char Alamat[40];
    short Umur;
};

void Baca(Mahasiswa* Mhs);
void Cetak(Mahasiswa* Mhs);

int main() {

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl << endl;

    Mahasiswa Mhs;
    Mahasiswa* ptrMhs = &Mhs;

    cout << "Membaca Nilai Anggota Struktur \n";
    Baca(ptrMhs);
    cout << "\nMencetak Nilai Anggota Struktur ";
    Cetak(ptrMhs);
    getch();
}

void Baca(Mahasiswa* Mhs) {
    cout << "NIM    : ";
    cin.getline(Mhs->Nim, 13);
    cout << "Nama   : ";
    cin.getline(Mhs->Nama, 25);
    cout << "Alamat : ";
    cin.getline(Mhs->Alamat, 40);
    cout << "Umur   : ";
    cin >> Mhs->Umur;
}

void Cetak(Mahasiswa* Mhs) {
    cout << "\nNIM    : " << Mhs->Nim;
    cout << "\nNama   : " << Mhs->Nama;
    cout << "\nAlamat : " << Mhs->Alamat;
    cout << "\nUmur   : " << Mhs->Umur;
}
