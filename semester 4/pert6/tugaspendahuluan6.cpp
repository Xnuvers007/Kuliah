#include <iostream>
using namespace std;

int main()
{
    int data[100], cari, n, i, j, temp;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Masukkan banyak data : ";
    cin >> n;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << " : ";
        cin >> data[i];
    }
    cout << endl;
    cout << "Data sebelum diurutkan : ";
    for (i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    cout << "Data setelah diurutkan : ";
    for (i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl << endl;
    cout << "Masukkan data yang akan dicari : ";
    cin >> cari;
    for (i = 0; i < n; i++)
    {
        if (data[i] == cari)
        {
            cout << "Data ditemukan pada indeks ke-" << i << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Data tidak ditemukan" << endl;
    }
    return 0;
}