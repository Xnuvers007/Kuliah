// membuat sorting sederhana dengan menggunakan algoritma searching

#include <iostream>
using namespace std;

int main()
{
    int angka[10];
    int cari, x, n;

    cout << "Masukkan jumlah data : ";
    cin >> n;
    cout << endl;
    for (x = 0; x < n; x++)
    {
        cout << "Masukkan data ke-" << x + 1 << " : ";
        cin >> angka[x];
    }
    cout << endl;
    for (x = 0; x < n; x++)
    {
        cout << "Data ke-" << x + 1 << " : " << angka[x] << endl;
    }
   
    // sorting lalu cari
    int Swap;
    cout<<"Apakah Ingin diurutkan? (y/n) : ";
    char pilihan;
    cin >> pilihan;
    if (pilihan == 'y' || pilihan == 'Y'){
        for (int i=0; i<n; i++)
        {
        for (int ii=0; ii<n; ii++)
        if ( angka[ii] > angka [ii +1] )
        {
            Swap = angka [ii];
            angka [ ii ] = angka[ ii +1 ];
            angka [ ii + 1] = Swap;
        }
        }
        cout<<"Data setelah diurutkan : \n";
        for (int iii=0; iii<n; iii++)
        {
            cout<< "Indeks ke " << iii << " : " << angka [iii] << endl;
        }
        cout<<endl <<endl;
        // searching 
        cout << "Masukkan angka yang akan dicari : ";
        cin >> cari;
        for(x=0; x<n; x++){
            if(angka[x] == cari){
                cout << " Angka ditemukan pada indeks ke-" << x << endl;
                break;
            }
        }
        if(x == n){
            cout << " Angka tidak ditemukan" << endl;
        }
    } else {
        cout << "Data tidak diurutkan" << endl;
        // searching
        cout << "Masukkan angka yang akan dicari : ";
        cin >> cari;
        for(x=0; x<n; x++){
            if(angka[x] == cari){
                cout << " Angka ditemukan pada indeks ke-" << x << endl;
                break;
            }
        }
        if(x == n){
            cout << " Angka tidak ditemukan" << endl;
        }
    }
    return 0;
}