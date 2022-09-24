// Masukkan nilai
// Jika nilai >=81 dan nilai <=100 maka huruf=A
// Jika nilai >=71 dan nilai <81 maka huruf=B
// Jika nilai >=61 dan nilai <71 maka huruf=C
// Jika nilai >=51 dan nilai <61 maka huruf=D
// Jika nilai <51 maka huruf=E
// Tampilkan nilai angka dan huruf

#include <iostream>
using namespace std;
int main()
{
    int nilai;
    cout<<"Code By Indra Dwi Aryadi (xxxxxxxxxxx)";
    while (true){
    
    cout<<"\n\nMasukan nilai = ";
    cin>>nilai;
    
    if(nilai >= 81 && nilai <= 100)
    {
        cout<<"Nilai A";
    }
    else if (nilai >= 71 && nilai < 81)
    {
        cout<<"Nilai B";
    }
    else if(nilai >= 61 && nilai < 71)
    {
        cout<<"Nilai C";
    }
    else if (nilai >= 51 && nilai < 61)
    {
        cout<<"Nilai D";
    }
    else if (nilai < 51)
    {
        cout<<"Nilai E";
    }
    }
    return 0;
}
