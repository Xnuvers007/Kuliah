#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
    int Nilai[20];
    int i, j, k, N;
    int temp;
    bool tukar;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Masukan Banyak Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData sebelumnya diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses Pengurutan
    i = 0;
    tukar = true;
    while ((i <= N - 2) && (tukar)) {
        tukar = false;
        for (j = N - 1; j >= i + 1; j--) {
            if (Nilai[j] > Nilai[j - 1]) {
                temp = Nilai[j];
                Nilai[j] = Nilai[j - 1];
                Nilai[j - 1] = temp;
                tukar = true;
                cout << endl;
                for (k = 0; k < N; k++)
                    cout << setw(3) << Nilai[k];
            }
        }
        i++;
    }

    // Proses Cetak setelah diurutkan
    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    getch();
}
