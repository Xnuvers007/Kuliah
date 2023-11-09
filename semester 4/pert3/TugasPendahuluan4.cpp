#include <iostream>
#include <conio.h>
using namespace std;

struct Toko {
    float Harga;
    char nama_buku[20];
    int satuan;
    int jumlah;
    char nama_pembeli[20];
};

int main()
{

    cout << "====================" << endl;
    cout << "Nama         : Indra Dwi Aryadi\n";
    cout << "NIM          : 211011450468\n";
    cout << "====================" << endl;

    const int max_pembeli = 3;
    Toko buku[max_pembeli];
    int i;
    cin.ignore(100, '\n');
    for (i = 0; i < max_pembeli; i++) {
        cout << "====================" << endl;
        cout << "Pembeli ke - " << i + 1 << endl << endl;
        cout << "Nama Pembeli : ";
        cin.getline(buku[i].nama_pembeli, 20);
        cout << "Nama Buku    : ";
        cin.getline(buku[i].nama_buku, 20);
        cout << "Harga        : ";
        cin >> buku[i].Harga;
        cout << "Jumlah       : ";
        cin >> buku[i].jumlah;
        cin.ignore();
        cout << "====================" << endl;
        cout << endl;
    }

    int total_harga = 0;
    for (i = 0; i < max_pembeli; i++) {
        total_harga += buku[i].Harga * buku[i].jumlah;
        cout << "PEMBAYARAN" << endl << "Pembeli ke - " << i + 1 << endl;
        cout << "Total Harga Pembeli " << buku[i].nama_pembeli << " = " << buku[i].Harga * buku[i].jumlah << endl;
        cout << "Atas Nama" << buku[i].nama_pembeli << endl;
        cout << "====================" << endl;
    }

    cout << endl;
    cout << "Total Harga = " << total_harga;
    getch();
}
