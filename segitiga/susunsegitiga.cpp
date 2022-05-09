/*

Susun algoritma dan program atau penggalan progran untuk menginput 3
buah bilangan yang masing-masing menyatakan panjang sebuah garis.
Kemudian periksa ketiga buah garis tersebut apakah dapat membentuk
sebuah segitiga atau tidak. Bila ketiga buah garis tersebut dapat
membentuk sebuah segitiga, maka cetak perkataan “SEGI TIGA”,
sebaliknya bila ketiga garis tersebut tidak mungkin membentuk sebuah
segitiga, makacetak perkataan: “BUKAN SEGITIGA”

*/

#include<iostream>
using namespace std;
int main()
{
int A, B, C;
cout<<"Masukkan nilai sisi A: ";cin>>A;
cout<<"Masukkan nilai sisi B: ";cin>>B;
cout<<"Masukkan nilai sisi C: ";cin>>C;
if(A == B)
{
if(A == C)
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sama sisi";
}
else
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sama kaki";
}
}
else if(B == C)
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sama kaki";
}
else if(A == C)
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sama kaki";
}
else
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sembarang";
}
}
