#include <iostream>
using namespace std;

// PERBEDAAN CIN DAN CIN.GETLINE YAITU ADA PADA PENGGUNAAN SPASI
// cin.getline digunakan kalo user ingin pake spasi

int main()
{
    char wafi[100];
    cout<<"Masukan Wafi Menggunakan cin.getline : ";
    cin.getline(wafi, 100);
    cout<<wafi;

    cout<<"\n";
    cout<<"Masukan Wafi menggunakan cin: ";
    cin>>wafi;
    cout<<wafi;

}
