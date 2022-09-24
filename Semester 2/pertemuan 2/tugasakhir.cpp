// TUGAS AKHIR
// 1. Buatlah algoritma dan program untuk menghitung volume dan luas permukaan 
// bola apabila masukkannya berupa jari-jari. Jari-jari yang dimasukkan bertipe float 
// dan output atau keluaran yang dihasilkan adalah luas dan volume permukaan bola 
// dengan tipenya adalah float.
// Petunjuk:
// Volume = 4/3 x pi x r3
// Luas = 4 x pi x r2
// Dengan:
// Pi = 3,14
// r = jari-jari bola

// ADA 2 CARA, untuk cara ke 2, hapus saja include <math.h> :

#include <iostream>
#include <math.h>
using namespace std;

void cara1(){
    float r, volume, luas;
    cout << "Masukkan jari-jari bola: ";
    cin >> r;
    volume = (4/3) * 3.14 * pow(r, 3);
    luas = 4 * 3.14 * pow(r, 2);
    cout << "Volume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << luas << endl;
}

void cara2(){
  float r, volume, luas;
  
  cout<<"Masukan Jari jari Bola : ";
  cin>>r;
  
  volume = 4/3 * 3.14 * r * r * r;
  luas = 4 * 3.14 * r * r;
  
  cout<<"Volume Bola : "<<volume<<endl;
  cout<<"Luas Permukaan Bola : "<<luas<<endl;
}

int main()
{
  char tanya;
  
  cout<<"Cara pertama [1/a]"<<endl;
  cout<<"Cara Kedua [2/b]"<<endl;
  
  cout<<"Mau pakai cara yang mana ? : ";
  cin>>tanya;
  
  switch(tanya)
  {
    case '1':
    case 'a':
    case 'A':
        cara1();
      break;
  
    case '2':
    case 'b':
    case 'B':
      cara2();
      break;
      
    default:
      cout<<"pilihan tidak ada";
}
return 0;
}
