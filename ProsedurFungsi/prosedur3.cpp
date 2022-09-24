#include <iostream>
using namespace std;
//lokal = dalam fungsi
//global = diluar fungsi
//static = sifat hanya bisa diakses oleh yg di deklarasikan, tidak hilang saat eksekusi/berakhir, inisialisasi hanya dilakukan sekali selama program berjalan.

int rizky2 = 2; //global

void pros1(){
    static int var1=1; // static
    int rizky = 1; //lokal
    cout<<var1<<endl;
    var1++;
}

main()
{
    int rizky3 = 3; //lokal
    pros1(); //1
    pros1(); //2
    pros1(); //3
}
