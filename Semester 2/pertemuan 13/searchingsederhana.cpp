//Buatlah contoh algoritma dan program sederhana menggunakan Searching dengan memakai Flowchart

#include <iostream>
#pragma GCC optimize ("O3")
using namespace std;

int main(){
    int angka[5]={15,5,7,25,100};
    int cari;
    int i;
    int n = sizeof(angka)/sizeof(angka[0]);
    for (i=0; i<n; i++){
        cout << "pada indeks ke - "<< i+1 << " adalah " <<angka[i]<<endl;
    }
    cout << " Masukkan angka yang akan dicari : ";
    cin >> cari;
    for(i=0; i<n; i++){
        if(angka[i] == cari){
            cout << " Angka ditemukan pada indeks ke-" << i << endl;
            break;
        }
    }
    if(i == n){
        cout << " Angka tidak ditemukan" << endl;
    }
    return 0;
}