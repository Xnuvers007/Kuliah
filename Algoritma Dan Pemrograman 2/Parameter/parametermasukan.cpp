// Parameter Masukan

#include <iostream>
using namespace std;
// void Luas(int a, int b);
void Luas(int, int);
main()
{
    int panjang=10, lebar=5;
    Luas(panjang, lebar);
}
void Luas(int p, int l)
{
    int luas;
    luas=p*l;
    cout<<"Luas = "<<luas;
}
