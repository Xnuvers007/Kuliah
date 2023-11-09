#include <iostream>
using namespace std;

struct BarangSembako {
    string NamaBarang;
    int Jumlah;
    double Harga;
};

struct Mahasiswa {
    string NIM;
    string Nama;
};

int main() {
    Mahasiswa mahasiswa;
    mahasiswa.NIM = "211011450468";
    mahasiswa.Nama = "Indra Dwi Aryadi";

    BarangSembako sembako1;
    sembako1.NamaBarang = "Beras";
    sembako1.Jumlah = 5;
    sembako1.Harga = 12000.0;

    BarangSembako sembako2;
    sembako2.NamaBarang = "Minyak Goreng";
    sembako2.Jumlah = 3;
    sembako2.Harga = 15000.0;

    cout << "\nData Mahasiswa" << endl;
    cout << "NIM  : " << mahasiswa.NIM << endl;
    cout << "Nama : " << mahasiswa.Nama << endl;

    cout << "\nData Barang Sembako" << endl;
    cout << "1. Nama Barang     : " << sembako1.NamaBarang << endl;
    cout << "   Jumlah          : " << sembako1.Jumlah << " pcs" << endl;
    cout << "   Harga per item  : Rp " << sembako1.Harga << endl;

    cout << "\n2. Nama Barang     : " << sembako2.NamaBarang << endl;
    cout << "   Jumlah          : " << sembako2.Jumlah << " pcs" << endl;
    cout << "   Harga per item  : Rp " << sembako2.Harga << endl << endl;

    return 0;
}
