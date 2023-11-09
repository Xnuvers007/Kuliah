#include <iostream>
#include <conio.h>

using namespace std;

int Maksimum(int a, int b, int c);

int main() {
    int a = 8, b = 12, c = -5;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Nilai a        = " << a << endl;
    cout << "Nilai b        = " << b << endl;
    cout << "Nilai c        = " << c << endl;
    cout << "Nilai Terbesar = " << Maksimum(a, b, c) << endl;
    
    getch();

    return 0;

}

int Maksimum(int x, int y, int z) {

    int Besar = x;

    if (y > Besar)
        Besar = y;

    if (z > Besar)
        Besar = z;

    return Besar;
}