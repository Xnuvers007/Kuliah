/*

Buatlah program untuk struktur NILAI yang terdiri dari NIM, Nama,
Nilai_Tugas, Nilai_UTS, Nilai_UAS, Nilai_Akhir, Nilai_Huruf.
Ketentuan:
1. Nilai_Akhir :20% x Nilai_Tugas + 35% x Nilai_UTS + 45% x Nilai_UAS

2. Nilai Huruf :
85 < Nilai_Akhir ≤ 100 -> A
70< Nilai_Akhir ≤ 85 -> B
55< Nilai_Akhir ≤ 70 -> C
40 < Nilai_Akhir ≤ 55 -> D
0 < Nilai_Akhir ≤ 40 -> E

*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct NILAI {
    char NIM[13];
    char Nama[255];
    float Nilai_Tugas;
    float Nilai_UTS;
    float Nilai_UAS;
    float Nilai_Akhir;
    char Nilai_Huruf;
};

void inputdata(NILAI &data) {
    bool inputValid = false;

    do {
        try {
            cout << "Masukan NIM         = ";
            cin >> data.NIM;

            if (strlen(data.NIM) == 12) {
                inputValid = true;
            } else {
                throw "NIM harus terdiri dari 12 karakter";
            }
        } catch (const char* msg) {
            cout << "Input NIM tidak valid: " << msg << endl;
        } catch (...) {
            cout << "Input NIM tidak valid" << endl;
        }
    } while (!inputValid);

    inputValid = false;

    do {
        try {
            cout << "Masukan Nama        = ";
            cin.ignore();
            cin.getline(data.Nama, 255);

            if (strlen(data.Nama) > 0) {
                inputValid = true;
            } else {
                throw "Nama tidak boleh kosong";
            }
        } catch (const char* msg) {
            cout << "Input Nama tidak valid: " << msg << endl;
        } catch (...) {
            cout << "Input Nama tidak valid" << endl;
        }
    } while (!inputValid);

    inputValid = false;

    do {
        try {
            cout << "Masukan Nilai Tugas = ";
            cin >> data.Nilai_Tugas;

            if (data.Nilai_Tugas >= 0 && data.Nilai_Tugas <= 100) {
                inputValid = true;
            } else {
                throw "Nilai Tugas harus antara 0 dan 100";
            }
        } catch (const char* msg) {
            cout << "Input Nilai Tugas tidak valid: " << msg << endl;
        }
    } while (!inputValid);

    inputValid = false;

    do {
        try {
            cout << "Masukan Nilai UTS   = ";
            cin >> data.Nilai_UTS;

            if (data.Nilai_UTS >= 0 && data.Nilai_UTS <= 100) {
                inputValid = true;
            } else {
                throw "Nilai UTS harus antara 0 dan 100";
            }
        } catch (const char* msg) {
            cout << "Input Nilai UTS tidak valid: " << msg << endl;
        } 
    } while (!inputValid);

    inputValid = false;

    do {
        try {
            cout << "Masukan Nilai UAS   = ";
            cin >> data.Nilai_UAS;

            if (data.Nilai_UAS >= 0 && data.Nilai_UAS <= 100) {
                inputValid = true;
            } else {
                throw "Nilai UAS harus antara 0 dan 100";
            }
        } catch (const char* msg) {
            // back to input
            cout << "Input Nilai UAS tidak valid: " << msg << endl;
        }
    } while (!inputValid);
}


void Hitung_Nilai (NILAI &data) {
    data.Nilai_Akhir = (data.Nilai_Tugas * 0.2) + (data.Nilai_UTS * 0.35) + (data.Nilai_UAS * 0.45);
    if (data.Nilai_Akhir >= 85) {
        data.Nilai_Huruf = 'A';
    } else if (data.Nilai_Akhir >= 70) {
        data.Nilai_Huruf = 'B';
    } else if (data.Nilai_Akhir >= 55) {
        data.Nilai_Huruf = 'C';
    } else if (data.Nilai_Akhir >= 40) {
        data.Nilai_Huruf = 'D';
    } else {
        data.Nilai_Huruf = 'E';
    }
}

void menampilkan_data_hasil(const NILAI &data) {
    cout << "NIM            = " << data.NIM << endl;
    cout << "Nama           = " << data.Nama << endl;
    cout << "Nilai Tugas    = " << data.Nilai_Tugas << endl;
    cout << "Nilai UTS      = " << data.Nilai_UTS << endl;
    cout << "Nilai UAS      = " << data.Nilai_UAS << endl;
    cout << "Nilai Akhir    = " << data.Nilai_Akhir << endl;
    cout << "Nilai Huruf    = " << data.Nilai_Huruf << endl;}

int main()
{
    cout << "=====================================" << endl;
    cout << "Nama           = " << "Indra Dwi Aryadi" << endl;
    cout << "NIM            = " << "211011450468" << endl;
    cout << "=====================================" << endl << endl;

    int banyak_data;
    cout << "Masukan banyak data = ";
    cin >> banyak_data;

    NILAI data[banyak_data];

    cout << "Silahkan Masukan"<<endl;

    for (int i = 0; i < banyak_data; i++) {
        cout<<endl<<endl<<"======================"<<endl;
        cout << "Data ke-" << i + 1 << endl;
        inputdata(data[i]);
        Hitung_Nilai(data[i]);
        cout<<"======================"<<endl<<endl;
    }

    cout << "\nHasil Perhitungan Nilai : \n";
    for (int i = 0; i < banyak_data; i++) {
        cout << endl << "======================" << endl;
        cout << "Data ke-" << i + 1 << endl;
        menampilkan_data_hasil(data[i]);
        cout << "======================" << endl;
    }

    getch();
    return 0;
}