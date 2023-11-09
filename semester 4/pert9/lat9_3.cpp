/* Buatlah program untuk Pengurutan dengan Metode Insertion Sort
“Pengurutan Secara menaik” (simpan dengan nama lat9_3.cpp) */

#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main(){
    int Nilai [20];
    int i, j, k, N, temp;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "Masukan Banyak Bilangan : ";
    cin >> N;

    for(i=0; i<N; i++){
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut      : ";
    for(i=0; i<N; i++)
        cout << setw(4) << Nilai[i];

    cout << endl;

    // Proses pengurutan
    for(i=1; i<N; i++){
        temp = Nilai[i];
        j = i - 1;
        while((temp < Nilai[j]) && (j >= 0)){
            Nilai[j+1] = Nilai[j];
            j--;
        }
        Nilai[j+1] = temp;
        cout << "\n";
        for(k=0; k<N; k++)
            cout << setw(4) << Nilai[k];
    }

    cout << "\n\nData setelah diurut      : ";
    for(i=0; i<N; i++)
        cout << setw(4) << Nilai[i];

    getch();
    return 0;
}