#include <iostream>

using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

int bagi(int a, int b) {
    return a / b;
}

int main() {

    int a, b;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl << endl;

    cout << "Masukan A : ";
    cin >> a;

    cout << "Masukan B : ";
    cin >> b;

    cout << "\na = " << a << ", b = " << b << endl << endl;
    cout << "a + b = " << tambah(a, b) << endl;
    cout << "a - b = " << kurang(a, b) << endl;
    cout << "a * b = " << kali(a, b) << endl;
    cout << "a / b = " << bagi(a, b) << endl;
    return 0;
}
