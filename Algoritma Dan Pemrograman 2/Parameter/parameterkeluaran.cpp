// Parameter Keluaran

#include <iostream>
using namespace std;

void hitung(int *);

main()
{
    int hasil;
    hitung(&hasil);
    cout << "Hasil = " << hasil << endl;
}
void hitung(int *hasil)
{
    int a, b;
    a=10;
    b=2;
    *hasil=a+b;
}
