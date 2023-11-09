// Buatlah program untuk Pengurutan dengan Metode Minimum Sort “Pengurutan Secara Menaik” (simpan dengan nama lat8_3.cpp)

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, Imin;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Masukkan Banyak Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurut dengan Minimum Sort
    cout << "\nData sebelum diurut (Minimum Sort): ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses Pengurutan dengan Minimum Sort
    for (i = 0; i <= N - 2; i++)
    {
        Imin = i;
        for (j = i + 1; j < N; j++)
        {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;
        cout << endl;
        for (l = 0; l < N; l++)
            cout << setw(3) << Nilai[l];
    }

    cout << "\nData Setelah diurut dengan Minimum Sort secara menaik: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    getch();
    return 0;
}
