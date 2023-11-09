#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

struct Tinggal {
    char Jalan[40];
    char Kota[15];
    char Pos[5];
};

struct Tgl_Lahir {
    int Tanggal;
    int Bulan;
    int Tahun;
};

struct Mahasiswa {
    char Nim[13];
    char Nama[25];
    Tinggal Alamat;
    Tgl_Lahir Lahir;
};

int main() {

    cout << "==========================="<<endl;
    cout << "Nama      : Indra Dwi Aryadi\n";
    cout << "NIM       : 211011450468\n\n";
    cout << "==========================="<<endl<<endl;

    Mahasiswa Mhs[2];
    int i;
    
    cout << "SILAHKAN MASUKAN"<<endl;

    for (i = 0; i < 2; i++) {
        cout << "====================" << endl;
        cout << "NIM       : ";
        cin >> Mhs[i].Nim;
        cout << "Nama      : ";
        cin >> Mhs[i].Nama;
        cout << "Alamat    : \n";
        cout << "\tJalan    : ";
        cin >> Mhs[i].Alamat.Jalan;
        cout << "\tKota     : ";
        cin >> Mhs[i].Alamat.Kota;
        cout << "\tKode Pos : ";
        cin >> Mhs[i].Alamat.Pos;
        cout << "Tanggal Lahir    : \n";
        cout << "\tTanggal  : ";
        cin >> Mhs[i].Lahir.Tanggal;
        cout << "\tBulan    : ";
        cin >> Mhs[i].Lahir.Bulan;
        cout << "\tTahun    : ";
        cin >> Mhs[i].Lahir.Tahun;
        cout << "====================" << endl;
        cout << endl;
    }

    cout << "\n\nMencetak Kembali Nilai Anggota\n\n";
    for (i = 0; i < 2; i++) {
        cout << "====================" << endl;
        cout << "\nNIM       : " << Mhs[i].Nim;
        cout << "\nNama      : " << Mhs[i].Nama;
        cout << "\nAlamat    : \n";
        cout << "\tJalan   : " << Mhs[i].Alamat.Jalan<<endl;
        cout << "\tKota    : " << Mhs[i].Alamat.Kota<<endl;
        cout << "\tKode Pos : " << Mhs[i].Alamat.Pos<<endl;
        cout << "\nTanggal Lahir : " << Mhs[i].Lahir.Tanggal << "-" << Mhs[i].Lahir.Bulan << "-" << Mhs[i].Lahir.Tahun<<endl;
        cout << "====================" << endl;
        cout << endl;
    }

    getch();
}
