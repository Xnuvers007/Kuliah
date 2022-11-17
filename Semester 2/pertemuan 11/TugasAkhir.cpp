/*
1. Buatlah program untuk mencatat data karyawan yang terdiri dari field jumlah 
karyawan, nama, gaji/bulan, serta status (belum nikah/menikah). Jika sudah 
menikah, tanya berapa anaknya. Tampilkan seluruh data dalam bentuk tabel...!
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct DataKaryawan {
    int JumlahKaryawan;
    string Nama;
    int GajiPerBulan;
    string Status;
    int Anak;
};

int main()
{
    int loop, data;
    char lagi;
    system("cls||clear");
    cout << "Masukan Berapa Banyak Data Karyawan : ";
    cin >> data;
    cin.ignore(100, '\n');

    DataKaryawan karyawan[data];

    for (loop = 0; loop < data; loop++)
    {
        cout << "Nama Karyawan : ";
        getline(cin, karyawan[loop].Nama);
        cout << "Gaji Per Bulan : ";
        cin >> karyawan[loop].GajiPerBulan;
        cin.ignore(100, '\n');
        cout << "Status [Menikah/Single] : ";
        getline(cin, karyawan[loop].Status);
        // create if condition from text file
        // ifstream file("menikah.txt");
        // ifstream file2("single.txt");
        // if (file.is_open()) {
        //     cout << "Berapa Anak : ";
        //     cin >> karyawan[loop].Anak;
        //     cin.ignore(100, '\n');
        // }
        // else if (file2.is_open()){
        //     cout << "Anda Belum Menikah";
        // }
        // if else condition from text file
        // if nikah == open file menikah.txt
        // if single == open file single.txt

        if(karyawan[loop].Status == "Menikah"){
            cout << "Berapa Anak : ";
            cin >> karyawan[loop].Anak;
            cin.ignore(100, '\n');
        }
        else if(karyawan[loop].Status == "Single"){
            karyawan[loop].Anak = 0;
        }

        cout << "Mau tambah data lagi [Y/T] : ";
        cin >> lagi;
        cin.ignore(100, '\n');
        if (lagi == 'T' || lagi == 't')
        {
            break;
        }
    }

    system("cls||clear");

    cout << "\nData Karyawan:\n";
    cout.flags(ios::left);
    cout << "________________________________________________________________\n";
    cout << setw(15) << "Nama"
         << "\tGaji Per Bulan\tStatus\tAnak\n________________________________________________________________\n";
    for (loop = 0; loop < data; loop++)
    {
        cout << setw(15) << karyawan[loop].Nama
             << "\t" << karyawan[loop].GajiPerBulan
             << "\t\t" << karyawan[loop].Status
             << "\t" << karyawan[loop].Anak << endl;
    }
    cout << "________________________________________________________________\n";
    cout << " Terimakasih, Sampai Jumpa Lagi...! " << endl;
    cout << "Di Buat Oleh : Indra Dwi Aryadi (211011450468)" << endl;
    cout << "________________________________________________________________\n";
    char nanya;
    cout << "Apakah Anda Ingin Menyimpan Data Ini Ke File Text ? [Y/T] : ";
    cin >> nanya;
    cin.ignore(100, '\n');
    if (nanya == 'Y' || nanya == 'y') {
        ofstream file("DataKaryawan.txt");
        if (file.is_open()) {
            file << "Data Karyawan:\n";
            file.flags(ios::left);
            file << "________________________________________________________________\n";
            file << setw(15) << "Nama"
                 << "\tGaji Per Bulan\tStatus\tAnak\n________________________________________________________________\n";
            for (loop = 0; loop < data; loop++)
            {
                file << setw(15) << karyawan[loop].Nama
                     << "\t" << karyawan[loop].GajiPerBulan
                     << "\t\t" << karyawan[loop].Status
                     << "\t" << karyawan[loop].Anak << endl;
            }
            file << "________________________________________________________________\n";
            file << " Terimakasih, Sampai Jumpa Lagi...! " << endl;
            file << "Di Buat Oleh : Indra Dwi Aryadi (211011450468)" << endl;
            file << "________________________________________________________________\n";
        }
        file.close();
        cout << "Data Berhasil Disimpan Ke File Text" << endl;
    }
    else {
        cout << "Data Tidak Disimpan Ke File Text" << endl;
    }

    cout<<endl<<endl;
    char nanya2;
    cout << "Apakah anda ingin mengulang program ini ? [Y/T] : ";
    cin >> nanya2;
    cin.ignore(100, '\n');
    if (nanya2 == 'Y' || nanya2 == 'y') {
        main();
    }
    else {
        cout << "Akan Keluar dalam 3 detik";
        time_t start = time(NULL);
        while (time(NULL) - start < 3)
        {
            system("cls||clear");
            cout << time(NULL) - start << endl;
        }
        exit(0);
    }

    return 0;
}

// REFERENCE : https://cplusplus.com/doc/tutorial/files/