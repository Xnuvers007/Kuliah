#include <iostream>

using namespace std;

void Tukar(int *a, int *b);

int main() {
    int a = 8, b = -5;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Nilai a dan b sebelum ditukar: " << a << " & " << b << endl;
    Tukar(&a, &b);
    cout << "Nilai a dan b setelah ditukar: " << a << " & " << b << endl;
    
    return 0;
}

void Tukar(int *x, int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
