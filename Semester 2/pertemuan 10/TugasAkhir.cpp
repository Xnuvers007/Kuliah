//1. Buatlah program untuk menghitung banyaknya karakter yang dimasukkan dengan menggunakan pointer!
#include <iostream>
using namespace std;
int main ()
{
    char *p;
    char x[100];
    p = x;
    int i = 0;
    cout << "Masukan karakter : ";
    cin >> x;
    while (*p != '\0')
    {
        i++;
        p++;
    }
    cout << "Banyaknya karakter : " << i << endl;
    cout << "Alamat : " << &p << endl;
    cout << "Alamat Untuk Banyaknya Karakter : " << &i << endl;
    return 0;
}