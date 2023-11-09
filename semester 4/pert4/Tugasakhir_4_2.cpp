#include <iostream>
#pragma GCC optimize("O3")

using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int *ptr = &arr[0][0];

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Array nya " << endl;


    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Alamat Memori: " << endl;

    // Cetak alamat memori elemen-elemen matriks
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << &arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
