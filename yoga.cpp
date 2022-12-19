#include <iostream>
using namespace std;

int main()
{
    int kode, pri, jml, ttl, byr, kbl, menu, pil;
    char mad;
    do{
        cout<<"                 RESTORAN                 "<<endl;
        cout<<"========================================="<<endl;
        cout<<" "<<endl;
        
        cout<<"1. Makanan"<<endl;
        cout<<"A. Nasi Goreng   10.000"<<endl;
        cout<<"B. Nasi Uduk     5.000"<<endl;

        cout<<"2. Minuman"<<endl;
        cout<<"A. Teh       3.000"<<endl;
        cout<<"B. Kopi      5.000"<<endl;

        cout<<endl<<endl;

        int nasigoreng, nasiuduk, teh, kopi;
        nasigoreng = 10000;
        nasiuduk = 5000;
        teh = 3000;
        kopi = 5000;

        cout<<"Masukan Kode : [1/2] : ";
        cin>>kode;
        cout<<"Masukan Pilihan : [A/B] : ";
        cin>>mad;
        switch(kode)
        {
            case 1:
                cout<<"Anda Memilih Makanan"<<endl;
                switch(mad)
                {
                    case 'A':
                        cout<<"Anda Memilih Nasi Goreng"<<endl;
                        cout<<"Masukan Jumlah : ";
                        cin>>jml;
                        ttl = nasigoreng * jml;
                        cout<<"Total Harga : "<<ttl<<endl;
                        cout<<"Masukan Jumlah Uang : ";
                        cin>>byr;
                        kbl = byr - ttl;
                        cout<<"Kembalian : "<<kbl<<endl;
                        break;
                    case 'B':
                        cout<<"Anda Memilih Nasi Uduk"<<endl;
                        cout<<"Masukan Jumlah : ";
                        cin>>jml;
                        ttl = nasiuduk * jml;
                        cout<<"Total Harga : "<<ttl<<endl;
                        cout<<"Masukan Jumlah Uang : ";
                        cin>>byr;
                        kbl = byr - ttl;
                        cout<<"Kembalian : "<<kbl<<endl;
                        break;
                    default:
                        cout<<"Pilihan Tidak Ada"<<endl;
                }
                break;
            case 2:
                cout<<"Anda Memilih Minuman"<<endl;
                switch(mad)
                {
                    case 'A':
                        cout<<"Anda Memilih Teh"<<endl;
                        cout<<"Masukan Jumlah : ";
                        cin>>jml;
                        ttl = teh * jml;
                        cout<<"Total Harga : "<<ttl<<endl;
                        cout<<"Masukan Jumlah Uang : ";
                        cin>>byr;
                        kbl = byr - ttl;
                        cout<<"Kembalian : "<<kbl<<endl;
                        break;
                    case 'B':
                        cout<<"Anda Memilih Kopi"<<endl;
                        cout<<"Masukan Jumlah : ";
                        cin>>jml;
                        ttl = kopi * jml;
                        cout<<"Total Harga : "<<ttl<<endl;
                        cout<<"Masukan Jumlah Uang : ";
                        cin>>byr;
                        kbl = byr - ttl;
                        cout<<"Kembalian : "<<kbl<<endl;
                        break;
                    default:
                        cout<<"Pilihan Tidak Ada"<<endl;
                }
                break;
            default:
                cout<<"Pilihan Tidak Ada"<<endl;
                break;
        }
    }
    while(kode != 0 || mad != '0');
    return 0;
}