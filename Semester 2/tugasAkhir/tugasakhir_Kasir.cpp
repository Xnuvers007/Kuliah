// Buat Aplikasi Kasir
// penjumlahan, pembelian, penyewaan, peminjaman


#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

#include <iostream>
#include <cstdlib>
#include <iomanip>
// #include <ctime>

// Optimize and make it faster compile and run
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("O3")
#pragma GCC diagnostic ignored "-Wmultichar"

using namespace std;


int main()
{
    awal:

    int pilihan, jumlah, harga, total, bayar, kembali, i, j, a, k, m;

    // jam menit detik hari bulan tahun
    int hari, bulan, tahun, jam, menit, detik, namahari;
    char hari2[7][10] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    
    do
    {
        system("cls");
        cout << "====================================================" << endl;
        cout << "Aplikasi Kasir" << endl;
        cout << "Selamat Datang di Toko PT. INDRA DWI ARYADI Damascus" << endl;
        cout << "====================================================" << endl;
        cout << "Penjualan Tiket Pesawat / Kereta" << endl;
        cout << "1. Pesawat" << endl;
        cout << "2. Kereta" << endl;
        cout << "3. Exit" << endl;
        cout << "==============================" << endl;
        cout << "Masukkan Pilihan Anda : ";
        cin >> pilihan;
        cout << "==============================" << endl;
        switch (pilihan)
        {
            case 1:
                system("cls");
                cout << "=========================================" << endl;
                cout << " Anda Memilih Pesan untuk Tiket Pesawat  " << endl;
                cout << "=========================================" << endl;
                cout << "1. Pesawat Garuda Indonesia = 1.000.000" << endl;
                cout << "2. Pesawat Sriwijaya Air = 1.500.000" << endl;
                cout << "3. Pesawat Lion Air = 2.000.000" << endl;
                cout << "4. Pesawat Citilink = 2.500.000" << endl;
                cout << "5. Pesawat Air Asia = 3.000.000" << endl;

                cout << "Masukkan Pilihan Anda : ";
                cin >> pilihan;
                cout << "=========================================" << endl;
                cout<<endl;
                switch (pilihan)
                {
                    case 1:

                        system("cls");
                        cout << "=====================================================" << endl;
                        cout << " Anda Memilih Pesawat Garuda Indonesia  " << endl;
                        cout << "=====================================================" << endl;

                        // time_t now;
                        // struct tm timeinfo;
                        // time(&now);
                        // localtime_s(&timeinfo, &now);
                        // jam = timeinfo.tm_hour;
                        // menit = timeinfo.tm_min;
                        // detik = timeinfo.tm_sec;
                        // hari = timeinfo.tm_mday;
                        // bulan = timeinfo.tm_mon + 1;
                        // tahun = timeinfo.tm_year + 1900;
                        // namahari = timeinfo.tm_wday;

                        // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                        cout << "=====================================================" << endl;
                        cout << "Harga Tiket Pesawat Garuda Indonesia = 1.000.000" << endl;
                        cout << "Masukkan Jumlah Tiket : ";
                        cin >> jumlah;

                        harga = 1000000;
                        total = jumlah * harga;
                        cout << "Total Harga : " << total << endl;
                        cout << "Masukkan Uang Anda : ";
                        cin >> bayar;

                        if (bayar < total)
                        {
                            cout << "Uang Anda Kurang" << endl;
                        }
                        else
                        {
                            kembali = bayar - total;
                            cout << "Kembalian Anda : " << kembali << endl;
                        }

                        cout << "=========================================" << endl;
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "=========================================" << endl;

                        cout<<endl<<endl;

                        cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                        cout << "1. Ya" << endl;
                        cout << "2. Tidak" << endl;
                        cout << "Masukkan Pilihan Anda : ";
                        cin >> pilihan;
                        cout << "=========================================" << endl;
                        
                        if(pilihan == 1)
                        {
                            goto awal;
                        }
                        else
                        {
                            cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            cout << "=========================================" << endl;
                            cout << "Program Akan Keluar dalam 5 Detik" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            for (int i = 0; i < 5; i++)
                            {
                                cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                                system("cls");
                                #ifdef _WIN32
                                Sleep(1000);
                                #else
                                sleep(1);
                                #endif
                            }
                            exit(0);
                        }
                        break;
                    
                    case 2:
                        system("cls");
                        cout << "=====================================================" << endl;
                        cout << " Anda Memilih Pesawat Sriwijaya Air  " << endl;
                        cout << "=====================================================" << endl;

                        // time_t now;
                        // struct tm timeinfo;
                        // time(&now);
                        // localtime_s(&timeinfo, &now);
                        // jam = timeinfo.tm_hour;
                        // menit = timeinfo.tm_min;
                        // detik = timeinfo.tm_sec;
                        // hari = timeinfo.tm_mday;
                        // bulan = timeinfo.tm_mon + 1;
                        // tahun = timeinfo.tm_year + 1900;
                        // namahari = timeinfo.tm_wday;

                        // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                        cout << "=====================================================" << endl;
                        cout << "Harga Tiket Pesawat Sriwijaya Air = 1.500.000" << endl;
                        cout << "Masukkan Jumlah Tiket : ";
                        cin >> jumlah;

                        harga = 1500000;
                        total = jumlah * harga;
                        cout << "Total Harga : " << total << endl;
                        cout << "Masukkan Uang Anda : ";
                        cin >> bayar;

                        if (bayar < total)
                        {
                            cout << "Uang Anda Kurang" << endl;
                        }
                        else
                        {
                            kembali = bayar - total;
                            cout << "Kembalian Anda : " << kembali << endl;
                        }

                        cout << "=========================================" << endl;
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "=========================================" << endl;

                        cout<<endl<<endl;

                        cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                        cout << "1. Ya" << endl;
                        cout << "2. Tidak" << endl;
                        cout << "Masukkan Pilihan Anda : ";
                        cin >> pilihan;
                        cout << "=========================================" << endl;

                        if(pilihan == 1)
                        {
                            goto awal;
                        }
                        else
                        {
                            cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            cout << "=========================================" << endl;
                            cout << "Program Akan Keluar dalam 5 Detik" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            for (int i = 0; i < 5; i++)
                            {
                                cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                                system("cls");
                                #ifdef _WIN32
                                Sleep(1000);
                                #else
                                sleep(1);
                                #endif
                            }
                            exit(0);
                        }
                        break;

                    case 3:
                        system("cls");
                        cout << "=====================================================" << endl;
                        cout << " Anda Memilih Pesawat Lion Air  " << endl;
                        cout << "=====================================================" << endl;

                        // time_t now;
                        // struct tm timeinfo;
                        // time(&now);
                        // localtime_s(&timeinfo, &now);
                        // jam = timeinfo.tm_hour;
                        // menit = timeinfo.tm_min;
                        // detik = timeinfo.tm_sec;
                        // hari = timeinfo.tm_mday;
                        // bulan = timeinfo.tm_mon + 1;
                        // tahun = timeinfo.tm_year + 1900;
                        // namahari = timeinfo.tm_wday;

                        // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                        cout << "=====================================================" << endl;
                        cout << "Harga Tiket Pesawat Lion Air = 2.000.000" << endl;
                        cout << "Masukkan Jumlah Tiket : ";
                        cin >> jumlah;

                        harga = 2000000;
                        total = jumlah * harga;
                        cout << "Total Harga : " << total << endl;
                        cout << "Masukkan Uang Anda : ";
                        cin >> bayar;

                        if (bayar < total)
                        {
                            cout << "Uang Anda Kurang" << endl;
                        }
                        else
                        {
                            kembali = bayar - total;
                            cout << "Kembalian Anda : " << kembali << endl;
                        }

                        cout << "=========================================" << endl;
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "=========================================" << endl;

                        cout<<endl<<endl;

                        cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                        cout << "1. Ya" << endl;
                        cout << "2. Tidak" << endl;
                        cout << "Masukkan Pilihan Anda : ";
                        cin >> pilihan;
                        cout << "=========================================" << endl;

                        if(pilihan == 1)
                        {
                            goto awal;
                        }
                        else
                        {
                            cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            cout << "=========================================" << endl;
                            cout << "Program Akan Keluar dalam 5 Detik" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            for (int i = 0; i < 5; i++)
                            {
                                cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                                system("cls");
                                #ifdef _WIN32
                                Sleep(1000);
                                #else
                                sleep(1);
                                #endif
                            }
                            exit(0);
                        }
                        break;

                    case 4:
                        system("cls");
                        cout << "=====================================================" << endl;
                        cout << " Anda Memilih Pesawat Citilink  " << endl;
                        cout << "=====================================================" << endl;

                        // time_t now;
                        // struct tm timeinfo;
                        // time(&now);
                        // localtime_s(&timeinfo, &now);
                        // jam = timeinfo.tm_hour;
                        // menit = timeinfo.tm_min;
                        // detik = timeinfo.tm_sec;
                        // hari = timeinfo.tm_mday;
                        // bulan = timeinfo.tm_mon + 1;
                        // tahun = timeinfo.tm_year + 1900;
                        // namahari = timeinfo.tm_wday;

                        // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                        cout << "=====================================================" << endl;
                        cout << "Harga Tiket Pesawat Citilink = 2.500.000" << endl;
                        cout << "Masukkan Jumlah Tiket : ";
                        cin >> jumlah;

                        harga = 2500000;
                        total = jumlah * harga;
                        cout << "Total Harga : " << total << endl;
                        cout << "Masukkan Uang Anda : ";
                        cin >> bayar;

                        if (bayar < total)
                        {
                            cout << "Uang Anda Kurang" << endl;
                        }
                        else
                        {
                            kembali = bayar - total;
                            cout << "Kembalian Anda : " << kembali << endl;
                        }

                        cout << "=========================================" << endl;
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "=========================================" << endl;

                        cout<<endl<<endl;

                        cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                        cout << "1. Ya" << endl;
                        cout << "2. Tidak" << endl;
                        cout << "Masukkan Pilihan Anda : ";
                        cin >> pilihan;
                        cout << "=========================================" << endl;

                        if(pilihan == 1)
                        {
                            goto awal;
                        }
                        else
                        {
                            cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            cout << "=========================================" << endl;
                            cout << "Program Akan Keluar dalam 5 Detik" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            for (int i = 0; i < 5; i++)
                            {
                                cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                                system("cls");
                                #ifdef _WIN32
                                Sleep(1000);
                                #else
                                sleep(1);
                                #endif
                            }
                            exit(0);
                        }
                        break;

                    case 5:
                        system("cls");
                        cout << "=====================================================" << endl;
                        cout << " Anda Memilih Pesawat Air Asia  " << endl;
                        cout << "=====================================================" << endl;

                        // time_t now;
                        // struct tm timeinfo;
                        // time(&now);
                        // localtime_s(&timeinfo, &now);
                        // jam = timeinfo.tm_hour;
                        // menit = timeinfo.tm_min;
                        // detik = timeinfo.tm_sec;
                        // hari = timeinfo.tm_mday;
                        // bulan = timeinfo.tm_mon + 1;
                        // tahun = timeinfo.tm_year + 1900;
                        // namahari = timeinfo.tm_wday;

                        // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                        cout << "=====================================================" << endl;
                        cout << "Harga Tiket Pesawat Air Asia = 3.000.000" << endl;
                        cout << "Masukkan Jumlah Tiket : ";
                        cin >> jumlah;

                        harga = 3000000;
                        total = jumlah * harga;
                        cout << "Total Harga : " << total << endl;
                        cout << "Masukkan Uang Anda : ";
                        cin >> bayar;

                        if (bayar < total)
                        {
                            cout << "Uang Anda Kurang" << endl;
                        }
                        else
                        {
                            kembali = bayar - total;
                            cout << "Kembalian Anda : " << kembali << endl;
                        }

                        cout << "=========================================" << endl;
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "=========================================" << endl;

                        cout<<endl<<endl;

                        cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                        cout << "1. Ya" << endl;
                        cout << "2. Tidak" << endl;
                        cout << "Masukkan Pilihan Anda : ";
                        cin >> pilihan;
                        cout << "=========================================" << endl;

                        if(pilihan == 1)
                        {
                            goto awal;
                        }
                        else
                        {
                            cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            cout << "=========================================" << endl;
                            cout << "Program Akan Keluar dalam 5 Detik" << endl;
                            cout << "=========================================" << endl;
                            cout<<endl<<endl;
                            for (int i = 0; i < 5; i++)
                            {
                                cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                                system("cls");
                                #ifdef _WIN32
                                Sleep(1000);
                                #else
                                sleep(1);
                                #endif
                            }
                            exit(0);
                        }
                        break;

                    default:
                        cout<<"Pilihan Anda Tidak Ada"<<endl;
                        break;

                }
                break;

            case 2:
                system("cls");
                cout << "=========================================" << endl;
                cout << " Anda Memilih Pesan untuk Tiket Kereta  " << endl;
                cout << "=========================================" << endl;
                cout << "1. Kereta Api Ekonomi = 500.000" << endl;
                cout << "2. Kereta Api Bisnis = 1.000.000" << endl;
                cout << "3. Kereta Api Eksekutif = 1.500.000" << endl;
                cout << "4. Kereta Api VIP = 3.000.000" << endl;
                cout << "5. Kereta Api Eksekutif VVIP = 5.000.000" << endl;
                cout << "Masukkan Pilihan Anda : ";
                cin >> pilihan;
                cout << setw(50) << "=========================================" << endl;
                cout<<endl;
                switch (pilihan)
                {
                    case 1:

                        system("cls");
                        cout << "===================================================" << endl;
                        cout << " Anda Memilih Kereta Api Ekonomi  " << endl;
                        // time_t now = time(0);
                        // char* dt = ctime(&now);
                        // cout << "Tanggal dan Waktu Sekarang : " << dt << endl;

                        // time_t now;
                        // struct tm timeinfo;
                        // time(&now);
                        // localtime_s(&timeinfo, &now);
                        // jam = timeinfo.tm_hour;
                        // menit = timeinfo.tm_min;
                        // detik = timeinfo.tm_sec;
                        // hari = timeinfo.tm_mday;
                        // bulan = timeinfo.tm_mon + 1;
                        // tahun = timeinfo.tm_year + 1900;
                        // namahari = timeinfo.tm_wday;

                        // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                        cout << "===================================================" << endl;
                        cout << "Harga Tiket Kereta Api Ekonomi = 500.000" << endl;
                        cout << "Masukkan Jumlah Tiket : ";
                        cin >> jumlah;

                        harga = 500000;
                        total = jumlah * harga;
                        cout << "Total Harga : " << total << endl;
                        cout << "Masukkan Uang Anda : ";
                        cin >> bayar;
                        if (bayar < total)
                        {
                            cout << "Uang Anda Kurang" << endl;
                        }
                        else
                        {
                            kembali = bayar - total;
                            cout << "Kembalian Anda : " << kembali << endl;
                        }

                        cout << "===================================================" << endl;
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "===================================================" << endl;

                        cout<<endl<<endl;

                        cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                        cout << "1. Ya" << endl;
                        cout << "2. Tidak" << endl;
                        cout << "Masukkan Pilihan Anda : ";
                        cin >> pilihan;
                        cout << "===================================================" << endl;
                        if(pilihan == 1)
                        {
                            goto awal;
                        }
                        else
                        {
                            cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                            cout << "===================================================" << endl;
                            cout<<endl<<endl;
                            cout << "===================================================" << endl;
                            cout << "Program Akan Keluar dalam 5 Detik" << endl;
                            cout << "===================================================" << endl;
                            cout<<endl<<endl;
                            for (int i = 0; i < 5; i++)
                            {
                                cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                                system("cls");
                                #ifdef _WIN32
                                Sleep(1000);
                                #else
                                sleep(1);
                                #endif
                            }
                            exit(0);
                        }
                        break;

                    case 2:
                        
                            system("cls");
                            cout << "===================================================" << endl;
                            cout << " Anda Memilih Kereta Api Bisnis  " << endl;

                            // time_t now;
                            // struct tm timeinfo;
                            // time(&now);
                            // localtime_s(&timeinfo, &now);
                            // jam = timeinfo.tm_hour;
                            // menit = timeinfo.tm_min;
                            // detik = timeinfo.tm_sec;
                            // hari = timeinfo.tm_mday;
                            // bulan = timeinfo.tm_mon + 1;
                            // tahun = timeinfo.tm_year + 1900;
                            // namahari = timeinfo.tm_wday;

                            // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                            cout << "===================================================" << endl;
                            cout << "Harga Tiket Kereta Api Bisnis = 1.000.000" << endl;
                            cout << "Masukkan Jumlah Tiket : ";
                            cin >> jumlah;

                            harga = 1000000;
                            total = jumlah * harga;
                            cout << "Total Harga : " << total << endl;
                            cout << "Masukkan Uang Anda : ";
                            cin >> bayar;
                            if (bayar < total)
                            {
                                cout << "Uang Anda Kurang" << endl;
                            }
                            else
                            {
                                kembali = bayar - total;
                                cout << "Kembalian Anda : " << kembali << endl;
                            }

                            cout << "===================================================" << endl;
                            cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                            cout << "===================================================" << endl;

                            cout<<endl<<endl;

                            cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                            cout << "1. Ya" << endl;
                            cout << "2. Tidak" << endl;
                            cout << "Masukkan Pilihan Anda : ";
                            cin >> pilihan;
                            cout << "===================================================" << endl;
                            if(pilihan == 1)
                            {
                                goto awal;
                            }
                            else
                            {
                                cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                                cout << "===================================================" << endl;
                                cout<<endl<<endl;
                                cout << "===================================================" << endl;
                                cout << "Program Akan Keluar dalam 5 Detik" << endl;
                                cout << "===================================================" << endl;
                                cout<<endl<<endl;
                                for (int i = 0; i < 5; i++)
                                {
                                    cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                                    system("cls");
                                    #ifdef _WIN32
                                    Sleep(1000);
                                    #else
                                    sleep(1);
                                    #endif
                                }
                                exit(0);
                            }
                            break;

                    case 3:
                        system("cls");
                        cout << "===================================================" << endl;
                        cout << " Anda Memilih Kereta Api Eksekutif  " << endl;
                        cout << "===================================================" << endl;

                        // time_t now;
                        // struct tm timeinfo;
                        // time(&now);
                        // localtime_s(&timeinfo, &now);
                        // jam = timeinfo.tm_hour;
                        // menit = timeinfo.tm_min;
                        // detik = timeinfo.tm_sec;
                        // hari = timeinfo.tm_mday;
                        // bulan = timeinfo.tm_mon + 1;
                        // tahun = timeinfo.tm_year + 1900;
                        // namahari = timeinfo.tm_wday;

                        // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                        cout << "===================================================" << endl;
                        cout << "Harga Tiket Kereta Api Eksekutif = 1.500.000" << endl;
                        cout << "Masukkan Jumlah Tiket : ";
                        cin >> jumlah;

                        harga = 1500000;
                        total = jumlah * harga;
                        cout << "Total Harga : " << total << endl;
                        cout << "Masukkan Uang Anda : ";
                        cin >> bayar;
                        if (bayar < total)
                        {
                            cout << "Uang Anda Kurang" << endl;
                        }
                        else
                        {
                            kembali = bayar - total;
                            cout << "Kembalian Anda : " << kembali << endl;
                        }

                        cout << "===================================================" << endl;
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "===================================================" << endl;

                        cout<<endl<<endl;
                        
                        cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                        cout << "1. Ya" << endl;
                        cout << "2. Tidak" << endl;
                        cout << "Masukkan Pilihan Anda : ";
                        cin >> pilihan;
                        cout << "===================================================" << endl;

                        if(pilihan == 1)
                        {
                            goto awal;
                        }
                        else
                        {
                            cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                            cout << "===================================================" << endl;
                            cout<<endl<<endl;
                            cout << "===================================================" << endl;
                            cout << "Program Akan Keluar dalam 5 Detik" << endl;
                            cout << "===================================================" << endl;
                            cout<<endl<<endl;
                            for (int i = 0; i < 5; i++)
                            {
                                cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                                system("cls");
                                #ifdef _WIN32
                                Sleep(1000);
                                #else
                                sleep(1);
                                #endif
                            }
                            exit(0);
                        }
                    break;

                case 4:
                    system("cls");
                    cout << "===================================================" << endl;
                    cout << " Anda Memilih Kereta Api VIP  " << endl;
                    cout << "===================================================" << endl;

                    // time_t now;
                    // struct tm timeinfo;
                    // time(&now);
                    // localtime_s(&timeinfo, &now);
                    // jam = timeinfo.tm_hour;
                    // menit = timeinfo.tm_min;
                    // detik = timeinfo.tm_sec;
                    // hari = timeinfo.tm_mday;
                    // bulan = timeinfo.tm_mon + 1;
                    // tahun = timeinfo.tm_year + 1900;
                    // namahari = timeinfo.tm_wday;

                    cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                    cout << "===================================================" << endl;
                    cout << "Harga Tiket Kereta Api VIP = 3.000.000" << endl;
                    cout << "Masukkan Jumlah Tiket : ";
                    cin >> jumlah;

                    harga = 3000000;
                    total = jumlah * harga;
                    cout << "Total Harga : " << total << endl;
                    cout << "Masukkan Uang Anda : ";
                    cin >> bayar;
                    if (bayar < total)
                    {
                        cout << "Uang Anda Kurang" << endl;
                    }
                    else
                    {
                        kembali = bayar - total;
                        cout << "Kembalian Anda : " << kembali << endl;
                    }

                    cout << "===================================================" << endl;
                    cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                    cout << "===================================================" << endl;

                    cout<<endl<<endl;

                    cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                    cout << "1. Ya" << endl;
                    cout << "2. Tidak" << endl;
                    cout << "Masukkan Pilihan Anda : ";
                    cin >> pilihan;
                    cout << "===================================================" << endl;

                    if(pilihan == 1)
                    {
                        goto awal;
                    }
                    else
                    {
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "===================================================" << endl;
                        cout<<endl<<endl;
                        cout << "===================================================" << endl;
                        cout << "Program Akan Keluar dalam 5 Detik" << endl;
                        cout << "===================================================" << endl;
                        cout<<endl<<endl;
                        for (int i = 0; i < 5; i++)
                        {
                            cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                            system("cls");
                            #ifdef _WIN32
                            Sleep(1000);
                            #else
                            sleep(1);
                            #endif
                        }
                        exit(0);
                    }
                    break;

                case 5:
                    system("cls");
                    cout << "===================================================" << endl;
                    cout << " Anda Memilih Kereta Api VVIP  " << endl;
                    cout << "===================================================" << endl;

                    // time_t now;
                    // struct tm timeinfo;
                    // time(&now);
                    // localtime_s(&timeinfo, &now);
                    // jam = timeinfo.tm_hour;
                    // menit = timeinfo.tm_min;
                    // detik = timeinfo.tm_sec;
                    // hari = timeinfo.tm_mday;
                    // bulan = timeinfo.tm_mon + 1;
                    // tahun = timeinfo.tm_year + 1900;
                    // namahari = timeinfo.tm_wday;

                    // cout << "Tanggal dan Waktu Pemesanan : "<< hari2[namahari] << " " << hari << "/" << bulan << "/" << tahun << " " << jam << ":" << menit << ":" << detik << endl;

                    cout << "===================================================" << endl;
                    cout << "Harga Tiket Kereta Api VVIP = 5.000.000" << endl;
                    cout << "Masukkan Jumlah Tiket : ";
                    cin >> jumlah;

                    harga = 5000000;
                    total = jumlah * harga;
                    cout << "Total Harga : " << total << endl;
                    cout << "Masukkan Uang Anda : ";
                    cin >> bayar;

                    if (bayar < total)
                    {
                        cout << "Uang Anda Kurang" << endl;
                    }
                    else
                    {
                        kembali = bayar - total;
                        cout << "Kembalian Anda : " << kembali << endl;
                    }

                    cout << "===================================================" << endl;
                    cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                    cout << "===================================================" << endl;

                    cout<<endl<<endl;

                    cout << " Apakah Anda Ingin Melakukan Transaksi Lagi ? " << endl;
                    cout << "1. Ya" << endl;
                    cout << "2. Tidak" << endl;
                    cout << "Masukkan Pilihan Anda : ";
                    cin >> pilihan;
                    cout << "===================================================" << endl;

                    if(pilihan == 1)
                    {
                        goto awal;
                    }
                    else
                    {
                        cout << "Terima Kasih Telah Berbelanja di Toko Kami" << endl;
                        cout << "===================================================" << endl;
                        cout<<endl<<endl;
                        cout << "===================================================" << endl;
                        cout << "Program Akan Keluar dalam 5 Detik" << endl;
                        cout << "===================================================" << endl;
                        cout<<endl<<endl;
                        for (int i = 0; i < 5; i++)
                        {
                            cout << "Program Akan Keluar dalam " << 5 - i << " Detik" << endl;
                            system("cls");
                            #ifdef _WIN32
                            Sleep(1000);
                            #else
                            sleep(1);
                            #endif
                        }
                        exit(0);
                    }
                    break;

                default:
                        cout<<"Pilihan Anda Tidak Ada"<<endl;
                        break;
                }
                break;

            case 3:
                cout << " Akan Keluar dalam 3 Detik " << endl;
                for (int i = 1; i <= 3; i++)
                {
                    cout << i << endl;
                    // system("cls");
                    Sleep(1000);
                }
                break;
            
            default:
                cout<<"Pilihan Anda Tidak Ada"<<endl;
                char tanya;
                cout<<"Ingin mengulang kembali ? [y/N] : ";
                cin>>tanya;
                if(tanya == 'y' || tanya == 'Y')
                {
                    goto awal;
                }
                else
                {
                    cout << " Akan Keluar dalam 3 Detik " << endl;
                    for (int i = 1; i <= 3; i++)
                    {
                        cout << i << endl;
                        // system("cls");
                        Sleep(1000);
                    }
                }
                break;
        }
    }
    while (pilihan != 3);
    return 0;
}