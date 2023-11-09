#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

const int N = 100;

void Baca(int Nilai[], int &M);
void Cetak(int Nilai[], int &M);
void Jumlah(int Nilai[], int &M, int &Jlh, float &Rata);

int main() {
    int M;
    int Nilai[N];
    int Jlh = 0;
    float Rata;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;
    
    cout << "Banyak Elemen : ";
    cin >> M;
    Baca(Nilai, M); // Memanggil fungsi Baca
    cout << "\nElemen Elemen      :";
    Cetak(Nilai, M); // Memanggil fungsi cetak
    Jumlah(Nilai, M, Jlh, Rata); // Memanggil fungsi Jumlah
    cout << "\nJumlah Bilangan    : " << Jlh;
    cout << "\nRata-Rata Bilangan : " << fixed << setprecision(2) << Rata;
    getch();
    return 0;
}

void Cetak(int Nilai[], int &M) {
    int i;
    for(i = 0; i < M; i++) {
        cout << setw(3) << Nilai[i];
    }
}

void Baca(int Nilai[], int &M) {
    int i;
    for (i = 0; i < M; i++) {
        cout << "Elemen ke-" << i+1 << "   : ";
        cin >> Nilai[i];
    }
}

void Jumlah(int Nilai[], int &M, int &Jlh, float &Rata) {
    int i;
    for (i = 0; i < M; i++)
        Jlh += Nilai[i];
    Rata = (float) Jlh / M;
}