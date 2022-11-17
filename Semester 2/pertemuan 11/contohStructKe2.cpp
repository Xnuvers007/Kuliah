#include <iostream>
#include <string>
using namespace std;
 
struct mahasiswa{
    string nama;
    string jurusan;
    float ipk;
};
 
int main(){
 
    mahasiswa mhs;
 
    mhs.nama="Indra Dwi Aryadi";
    mhs.jurusan="Teknik Informatika";
    mhs.ipk=3.95;
    
    cout<<"DATA MAHASISWA"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Nama    : "<<mhs.nama<<endl;
    cout<<"Jurusan : "<<mhs.jurusan<<endl;
    cout<<"IPK     : "<<mhs.ipk<<endl;
      
    return 0;
}