// Buatlah tambahan program menggunakan sistem menu pada program yang telah dipraktekkan!

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void MaximumSortAscending(int Nilai[], int N)
{
    int temp, U, Imaks;
    U = N - 1;
    
    for (int i = 0; i <= N - 2; i++)
    {
        Imaks = 0;
        for (int j = 1; j <= U; j++)
        {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imaks];
        Nilai[Imaks] = temp;
        U--;
    }

    cout << "Data Setelah diurutkan secara menaik: ";
    for (int i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];
}

void MaximumSortDescending(int Nilai[], int N)
{
    int temp, U, Imaks;

    for (int i = 0; i < N - 1; i++)
    {
        Imaks = i;
        for (int j = i + 1; j < N; j++)
        {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imaks];
        Nilai[Imaks] = temp;
    }

    cout << "Data Setelah diurutkan secara menurun: ";
    for (int i = 0; i < N; i++)
        cout << std::setw(3) << Nilai[i];
}

void MinimumSortAscending(int Nilai[], int N)
{
    int temp, Imin;

    for (int i = 0; i <= N - 2; i++)
    {
        Imin = i;
        for (int j = i + 1; j < N; j++)
        {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;
    }

    cout << "Data Setelah diurutkan secara menaik: ";
    for (int i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];
}

void MinimumSortDescending(int Nilai[], int N)
{
    int temp, Imin;

    for (int i = 0; i < N - 1; i++)
    {
        Imin = i;
        for (int j = i + 1; j < N; j++)
        {
            if (Nilai[j] > Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;
    }

    cout << "Data Setelah diurutkan secara menurun : ";
    for (int i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];
}


int main()
{
    int choice;

    while (true)
    {
        cout << endl;

        cout << "|=============================|" << endl;
        cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
        cout << "| NIM   :   211011450468      |" << endl;
        cout << "|=============================|" << endl;
    
        cout << endl;

        cout << "Pilih program pengurutan yang ingin dijalankan:" << endl;
        cout << "1. Pengurutan Maximum Sort Menaik" << endl;
        cout << "2. Pengurutan Maximum Sort Menurun" << endl;
        cout << "3. Pengurutan Minimum Sort Menaik" << endl;
        cout << "4. Pengurutan Minimum Sort Menurun" << endl;
        cout << "5. Keluar (Exit)" << endl;
        cout << "Masukkan nomor program (1-5): ";
        cin >> choice;

        int Nilai[20];
        int N;

        switch (choice)
        {
        case 1:
            // Program Pengurutan Maximum Sort Menaik
            cout << "Masukkan Banyak Bilangan: ";
            cin >> N;
            for (int i = 0; i < N; i++)
            {
                cout << "Elemen ke-" << i << " : ";
                cin >> Nilai[i];
            }
            MaximumSortAscending(Nilai, N);
            break;
        case 2:
            // Program Pengurutan Maximum Sort Menurun
            cout << "Masukkan Banyak Bilangan: ";
            cin >> N;
            for (int i = 0; i < N; i++)
            {
                cout << "Elemen ke-" << i << " : ";
                cin >> Nilai[i];
            }
            MaximumSortDescending(Nilai, N);
            break;
        case 3:
            // Program Pengurutan Minimum Sort Menaik
            cout << "Masukkan Banyak Bilangan: ";
            cin >> N;
            for (int i = 0; i < N; i++)
            {
                cout << "Elemen ke-" << i << " : ";
                cin >> Nilai[i];
            }
            MinimumSortAscending(Nilai, N);
            break;
        case 4:
            // Program Pengurutan Minimum Sort Menurun
            cout << "Masukkan Banyak Bilangan: ";
            cin >> N;
            for (int i = 0; i < N; i++)
            {
                cout << "Elemen ke-" << i << " : ";
                cin >> Nilai[i];
            }
            MinimumSortDescending(Nilai, N);
            break;
        case 5:
            cout << "Keluar dari program. Sampai jumpa!" << endl;
            return 0;
        default:
            cout << "Pilihan tidak valid. Masukkan nomor program (1-5) yang sesuai." << endl;
            break;
        }
    }

    getch();
    return 0;
}
