// membuat program sulit untuk pointer
#include <iostream>
using namespace std;

int main()
{
    // membuat kodingan pointer memasukan nama dan memunculkan memorinya dengan for satu per satu
    int *p;
    int x[5];
    p = x;
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukan nilai ke " << i + 1 << " : ";
        cin >> x[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai ke " << i + 1 << " : " << *p << " dengan alamat " << p << " Dan " << &p << endl;
        p++;
    }
    return 0;
    
}