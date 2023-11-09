#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void Cetak(int data[], int n) {
    for (int i = 0; i < n; i++)
        cout << setw(3) << data[i];
    cout << "\n";
}

void BubbleSortAscending(int Nilai[], int N) {
    int i, j, temp;
    bool tukar;

    i = 0;
    tukar = true;
    while ((i <= N - 2) && (tukar)) {
        tukar = false;
        for (j = N - 1; j >= i + 1; j--) {
            if (Nilai[j] < Nilai[j - 1]) {
                temp = Nilai[j];
                Nilai[j] = Nilai[j - 1];
                Nilai[j - 1] = temp;
                tukar = true;

                cout << "Pertukaran: " << Nilai[j] << " dan " << Nilai[j - 1] << "      -> ";
                Cetak(Nilai, N);
            }
        }
        i++;
    }
}

void BubbleSortDescending(int Nilai[], int N) {
    int i, j, temp;
    bool tukar;

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
 
                cout << "Pertukaran: " << Nilai[j] << " dan " << Nilai[j - 1] << " : ";
                Cetak(Nilai, N);
            }
        }
        i++;
    }
}

int Partisi(int data[], int p, int r) {
    int x, i, j, temp;
    x = data[p];
    i = p;
    j = r;
    while (1) {
        while (data[j] > x)
            j--;
        while (data[i] < x)
            i++;
        if (i < j) {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;

            cout << "Pertukaran: " << data[i] << " dan " << data[j] << " : ";
            Cetak(data, r + 1);
        } else
            return j;
    }
}

void QuickSortAscending(int data[], int p, int r) {
    int q;
    if (p < r) {
        q = Partisi(data, p, r);
        QuickSortAscending(data, p, q);
        QuickSortAscending(data, q + 1, r);
    }
}

int main() {
    int Nilai[20], N;
    int pilihan;
    string tanya;

    awal:

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "Masukan Banyak Bilangan : ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    cout << "\nData Sebelum diurut : ";
    Cetak(Nilai, N);

    cout << "\n\nPilih metode pengurutan:\n";
    cout << "1. Bubble Sort (Ascending/Pengurutan menaik)\n";
    cout << "2. Bubble Sort (Descending/Pengurutan menurun)\n";
    cout << "3. Quick Sort (Ascending/Pengurutan menaik)\n";
    cout << "4. Exit\n";
    cout << "Pilihan: ";
    cin >> pilihan;

    cout << endl << endl;

    switch (pilihan) {
        case 1:
            cout << "Proses Pengurutan menggunakan Bubble Sort:\n";
            BubbleSortAscending(Nilai, N);
            break;

        case 2:
            cout << "Proses Pengurutan menggunakan Bubble Sort Terbalik:\n";
            BubbleSortDescending(Nilai, N);
            break;

        case 3:
            cout << "Proses Pengurutan menggunakan Quick Sort:\n";
            QuickSortAscending(Nilai, 0, N - 1);
            break;

        case 4:
            cout<<"Program selesai.";
            exit(0);
            break;

        default:
            cout << "Pilihan tidak valid.\n";
    }

    cout << "Data Setelah di urut : ";
    Cetak(Nilai, N);
    cout << "Mau ngulang ? : ";
    cin >> tanya;
    if (tanya=="y"||tanya=="Y")
    {
        goto awal;
    }

    return 0;
}
