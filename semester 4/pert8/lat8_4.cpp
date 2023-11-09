// Buatlah program untuk Pengurutan dengan Metode Minimum Sort “Pengurutan Secara Menurun” (simpan dengan nama lat8_4.cpp)

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imin;

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
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imin = 0;
        for (j = 1; j <= U; j++)
        {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imin];
        Nilai[Imin] = temp;
        cout << endl;
        U--;
        for (l = 0; l < N; l++)
            cout << setw(3) << Nilai[l];
    }

    cout << "\nData Setelah diurut dengan Minimum Sort secara menurun: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    getch();
    return 0;
}
