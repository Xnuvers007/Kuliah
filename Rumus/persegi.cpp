/*
Nama : Indra D.A
01 TPLP 004
*/

#include <iostream> /* Ini adalah Library Untuk Input dan Output */ 
#include <math.h> /* ini adalah library untuk rumus matematika */
#include <cstdlib> /* ini adalah library untuk fungsi random, seperti pause, cls, clear, dll. */

using namespace std; // berfungsi untuk menyimpan fungsi yang ada di dalam namespace std
int main() { //int main berfungsi sebagai awal program / function
    double pil, p, l, luas, Keliling, diagonal; // double berfungsi untuk menyimpan bilangan desimal, int berfungsi untuk menyimpan bilangan bulat
    char tanya; // char berfungsi untuk menyimpan karakter

    ulang: // ini adalah goto awal program
    cout<<"======= Menu ======="<<endl; //cout adalah fungsi untuk menampilkan output
    cout<<"1. Hitung Luas"<<endl;
    cout<<"2. Hitung Keliling"<<endl;
    cout<<"3. Hitung Panjang Diagonal"<<endl;
    cout<<"4. Keluar Program"<<endl;
    cout<<"===================="<<endl;
    cout<<"Pilih : ";
    cin>>pil; // cin adalah fungsi untuk memasukkan input
    cout<<endl; // endl berfungsi untuk membuat baris baru

    if (pil == 1){
        cout<<"Masukkan Panjang : ";
        cin>>p;
        cout<<"Masukkan Lebar : ";
        cin>>l;
        luas = p*l;
        cout<<"Luas Persegi Panjang : "<<luas<<endl<<endl;
        cout<<"ingin mengulang Kembali ? [Y/n] : ";
        cin>>tanya;
        if (tanya == 'Y' || tanya == 'y'){
            goto ulang;
        }
        else if (tanya == 'n'|| tanya == 'N'){
            goto tidakUlang;
        }
        else{
            cout<<"Inputan Salah"<<endl;
        }
    }
    else if (pil == 2){
        cout<<"Masukkan Panjang : ";
        cin>>p;
        cout<<"Masukkan Lebar : ";
        cin>>l;
        Keliling = 2*(p+l);
        cout<<"Keliling Persegi Panjang : "<<Keliling<<endl<<endl;
        cout<<"ingin mengulang Kembali ? [Y/n] : ";
        cin>>tanya;
        if (tanya == 'Y' || tanya == 'y'){
            goto ulang;
        }
        else if (tanya == 'n'|| tanya == 'N'){
            goto tidakUlang;
        }
        else{
            cout<<"Inputan Salah"<<endl;
        }

    }
    else if (pil == 3){
        cout<<"Masukkan Panjang : ";
        cin>>p;
        cout<<"Masukkan Lebar : ";
        cin>>l;
        diagonal = sqrt(p*p+l*l); // sqrt adalah fungsi untuk menghitung akar dari suatu bilangan
        cout<<"Diagonal Persegi Panjang : "<<diagonal<<endl<<endl;
        cout<<"ingin mengulang Kembali ? [Y/n] : ";
        cin>>tanya;
        if (tanya == 'Y' || tanya == 'y'){
            goto ulang;
        }
        else if (tanya == 'n'|| tanya == 'N'){
            goto tidakUlang;
        }
        else{
            cout<<"Inputan Salah"<<endl;
        }

    }
    else if (pil == 4){
        cout<<"Terima Kasih"<<endl;
    }
    else {
        cout<<"Pilihan Tidak Ada"<<endl;
        cout<<"harap mengulang kembali..."<<endl;
        system("pause"); // system pause digunakan untuk menghentikan program
        system("cls||clear"); // system cls digunakan untuk membersihkan layar
        goto ulang; // goto digunakan untuk mengulang program
    }
    tidakUlang:
    return 0; //return 0 berfungsi untuk mengakhiri program
}
