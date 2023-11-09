#include <iostream>
using namespace std;

struct TINGGAL {
    char Jalan[50];
    char Kode_Pos[10];
    char Kota[50];
};

struct TANGGAL {
    int Tanggal;
    int Bulan;
    int Tahun;
};

struct BIODATA {
    char NIP[15];
    char Nama[50];
    char Alamat[100];
    char Jabatan[50];
    char Agama[20];
    TANGGAL Tanggal_Lahir;
    TANGGAL Tanggal_Mulai_Kerja;
    char Unit_Kerja[50];
    TINGGAL Alamat_Rumah;
};

void inputBiodata(BIODATA &pegawai) {
    cout << "===================================================="<<endl;
    cout << "Nama                           : Indra Dwi Aryadi\n";
    cout << "NIM                            : 211011450468\n";
    cout << "===================================================="<<endl<<endl;
    cout << "NIP                            : ";
    cin.ignore();
    cin.getline(pegawai.NIP, 15);
    cout << "Nama                           : ";
    cin.getline(pegawai.Nama, 50);
    cout << "Alamat                         : ";
    cin.getline(pegawai.Alamat, 100);
    cout << "Jabatan                        : ";
    cin.getline(pegawai.Jabatan, 50);
    cout << "Agama                          : ";
    cin.getline(pegawai.Agama, 20);

    cout << "Tanggal Lahir(DD MM YYYY)      : ";
    cin >> pegawai.Tanggal_Lahir.Tanggal >> pegawai.Tanggal_Lahir.Bulan >> pegawai.Tanggal_Lahir.Tahun;

    cout << "Tanggal Mulai Kerja(DD MM YYYY): ";
    cin >> pegawai.Tanggal_Mulai_Kerja.Tanggal >> pegawai.Tanggal_Mulai_Kerja.Bulan >> pegawai.Tanggal_Mulai_Kerja.Tahun;

    cin.ignore();
    cout << "Unit Kerja                     : ";
    cin.getline(pegawai.Unit_Kerja, 50);

    cout << "Alamat Rumah                   : " << endl;
    cout << "Jalan                          : ";
    cin.getline(pegawai.Alamat_Rumah.Jalan, 50);
    cout << "Kode Pos                       : ";
    cin.getline(pegawai.Alamat_Rumah.Kode_Pos, 10);
    cout << "Kota                           : ";
    cin.getline(pegawai.Alamat_Rumah.Kota, 50);
}

void cetakBiodata(const BIODATA &pegawai) {
    cout << endl;
    cout << "==============================" << endl;
    cout << "| Nama         : " << "Indra Dwi Aryadi" << endl;
    cout << "| NIM          : " << "211011450468" << endl;
    cout << "==============================" << endl;
    cout << "| NIP          : " << pegawai.NIP << endl;
    cout << "| Nama         : " << pegawai.Nama << endl;
    cout << "| Alamat       : " << pegawai.Alamat << endl;
    cout << "| Jabatan      : " << pegawai.Jabatan << endl;
    cout << "| Agama        : " << pegawai.Agama << endl;
    cout << "| Tanggal Lahir: " << pegawai.Tanggal_Lahir.Tanggal << "/" << pegawai.Tanggal_Lahir.Bulan << "/" << pegawai.Tanggal_Lahir.Tahun << endl;
    cout << "| Mulai Kerja  : " << pegawai.Tanggal_Mulai_Kerja.Tanggal << "/" << pegawai.Tanggal_Mulai_Kerja.Bulan << "/" << pegawai.Tanggal_Mulai_Kerja.Tahun << endl;
    cout << "| Unit Kerja   : " << pegawai.Unit_Kerja << endl;
    cout << "| Alamat Rumah : " << endl;
    cout << "| Jalan        : " << pegawai.Alamat_Rumah.Jalan << endl;
    cout << "| Kode Pos     : " << pegawai.Alamat_Rumah.Kode_Pos << endl;
    cout << "| Kota         : " << pegawai.Alamat_Rumah.Kota << endl;
    cout << "==============================" << endl;
    cout << endl;
}

int main() {
    const int max_pegawai = 3;
    BIODATA pegawai[max_pegawai];
    int i = 0;

    do {
        cout << endl;
        cout << "Masukkan data pegawai ke-" << i + 1 << endl;
        inputBiodata(pegawai[i]);
        i++;
    } while (i < max_pegawai);

    cout << "\nData Pegawai:\n";
    i = 0;

    do {
        cout << "\nBiodata Pegawai ke-" << i + 1 << ":\n";
        cetakBiodata(pegawai[i]);
        i++;
    } while (i < max_pegawai);

    return 0;
}
