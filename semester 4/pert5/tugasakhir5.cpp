#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int main() {
    int a, b;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl << endl;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    int (*p)(int, int);

    p = &tambah;

    int hasil = (*p)(a, b);
    cout << "Hasil tambah: " << hasil << endl;

    p = &kurang;

    hasil = (*p)(a, b);
    cout << "Hasil kurang: " << hasil << endl;

    cout << endl;

    return 0;
}
