#include <iostream>
using namespace std;

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