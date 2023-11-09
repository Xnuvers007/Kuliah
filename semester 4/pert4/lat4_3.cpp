#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int Nilai[] = {45, 23, 50, 8, 12, 10, 15};
    int *Ptr_Nilai;
    int i;

    Ptr_Nilai = Nilai;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;
    
    cout << "Nilai Ptr_Nilai                   = " << *Ptr_Nilai << endl;
    cout << "Alamat array Nilai                = " << Ptr_Nilai << endl;
    cout << "Nilai yang ada pada alamat        = " << Ptr_Nilai << " adalah " << *Ptr_Nilai << endl;
    cout << "Elemen Array indeks pertama       = " << Nilai[0] << endl;
    
    cout << "\nElemen Array (dgn Array)          : ";
    for (i = 0; i < 7; i++)
        cout << Nilai[i] << " "; // mencetak elemen array

    cout << "\n\nElemen Array (dgn Pointer)        : ";
    for (i = 0; i < 7; i++)
        cout << *(Nilai + i) << " "; // mencetak elemen array

    getch();

    return 0;
}
