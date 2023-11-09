#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Deklarasi variabel
    int Nilai[20];
    int i, j, N;
    int temp, awal, akhir, tengah, Bilangan;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;


    // Proses penginputan data
    cout << "Banyak bilangan   : ";
    cin >> N;
    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i << "       = ";
        cin >> Nilai[i];
    }

    cout << "\nElemen Sebelumnya diurut = ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses pengurutan data menggunakan Bubble Sort
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (Nilai[i] > Nilai[j]) {
                temp = Nilai[i];
                Nilai[i] = Nilai[j];
                Nilai[j] = temp;
            }
        }
    }

    cout << "\nElemen Setelah diurut    = ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    cout << "\nIndeks Elemen            = ";
    for (i = 0; i < N; i++)
        cout << setw(3) << i;

    cout << "\nMasukan data yang akan anda cari: ";
    cin >> Bilangan;

    // Proses pencarian data menggunakan Binary Search
    awal = 0;
    akhir = N - 1;
    while (awal <= akhir) {
        tengah = (akhir + awal) / 2;
        if (Nilai[tengah] == Bilangan) {
            cout << "\nData " << Bilangan << " ada dalam array pada posisi " << tengah;
            break;
        } else if (Nilai[tengah] < Bilangan) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }

    if (awal > akhir) {
        cout << "\nData " << Bilangan << " tidak ada dalam array";
    }

    return 0;
}
