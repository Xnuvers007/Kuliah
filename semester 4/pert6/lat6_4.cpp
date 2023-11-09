#include <iostream>
#include <cstring>

using namespace std;

// Mendefinisikan struct untuk data karyawan
struct Karyawan {
    char nip[20];
    char nama[100];
    char alamat[100];
    char agama[20];
    char jabatan[50];
};

// Mendefinisikan fungsi untuk pencarian sekuensial
int pencarianSekuensial(Karyawan arr[], int n, char kunci[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].nama, kunci) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int MAKS_KARYAWAN = 100;
    Karyawan karyawan[MAKS_KARYAWAN];
    int jumlahKaryawan;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    // Mendapatkan input jumlah karyawan
    cout << "Masukkan jumlah karyawan: ";
    cin >> jumlahKaryawan;

    cin.ignore(); // Membersihkan newline setelah jumlah karyawan
    // Mendapatkan input data karyawan
    for (int i = 0; i < jumlahKaryawan; i++) {
        cout << "Masukkan data untuk karyawan #" << i + 1 << ":" << endl;
        cout << "NIP: ";
        cin >> karyawan[i].nip;
        cin.ignore(); // Membersihkan newline setelah NIP
        cout << "Nama: ";
        cin.getline(karyawan[i].nama, 100);
        cout << "Alamat: ";
        cin.getline(karyawan[i].alamat, 100);
        cout << "Agama: ";
        cin.getline(karyawan[i].agama, 20);
        cout << "Jabatan: ";
        cin.getline(karyawan[i].jabatan, 50);
    }

    // Mendapatkan input nama karyawan yang akan dicari
    char namaCari[100];
    cout << "Masukkan nama karyawan yang ingin dicari: ";
    cin.getline(namaCari, 100);

    // Melakukan pencarian sekuensial
    int indeks = pencarianSekuensial(karyawan, jumlahKaryawan, namaCari);

    // Menampilkan data karyawan jika ditemukan
    if (indeks != -1) {
        cout << "Karyawan ditemukan pada indeks " << indeks << ":" << endl;
        cout << "NIP: " << karyawan[indeks].nip << endl;
        cout << "Nama: " << karyawan[indeks].nama << endl;
        cout << "Alamat: " << karyawan[indeks].alamat << endl;
        cout << "Agama: " << karyawan[indeks].agama << endl;
        cout << "Jabatan: " << karyawan[indeks].jabatan << endl;
    } else {
        cout << "Karyawan tidak ditemukan." << endl;
    }

    return 0;
}
