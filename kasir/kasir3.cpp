#include <iostream>
using namespace std;
main (){
  string namaa="Yusron Rizki Ardiansyah";
  string nim="F1B016103";
  int diskon,i,j, x, total;
  int bayar[10], hrga[10],jbrg[10], totali=0;
  char nama[30][x];
  
  cout<<namaa<<endl;
  cout<<nim<<endl;
  cout<<"==============================="<<endl;
  cout<<"======== Program Kasir ========"<<endl;
  cout<<"==============================="<<endl;
  cout<<endl;
  cout<< "Masukkan Jumlah Data = ";
  cin>>x;
  cout << endl;

 for(i=0;i<x;i++){
  cout<<"==============================="<<endl;
  cout<<endl;
  cout<< "Masukkan Nama Barang = ";
  cin>>nama[i];
  cout<< "Masukkan Harga Barang = Rp.";
  cin>>hrga[i];
  cout<< "Masukkan Jumlah Barang = ";
  cin>>jbrg[i];
  cout<<endl;
 }

system("cls");
for(i=0;i<x;i++){
 cout<<"Nama Barang = "<<nama[i]<<endl;
 cout<<"Harga Barang = Rp. "<<hrga[i]<<endl;
 cout<<"Jumlah Barang = "<<jbrg[i]<<endl;
 bayar[i]=hrga[i]*jbrg[i];
 cout<<"jumlah Belanja = "<<bayar[i]<<endl;
 cout<<endl;
 }

for(i=0; i<x; i++){
 totali=totali+bayar[i];
 cout<<"Sub total = "<<totali<<endl;
 } 
if (totali>30000){
 diskon=0.1*totali;
 cout<<"Diskon 10% = Rp. "<<diskon<<endl;
 total=totali-diskon;
 cout<<"Total  = Rp. "<<total<<endl;
 }
}
