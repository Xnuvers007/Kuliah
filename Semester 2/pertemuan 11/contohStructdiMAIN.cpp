// Membuat program penggunaan struktur data
// dengan menggunakan bahasa pemrograman C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct barang
    {
        string nama;
        int harga;
        int jumlah;
    };

    barang barang1, barang2, barang3;
    
    barang1.nama = "Buku";
    barang1.harga = 10000;
    barang1.jumlah = 2;

    barang2.nama = "Pensil";
    barang2.harga = 5000;
    barang2.jumlah = 5;

    barang3.nama = "Penghapus";
    barang3.harga = 3000;
    barang3.jumlah = 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                if (j == 0)
                {
                    cout << "Nama Barang : " << barang1.nama << endl;
                }
                else if (j == 1)
                {
                    cout << "Harga Barang : " << barang1.harga << endl;
                }
                else
                {
                    cout << "Jumlah Barang : " << barang1.jumlah << endl;
                }
            }
            else if (i == 1)
            {
                if (j == 0)
                {
                    cout << "Nama Barang : " << barang2.nama << endl;
                }
                else if (j == 1)
                {
                    cout << "Harga Barang : " << barang2.harga << endl;
                }
                else
                {
                    cout << "Jumlah Barang : " << barang2.jumlah << endl;
                }
            }
            else
            {
                if (j == 0)
                {
                    cout << "Nama Barang : " << barang3.nama << endl;
                }
                else if (j == 1)
                {
                    cout << "Harga Barang : " << barang3.harga << endl;
                }
                else
                {
                    cout << "Jumlah Barang : " << barang3.jumlah << endl;
                }
            }
        }
    }
}