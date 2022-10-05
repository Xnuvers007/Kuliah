// Parameter Masukan dan Keluaran
#include <iostream>
using namespace std;

void hitung (int, int, int *);
// void hitung (int a, int b, int *hasil)
// {
//     *hasil = a + b;
// }

main()
{
    int a, b, hasil;
    a = 12;
    b = 3;
    hitung (a, b, &hasil);
    cout << "Hasil = " << hasil << endl;
}

void hitung (int a, int b, int *hasil)
{
    *hasil = a + b;
}
