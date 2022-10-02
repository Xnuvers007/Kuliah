// TUGAS AKHIR
// 1. Buatlah program menampilkan bilangan Fibonacci menggunakan perintah while, 
// Tampilan Output sebagai berikut ini.
// Fibonacci : 0 1 1 2 3 5 8 13 21 34 55 89 ………

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 0, n;
    cout<<"====================================="<<endl;
    cout<<"Indra Dwi Aryadi - xxxxxxxxxxxx"<<endl;
    cout<<"====================================="<<endl;
    cout << "Masukkan nilai n : ";
    cin >> n;
    cout << "Fibonacci : " << a << " " << b << " ";
    while (c < n)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
