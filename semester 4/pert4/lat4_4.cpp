#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int x = 10;
    int *xPtr1;
    int **xPtr2;

    xPtr1 = &x;
    xPtr2 = &xPtr1;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "Nilai x         = " << x << endl;
    cout << "Nilai *xPtr1    = " << *xPtr1 << endl;
    cout << "Nilai *xPtr2    = " << *xPtr2 << endl;

    getch();

    return 0;
}
