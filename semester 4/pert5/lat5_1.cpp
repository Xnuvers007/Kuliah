#include <iostream>
#include <conio.h>
using namespace std;

void Tukar(int a, int b);

int main() {
    int a = 8, b = -5;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Nilai a dan b sebelumnya        : " << a << " & " << b;

    Tukar(a, b);

    cout << "\nNilai a dan b Setelah ditukar : " << a << " & " << b;

    getch();
}

void Tukar(int x, int y) {
    int z;

    z = x;
    x = y;
    y = z;
}