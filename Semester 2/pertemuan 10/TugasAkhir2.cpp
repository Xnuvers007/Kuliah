// 1. Buatlah program untuk menghitung banyaknya karakter yang dimasukkan dengan menggunakan pointer!
#include <iostream>

using namespace std;

int main()
{
    char *p;
    char x[100];
    p = x;
    int i = 0, j;
    cout << "Masukan karakter : ";
    cin.getline(x, 100);

    for (j = 0; j < 100; j++)
    {
        if (x[j] == '\0')
        {
            break;
        }
        i++;
    }
    cout << "Banyaknya karakter : " << i << endl;
    cout << "Alamat : " << &p << endl;
    cout << "Alamat Untuk Banyaknya Karakter : " << &i << endl;

    return 0;
}