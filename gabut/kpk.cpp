#include <iostream>
using namespace std;

int main(){
    int hasil;
    int input1, input2;

    cout<<"Masukan Angka pertama : ";
    cin>>input1;

    cout<<"Masukan Angka kedua : ";
    cin>>input2;

    hasil = input1;
    while(hasil%input2!=0){
        hasil = hasil + input1;
    }

    cout<<"Kpk dari "<<input1<<" dan "<<input2<<" adalah "<<hasil<<endl;

    return 0;
}