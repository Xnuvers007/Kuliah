// Buatlah program untuk Pengurutan dengan Metode Maximum Sort “Pengurutan Secara Menurun” (simpan dengan nama lat8_2.cpp)

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imaks;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Masukkan Banyaknya Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData Sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imaks = i;
        for (j = i + 1; j <= U; j++)
        {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imaks];
        Nilai[Imaks] = temp;
        cout << endl;
        for (l = 0; l < N; l++)
            cout << setw(3) << Nilai[l];
    }

    cout << "\nData Setelah diurutkan secara menurun: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    getch();
    return 0;
}
