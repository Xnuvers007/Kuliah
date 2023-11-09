#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

void shellSortAsc(int Nilai[], int N) {
    int i, k, temp, jarak, s;

    jarak = N / 2;

    cout << "\nData sebelum diurut      : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];

    while (jarak >= 1) {
        cout << "\n\nJarak " << jarak << "          : "<<endl;
        do {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++) {
                k = i + jarak;
                if (Nilai[i] > Nilai[k]) {
                    temp = Nilai[i];
                    Nilai[i] = Nilai[k];
                    Nilai[k] = temp;
                    s = 1;
                    for (int l = 0; l < N; l++)
                        cout << setw(4) << Nilai[l];
                    cout << "\n";
                }
            }
        } while (s != 0);

        jarak /= 2;
    }

    cout << "\n\nData Setelah diurut    : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];
}

void shellSortDesc(int Nilai[], int N) {
    int i, k, temp, jarak, s;

    jarak = N / 2;

    cout << "\nData sebelum diurut      : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];

    while (jarak >= 1) {
        cout << "\n\nJarak " << jarak << "          : "<<endl;
        do {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++) {
                k = i + jarak;
                if (Nilai[i] < Nilai[k]) {
                    temp = Nilai[i];
                    Nilai[i] = Nilai[k];
                    Nilai[k] = temp;
                    s = 1;
                    for (int l = 0; l < N; l++)
                        cout << setw(4) << Nilai[l];
                    cout << "\n";
                }
            }
        } while (s != 0);

        jarak /= 2;
    }

    cout << "\n\nData Setelah diurut    : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];
}

void insertionSortAsc(int Nilai[], int N) {
    int i, j, temp;

    cout << "\nData sebelum diurut      : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];

    for (i = 1; i < N; i++) {
        temp = Nilai[i];
        j = i - 1;
        while ((temp < Nilai[j]) && (j >= 0)) {
            Nilai[j + 1] = Nilai[j];
            j--;
        }
        Nilai[j + 1] = temp;
        cout << "\n";
        for (int k = 0; k < N; k++)
            cout << setw(4) << Nilai[k];
    }

    cout << "\n\nData Setelah diurut    : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];
}

void insertionSortDesc(int Nilai[], int N) {
    int i, j, temp;

    cout << "\nData sebelum diurut      : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];

    for (i = 1; i < N; i++) {
        temp = Nilai[i];
        j = i - 1;
        while ((temp > Nilai[j]) && (j >= 0)) {
            Nilai[j + 1] = Nilai[j];
            j--;
        }
        Nilai[j + 1] = temp;
        cout << "\n";
        for (int k = 0; k < N; k++)
            cout << setw(4) << Nilai[k];
    }

    cout << "\n\nData Setelah diurut    : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];
}

int main() {
    char repeat;
    do {
        int choice, N;

        cout << endl;

        cout << "|=============================|" << endl;
        cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
        cout << "| NIM   :   211011450468      |" << endl;
        cout << "|=============================|" << endl;

        cout << endl;

        cout << "\nMasukan Banyak Bilangan : ";
        cin >> N;

        int Nilai[20];
        for (int i = 0; i < N; i++) {
            cout << "Elemen ke-" << i << " : ";
            cin >> Nilai[i];
        }

        cout << "\nMenu Program Sorting:\n";
        cout << "1. Shell Sort (Ascending)\n";
        cout << "2. Shell Sort (Descending)\n";
        cout << "3. Insertion Sort (Ascending)\n";
        cout << "4. Insertion Sort (Descending)\n";
        cout << "Pilih program (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                shellSortAsc(Nilai, N);
                break;
            case 2:
                shellSortDesc(Nilai, N);
                break;
            case 3:
                insertionSortAsc(Nilai, N);
                break;
            case 4:
                insertionSortDesc(Nilai, N);
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                return 1;
        }

        cout << "\n\nApakah Anda ingin mengulang? (Y/N): ";
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');

    cout<<"\nTerima kasih telah menggunakan program ini. Silahkan enter untuk mengakhiri.\n";

    getch();
    return 0;
}
