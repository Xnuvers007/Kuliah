// Mencari nilai terendah terbesar dan rata rata
#include <iostream>
using namespace std;

void input(int data[], int b){
    int j;
    for (j=0; j<b; j++){
        cout << "Masukkan data ke-" << j+1 << " : ";
        cin >> data[j];
    }
}

int main(){
    int x = 0;
    int i;
    int rata = 0, terbesar = 0, terendah = 0;

    cout << "Masukkan banyak data : ";
    cin >> x;
    int data[x];
        input(data, x);
    rata = 0;
    int *ptr;
    ptr = data;
    cout<<"\n Hasil Inputan : ";
    terbesar = terendah = *ptr;
    for (i=0; i<x; i++){
        cout<< *(ptr+i) << ",";
    rata = rata + *(ptr+i);
    if (terbesar < *(ptr+i)){
        terbesar = *(ptr+i);
    }
    if (terendah > *(ptr+i)){
        terendah = *(ptr+i);
    }
    }

    cout<<"\n bila di jumlahkan maka hasilnya adalah : "<<rata;
    cout<<"\n Nilai terbesar adalah : "<<terbesar;
    cout<<"\n Nilai terendah adalah : "<<terendah;
    cout<<"\n Nilai rata-rata adalah : "<<rata/x;
    return 0;
}