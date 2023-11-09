#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
    int Nilai[20];
    int i, N, angka, Bilangan;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Masukan Banyaknya Bilangan = ";
    cin >> N;

    // Membaca elemen array
    for (i = 0; i < N; i++) {
        cout << "Masukan elemen ke-" << i << " = ";
        cin >> Nilai[i];
    }

    // Mencetak elemen array
    cout << "\n\nDeretan Bilangan    = ";
    for (i = 0; i < N; i++) {
        cout << Nilai[i] << " ";
    }

    cout << "\n\nMasukan Bilangan yang akan dicari = ";
    cin >> Bilangan;

    // Melakukan pencarian
    i = 0;
    do {
        if (Nilai[i] == Bilangan) {
            angka = Nilai[i];
        }
        i++;
    } while (i < N);

    if (angka == Bilangan) {
        cout << "Bilangan " << Bilangan << " ditemukan";
    } else {
        cout << "Bilangan " << Bilangan << " tidak ditemukan";
    }

    cout<<endl;

    getch();
    return 0;
}