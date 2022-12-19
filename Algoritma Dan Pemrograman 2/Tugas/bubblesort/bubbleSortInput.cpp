// Bubble sort with array from user input

#include <iostream>
using namespace std;

int main()
{
    int i, k, tmp, n;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    int array1[n];

    cout << "Masukkan data: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"Masukan data ke-"<<i+1<<": ";
        cin >> array1[i];
    }

    cout << "\nPengurutan Data Menggunakan Bubble Sort dengan Input User\n";
    cout << "Data sebelum diurutkan : ";

    for (int i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }

    for (i = 1; i < n; i++)
    {
        for (k = n; k >= i; k--)
        {
            if (array1[k] < array1[k - 1])
            {
                tmp = array1[k];
                array1[k] = array1[k - 1];
                array1[k - 1] = tmp;
            }
        }
    }

    cout << "\n\n Data Setelah diurutkan : ";
    for (int i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }

    return 0;
}