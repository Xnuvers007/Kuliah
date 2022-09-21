#include <iostream>
#include <stdio.h>
// #include <signal.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>

using namespace std;

// void sigint_Handler (int sig) {
//     signal (SIGINT, sigint_Handler);
//     cout<<"Tidak Bisa Di close dengan CTRL+C"<<endl;
//     cout<<"Gunakan Perintah exit atau ketik 6"<<endl;
//     fflush (stdout);
// } kode untuk ctrl+c tidak dapat digunakan

int main()
{
    int harga, diskon, total, i;
    char ulang;
    string nama;

    // signal (SIGINT, sigint_Handler); // kode untuk ctrl + c tidak dapat digunakan
    
    // while(1){
    // }

    cout<<"Masukan nama Anda : ";
    // cin.getline(nama,sizeof(nama));
    // cin>>nama;
    getline(cin>>nama, nama);

    cout<<"|================================|"<<endl;
    cout<<" Loket Pembelian\n";
    cout<<" Nama : Indra Dwi Aryadi \n";
    cout<<" NIM : xxxxxxxxxxx \n";
    cout<<"|================================|"<<endl;
    cout<<" 1. Pembelian 199999 - 100000 = Discount 5% \n";
    cout<<" 2. Pembalian 299999 - 200000 = Tiket Ke Jogja \n";
    cout<<" 3. Pembelian 399999 - 300000 = Tiket Ke Bali \n";
    cout<<" 4. Pembelian 499999 - 400000 = Jam Tangan Rolex \n";
    cout<<" 5. Pembelian 500000 - 1000000 = tiket ke Swiss \n";
    cout<<" 6. Exit / Keluar \n";
    cout<<"|================================|"<<endl;
    
    cout<<" Atas Nama "<<nama<<endl;
    cout<<" Masukan total pembelian : ";
    cin>>harga;

    switch(harga){
        case 100000 ... 199999:
        case 1:
            cout<<" Anda mendapatkan diskon 5% \n";
            diskon = harga * 0.05;
            total = harga - diskon;
            cout<<" Anda Mendapatkan Diskon Sebesar : "<<diskon<<endl;
            cout<<" Uang yang diberikan : "<<harga<<endl;
            cout<<" Total yang harus dibayar : "<<total<<endl;
            break;
        case 200000 ... 299999:
        case 2:
            cout<<" Anda mendapatkan tiket ke Jogja \n";
            cout<<" Uang yang diberikan : "<<harga<<endl;
            break;
        case 300000 ... 399999:
        case 3:
            cout<<" Anda mendapatkan tiket ke Bali \n";
            cout<<" Uang yang diberikan : "<<harga<<endl;
            break;
        case 400000 ... 499999:
        case 4:
            cout<<" Anda mendapatkan jam tangan Rolex \n";
            cout<<" Uang yang diberikan : "<<harga<<endl;
            break;
        case 500000 ... 1000000:
        case 5:
            cout<<" Anda mendapatkan tiket ke Swiss \n";
            cout<<" Uang yang diberikan : "<<harga<<endl;
            break;
        case 6:
            cout<<" Terima Kasih Atas Kunjungan Anda \n";
            Sleep(3);
            system("exit");
            break;
        default:
            cout<<" Anda tidak mendapatkan apapun \n";
            break;
    }

    for(i=0;i<1;i++){
        cout<<" Apakah Anda Ingin Mengulang Program ? (y/n) : ";
        cin>>ulang;
        if(ulang=='y' || ulang=='Y'){
            system("cls");
            main();
        }else if(ulang=='n' || ulang=='N'){
            cout<<" Terima Kasih Telah Menggunakan Program Ini \n";
            cout<<" Program Akan Keluar Dalam 5 Detik \n";
            for(i=5;i>0;i--){
                cout<<i<<endl;
                Sleep(5);
            }
            exit(0);
        }else{
            cout<<" Anda Salah Memasukan Input \n";
            cout<<" Program Akan Keluar Dalam 5 Detik \n";
            system("pause");
            exit(0);
        }
    }

    return 0;
}
