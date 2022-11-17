/* Buatlah program untuk mencatat data siswa suatu sekolah yang terdiri dari 
field nama, alamat, telepon, dan jenis kelamin. Tampilan Output sebagai 
berikut. (simpan dengan nama lat11_4.cpp) */

// Nama Siswa : Andri
// Alamat : Klaten
// Jenis Kelamin : Pria
// Telepon : 0856712712
// Mau tambah data lagi [Y/T] :

#include <iostream>
#pragma gcc optimize("O3")
#include <iomanip>

using namespace std;

struct Datapribadi {
    char Nama[100];
    char Alamat[100];
    char Jeniskelamin[20];
    int Telepon;
};

int main()
{
    int loop,data;
    char lagi;
    cout<<"Masukan Berapa Banyak Data Siswa : ";
    cin>>data;
    cin.ignore(100,'\n');

    Datapribadi siswa[data];

    for (loop = 0; loop < data; loop++)
    {
        cout << "Nama Siswa : ";
        cin.getline(siswa[loop].Nama, 100, '\n');
        cout << "Alamat : ";
        cin.getline(siswa[loop].Alamat, 100, '\n');
        cout << "Jenis Kelamin : ";
        cin.getline(siswa[loop].Jeniskelamin, 20, '\n');
        cout << "Telepon : ";
        cin >> siswa[loop].Telepon;
        cin.ignore(1000, '\n');
        cout << "Mau tambah data lagi [Y/T] : ";
        cin >> lagi;
        cin.ignore(100, '\n');
        if (lagi == 'T' || lagi == 't')
        {
            break;
        }
    }

    system("cls||clear");

    cout << "\nData Siswa:\n";
    cout.flags(ios::left);
    cout<<"________________________________________________________________\n";
    cout << setw(15) << "Nama"
         << "\tAlamat\t\tJenis Kelamin\tTelepon\n________________________________________________________________\n";
    cout<<endl;
    for (loop = 0; loop < data; loop++)
    {
        cout << setw(15) << siswa[loop].Nama;
        cout << "\t" << siswa[loop].Alamat;
        cout << "\t\t" << siswa[loop].Jeniskelamin;
        cout << "\t         " << siswa[loop].Telepon << endl;
    }
    cout << "________________________________________________________________\n";
    cout << "Terima Kasih\nCode By Indra Dwi Aryadi (211011450468)\n";
    cout << "________________________________________________________________";

    char tanya;
    cout << "\n\nApakah anda ingin mengulang program ini ? [Y/T] : ";
    cin >> tanya;
    if (tanya == 'Y' || tanya == 'y')
    {
        main();
    }
    else
    {
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