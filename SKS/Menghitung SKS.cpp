#include<iostream>
//#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
// #include<windows.h>
using namespace std;

int main(){
 int jmk, i, z;
 char npm[15], sem;
 int bsks[170], bnilai[170], total[170], mutu[170];
 char matkul[170], *cbsks[170];
 // system ("cls");
 cout<<"=== Hitung IPK Teknik Informatika ===\n\n";
 cout<<"Masukkan NIM: "; cin>>npm;
 cout<<"Anda Sekarang Semester: "; cin>>sem;
 cout<<"Masukkan Jumlah Mata Kuliah: "; cin>>jmk;
 cout<<"===================================\n\n";
 cout<<"Masukkan Nilai Anda [A,B,C,D,E]\n";
 for(i=1; i<=jmk; i++){
  kondisi:
  cout<<"Mata kuliah ke "<<i<<" : "; cin>>matkul[i];
  if(matkul[i]=='a' || matkul[i]=='A'){
   bnilai[i]=4;
   }
  else if(matkul[i]=='b' || matkul[i]=='B'){
   bnilai[i]=3;
   }
  else if(matkul[i]=='c' || matkul[i]=='C'){
   bnilai[i]=2;
   }
  else if(matkul[i]=='d' || matkul[i]=='D'){
   bnilai[i]=1;
   }
  else if(matkul[i]=='e' || matkul[i]=='E'){
   bnilai[i]=0;
   }
  else{
   cout<<"Masukkan HANYA A,B,C,D,E!!\n";
   goto kondisi;
   }
  kond:
  cout<<"Bobot SKS [1,2,3,4]: "; cin>>bsks[i];
  if(bsks[i]>=1 && bsks[i]<=4){
   bsks[i]=bsks[i];
   }
  else{
   cout<<"Masukkan HANYA Angka 1-4!!\n";
   goto kond;
   }
  mutu[i]=bnilai[i]*bsks[i];
  }
 cout<<"\n\nHASIL\n";
 float tmutu=0, tbobot=0;
 for(z=1; z<=jmk; z++){
  tmutu+=mutu[z];
  tbobot+=bsks[z];
  }
 float ipk;
 ipk=tmutu/tbobot;
 cout<<"========================\n";
 cout<<"\nNPM: "<<npm;
 cout<<"\nSemester: "<<sem;
 cout<<"\nJumlah Mata Kuliah: "<<jmk;
 cout<<"\nTotal Mutu: "<<tmutu;
 cout<<"\nTotal SKS: "<<tbobot;
 cout<<"\nTotal IPK: "<<ipk;
 cout<<"\n\n========================";
 // getc;
 return 0;
 }