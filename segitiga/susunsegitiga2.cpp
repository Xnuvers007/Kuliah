#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
cout << " __"<<endl;
cout << "|                                                                                |"<<endl;
cout << "| Indra Dwi A | 211011xxxxxx                                               |"<<endl;
cout << "|                                                                                |"<<endl; 
cout << "| (Latihan Program Penentu Segitiga)                                             |"<<endl;
cout << "|                                                                                |"<<endl;
cout << "| Cara Pakai :                                                                   |"<<endl;
cout << "| Masukkan 3 bilangan yang mewakilkan sisi-sisi sebuah bangunan lalu tekan enter |"<<endl;
cout << "|__|"<<endl;
cout << "                         "<<endl;
int BIL1, BIL2, BIL3;
cout << "INPUT BILANGAN: ";
cin >> BIL1 >> BIL2 >> BIL3;
cout << endl;
if ((BIL1 + BIL2) > BIL3){
if ((BIL1 + BIL3) > BIL2){
if ((BIL2 + BIL3) > BIL1){
cout << "SEGITIGA";
}
else {
    cout << "BUKAN SEGITIGA";
    }
}
else {
    cout << "BUKAN SEGITIGA";
    }
}
else {cout << "BUKAN SEGITIGA";
}
}
