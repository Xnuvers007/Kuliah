#include <iostream>
using namespace std;

int main() {
    int data[] = {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 41, 12};
    int cari[] = {12, 15, 37};
    int banyak[3] = {0, 0, 0};
    int posisi[3][25];

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 25; j++) {
            posisi[i][j] = -1;
        }
    }

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 3; j++) {
            if (data[i] == cari[j]) {
                banyak[j]++;
                posisi[j][banyak[j]-1] = i+1;
            }
        }
    }

    cout << endl << "List angka: ";
    for (int i = 0; i < 25; i++) {
        cout << data[i];
        if (i < 24) {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Data yang dicari: ";
    for (int i = 0; i < 3; i++) {
        cout << cari[i];
        if (i < 2) {
            cout << ", ";
        }
    }

    cout << endl << endl;

    for (int i = 0; i < 3; i++) {
        if (banyak[i] > 0) {
            cout << "Data " << cari[i] << " ditemukan sebanyak " << banyak[i] << " kali pada posisi ";
            for (int j = 0; j < banyak[i]; j++) {
                cout << posisi[i][j];
                if (j < banyak[i]-1) {
                    cout << ", ";
                }
            }
            cout << endl;
        } else {
            cout << "Data " << cari[i] << " tidak ditemukan" << endl;
        }
    }

    return 0;
}