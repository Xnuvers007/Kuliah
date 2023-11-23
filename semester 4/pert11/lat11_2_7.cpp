#include<stdio.h>
#include<string.h>
#include<iostream>
#include<conio.h>

using namespace std;

#define Maxs 200

struct Tumpukan {
    char Isi[Maxs];
    int Atas;
} T;

void PUSH(char x) {
    if (T.Atas == Maxs) {
        cout << "Stack Penuh...";
        getch();
    } else {
        T.Atas = T.Atas + 1;
        T.Isi[T.Atas] = x;
    }
}

char POP() {
    char hasil;
    if (T.Atas == 0) {
        cout << "Stack kosong....";
        hasil = ' ';
    } else {
        hasil = T.Isi[T.Atas];
        T.Atas = T.Atas - 1;
    }
    return hasil;
}

int main() {
    char kalimat[Maxs];
    T.Atas = 0;

    cout << "========Membalik Kalimat=======\n\n";
    cout << "Masukan Sembarang Kalimat: ";
    cin.getline(kalimat, 200);

    cout << "Kalimat Asli: " << kalimat;

    for (int i = 0; i < strlen(kalimat); i++) {
        PUSH(kalimat[i]);
    }

    cout << "\nKalimat Setelah Dibalik: ";

    for (int i = 0; i < strlen(kalimat); i++) {
        cout << "" << POP();
    }

    getch();
    return 0;
}
