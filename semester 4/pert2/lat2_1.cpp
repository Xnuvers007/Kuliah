#include <iostream>
using namespace std;

int main() {
    int Nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3};
    int i, Jumlah = 0;
    float Rata_Rata;
    cout << "\nNama : Indra Dwi Aryadi\n";
    cout << "NIM  : 211011450468\n";

    for (i = 0; i < 10; i++)
        Jumlah += Nilai[i];
    Rata_Rata = (float)Jumlah / 10;

    cout << "\n\nDeretan Bilangan   = ";
    for (i = 0; i < 10; i++)
        cout << Nilai[i] << " ";

    cout << "\nJumlah Bilangan    = " << Jumlah;
    cout << "\nRata-Rata Bilangan = " << Rata_Rata << endl << endl;

    return 0;
}
