#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void Cetak(int data[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << setw(3) << data[i];
    cout << "\n";
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
        } else
            return j;
    }
}

void Quick_Sort(int data[], int p, int r) {
    int q;
    if (p < r) {
        q = Partisi(data, p, r + 1);
        Quick_Sort(data, p, q);
        Quick_Sort(data, q + 1, r);
    }
}

int main() {
    int Nilai[20], i, N;;

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

    cout << "\nData Sebelum di urut : ";
    Cetak(Nilai, N);

    Quick_Sort(Nilai, 0, N - 1);

    cout << "Data Setelah di urut : ";
    Cetak(Nilai, N);

    getch();
}
