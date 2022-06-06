// how to make cashier program using loop and if else
// import library
#include <iostream>
using namespace std;

int main()
{
    // declare variable
    int harga, jml_barang, total, pilihan, bayarIndra, kembalianIndra;
    char ulang;
    string item;
    // Nama
        indra:
    cout<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"Nama = Indra Dwi Aryadi"<<endl;
    cout<<"NIM = 211011450468"<<endl;
    cout<<"Kelas = 01 TPLP 004"<<endl;
    cout<<"==========================================================="<<endl;

    // Item list
    cout << "Item List" << endl;
    cout << "1. Bakso = Rp. 15,000" << endl;
    cout << "2. Mie = Rp. 20,000" << endl;
    cout << "3. Sate = Rp. 25,000" << endl;
    cout << "4. Es Teh = Rp. 5,000" << endl;
    cout << "5. Boba = Rp. 10,000" << endl;
    cout << "6. Jus = Rp. 15,000" << endl;
    cout << "7. Selesai" << endl;

    // Input
do
    {
        cout<<endl;
        cout << "Masukkan pilihan anda : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            item = "Bakso";
            harga = 15000;
            cout<<"Anda memilih : "<<item<<endl;
            cout<<"Jumlah barang : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;
        case 2:
            item = "Mie";
            harga = 20000;
            cout<<"Anda memilih : "<<item<<endl;
            cout<<"Jumlah barang : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;
        
        case 3:
            item = "Sate";
            harga = 25000;
            cout<<"Anda memilih : "<<item<<endl;
            cout<<"Jumlah barang : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;

        case 4:
            item = "Es Teh";
            harga = 5000;
            cout<<"Anda memilih : "<<item<<endl;
            cout<<"Jumlah barang : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;

        case 5:
            item = "Boba";
            harga = 10000;
            cout<<"Anda memilih : "<<item<<endl;
            cout<<"Jumlah barang : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;

        case 6:
            item = "Jus";
            harga = 15000;
            cout<<"Anda memilih : "<<item<<endl;
            cout<<"Jumlah barang : ";
            cin>>jml_barang;
            total += harga * jml_barang;
            cout<<jml_barang<<" "<<item;
            cout<<" = Rp. "<<harga*jml_barang<<endl;
            break;

        case 7:
            cout<<"total  Pesanan : Rp. "<<total<<endl;
            pilihan = 7;
            break;


        default:
            cout<<"Maaf, pilihan anda tidak tersedia"<<endl;
            break;
        }

    }
    while (pilihan != 7);
                if (total > 50000)
                {
                    
                    cout<<"Terima kasih telah berbelanja di Kasir kami"<<endl;
                    cout<<"Anda mendapatkan diskon sebesar 10%"<<endl;
                    cout<<"Total yang harus dibayar : Rp. "<<total*0.1<<endl; // diskon 10%
                    cout<<"Bayar : Rp. ";
                    cin>>bayarIndra;
                    kembalianIndra = bayarIndra - total*0.1;
                    cout<<"Kembalian : Rp. "<<kembalianIndra<<endl<<endl;
                    cout<<"Apakah anda ingin mengulangi transaksi? (y/n) : ";
                    cin>>ulang;
                    if (ulang == 'y' || ulang == 'Y')
                    {
                        goto indra;
                    }
                    else if(ulang == 'n' || ulang == 'N')
                    {
                        goto DwiAryadi;
                    }

                }
            // else if(total >= 40000)
            else if(total > 40000 && total <= 50000)
                {

                    cout<<"Anda Mendapatkan Diskon sebesar 5%"<<endl;
                    cout<<"Total yang harus dibayar : Rp. "<<total*0.05<<endl; // diskon 5%
                    cout<<"Bayar : Rp. ";
                    cin>>bayarIndra;
                    kembalianIndra = bayarIndra - total*0.05;
                    cout<<"Kembalian : Rp. "<<kembalianIndra<<endl;
                    cout<<"Apakah anda ingin mengulangi transaksi? (y/n) : ";
                    cin>>ulang;
                    if (ulang == 'y' || ulang == 'Y')
                    {
                        goto indra;
                    }
                    else if(ulang == 'n' || ulang == 'N')
                    {
                        goto DwiAryadi;
                    }

                }
            // else if(total <= 50000)
            //     {
            //         cout<<"Anda Mendapatkan Diskon sebesar 5%"<<endl;
            //         cout<<"Total yang harus dibayar : Rp. "<<total*0.05<<endl; // diskon 5%
            //         cout<<"Bayar : Rp. ";
            //         cin>>bayarIndra;
            //         kembalianIndra = bayarIndra - total*0.05;
            //         cout<<"Kembalian : Rp. "<<kembalianIndra<<endl;
            //         cout<<"Apakah anda ingin mengulangi transaksi? (y/n) : ";
            //         cin>>ulang;
            //         if (ulang == 'y' || ulang == 'Y')
            //         {
            //             goto indra;
            //         }
            //         else if(ulang == 'n' || ulang == 'N')
            //         {
            //             goto DwiAryadi;
            //         }

            //     }
            else
                {
                    cout<<"Anda tidak mendapatkan diskon"<<endl;
                    cout<<"total yang harus dibayar : Rp. "<<total<<endl;
                    cout<<"Bayar : Rp. ";
                    cin>>bayarIndra;
                    kembalianIndra = bayarIndra - total;
                    cout<<"Kembalian : Rp. "<<kembalianIndra<<endl;
                    cout<<"Apakah anda ingin mengulangi transaksi? (y/n) : ";
                    cin>>ulang;
                    if (ulang == 'y' || ulang == 'Y')
                        {
                            goto indra;
                        }
                    else if(ulang == 'n' || ulang == 'N')
                        {
                            goto DwiAryadi;
                        }

                }
            cout << "Terimakasih telah berbelanja di Kasir kami" << endl;
            cout << "Coding By Indra Dwi Aryadi (211011450468)";
            
    
    DwiAryadi:
    cout << "Terimakasih telah berbelanja di Kasir kami" << endl;
}
