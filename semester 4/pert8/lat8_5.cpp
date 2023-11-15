// Buatlah program menu untuk menampilkan 4 program di atas, menggunakan perintah IF (simpan dengan nama lat8_5.cpp)

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
    // int temp, U, Imin;

    int temp, Imin;

    // U = N - 1;
    // for (int i = 0; i <= N - 2; i++)
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
        // U--;
    }

    cout << "Data Setelah diurutkan secara menurun: ";
    for (int i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];
}

int main()
{
    int choice;
    char ulangi;

    do
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
        cout << "Masukkan nomor program (1-4): ";
        cin >> choice;

        int Nilai[20];
        int N;

        // cout << "Masukkan Banyak Bilangan: ";
        // cin >> N;

        // for (int i = 0; i < N; i++)
        // {
        //     cout << "Elemen ke-" << i << " : ";
        //     cin >> Nilai[i];
        // }

        if (choice == 1)
        {
            cout << "Masukkan Banyak Bilangan: ";
            cin >> N;

            for (int i = 0; i < N; i++)
            {
                cout << "Elemen ke-" << i << " : ";
                cin >> Nilai[i];
            }
            MaximumSortAscending(Nilai, N);
        }
        else if (choice == 2)
        {
            cout << "Masukkan Banyak Bilangan: ";
            cin >> N;

            for (int i = 0; i < N; i++)
            {
                cout << "Elemen ke-" << i << " : ";
                cin >> Nilai[i];
            }
            MaximumSortDescending(Nilai, N);
        }
        else if (choice == 3)
        {
            cout << "Masukkan Banyak Bilangan: ";
            cin >> N;

            for (int i = 0; i < N; i++)
            {
                cout << "Elemen ke-" << i << " : ";
                cin >> Nilai[i];
            }
            MinimumSortAscending(Nilai, N);
        }
        else if (choice == 4)
        {
            cout << "Masukkan Banyak Bilangan: ";
            cin >> N;

            for (int i = 0; i < N; i++)
            {
                cout << "Elemen ke-" << i << " : ";
                cin >> Nilai[i];
            }
            MinimumSortDescending(Nilai, N);
        }
        else
        {
            cout << "Pilihan tidak valid. Masukkan nomor program (1-4) yang sesuai." << endl;
        }

        cout << "\nApakah Anda ingin mengulanginya lagi? (y/n): ";
        cin >> ulangi;
        system("cls");

    } while (ulangi == 'y' || ulangi == 'Y');

    cout << "Program finished";

    getch();
    return 0;
}
