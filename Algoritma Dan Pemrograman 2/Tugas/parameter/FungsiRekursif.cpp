// menampilkan Genap Ganjil sampai batas dengan menggunakan fungsi rekursif

#include <iostream>
using namespace std;

void genapGanjil(int batas, int i)
{
    if (i <= batas)
    {
        if (i % 2 == 0)
        {
            cout << i << " adalah genap" << endl;
        }
        else
        {
            cout << i << " adalah ganjil" << endl;
        }
        genapGanjil(batas, i + 1);
    }
}

int main()
{
    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;
    genapGanjil(batas, 1);
    return 0;
}