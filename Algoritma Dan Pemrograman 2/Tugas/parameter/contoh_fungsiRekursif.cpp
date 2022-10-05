// buat program fungsi rekursif

#include <iostream>
using namespace std;
void rekursif(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        rekursif(n - 1);
    }
}
int main()
{
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    rekursif(n);
    return 0;
}