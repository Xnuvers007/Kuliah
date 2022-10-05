// Buat program untuk fungsi mengembalikan Nilai

#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    int hasil;
    hasil = a + b;
    return hasil;
}
int main()
{
    int a, b, hasil;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    hasil = tambah(a, b);
    cout << "Hasil = " << hasil << endl;
    return 0;
}
