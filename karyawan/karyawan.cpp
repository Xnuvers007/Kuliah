/*
Nama : Indra D.A
01 TPLP 004

instagram : @indradwi.25
*/


#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    char nama[100], gol, tanya;
    int gaji, lembur, jam, glembur;
    glembur=3000;

    awal:

    cout<<"===================================="<<endl;
    cout << "| Masukan Nama Karyawan : ";
    cin.getline(nama,sizeof(nama));
    cout << "| Masukan Golongan [A/B/C/D] : ";
    cin >> gol;
    cout << "| Jumlah Jam Kerja : ";
    cin >> jam;
    cout<<"===================================="<<endl;
    switch(gol)
    {
        case 'A':
        case 'a':
            gaji = 4000;
            break;
        case 'B':
        case 'b':
            gaji = 5000;
            break;
        case 'C':
        case 'c':
            gaji = 6000;
            break;
        case 'D':
        case 'd':
            gaji = 7000;
            break;
        default:
            cout << "Pilihan tidak ada!!";
    }
    if(jam > 48){
        lembur = jam - 48;
        cout<<"Jumlah Lemburan : "<<lembur<<" Jam"<<endl;
        cout << "Karyawan dengan nama " << nama << " mendapatkan upah sebesar " << (48*gaji)+(lembur*glembur);
        cout<<endl;
        cout<<"ingin mengulang Kembali ? [Y/n] : ";
        cin>>tanya;
        if (tanya == 'Y' || tanya == 'y'){
            goto awal;
        }
        else if (tanya == 'n'|| tanya == 'N'){
            goto akhir;
        }
        else{
            cout<<"Inputan Salah"<<endl;
        }
    }
    else{
        cout << "Karyawan dengan nama " << nama << " mendapatkan upah sebesar " << gaji*jam;
        cout<<endl;
        cout<<"ingin mengulang Kembali ? [Y/n] : ";
        cin>>tanya;
        if (tanya == 'Y' || tanya == 'y'){
            system("cls||clear");
            goto awal;
        }
        else if (tanya == 'n'|| tanya == 'N'){
            // system("cls"||"clear");
            goto akhir;
        }
        else{
            cout<<"Inputan Salah"<<endl;
        }

    }
    akhir:
return 0;
}
