// TUGAS AKHIR
// 1. Buatlah program menampilkan bilangan Fibonacci menggunakan perintah for, 
// Tampilan Output sebagai berikut ini.
// Fibonacci : 0 1 1 2 3 5 8 13 21 34 55 89 ………

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c, i, n;
    cout<<"Kode By Indra Dwi Aryadi (xxxxxxxxxxxxx)"<<endl;
    cout << "Masukkan jumlah deret Fibonacci : ";
    cin >> n;
    cout << "Fibonacci : " << a << " " << b << " ";
    for (i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
