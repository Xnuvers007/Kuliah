// Membuat 4 segitiga dan lancip menuju ke tengah

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int baris2, spasi, a, b;
        cout << "Masukkan jumlah baris: ";
        cin >> baris2;

        // hadap kebawah

        for (a = baris2; a >= 1; a--)
    {
        for (spasi = a; spasi < baris2; spasi++)
            cout << " ";
        for (b = 1; b <= a; b++)
            cout << "* ";
        cout << "\n";
    }

    // hadap kanan kiri

        for(a=0; a<baris2; a++)
    {
        for(b=0; b< (2*baris2); b++)
        {
            if(a >= b)
                cout << "*";
            else
                cout << " ";
            if(a >= (2*baris2-1)-b)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
        for(a=0; a<baris2; a++)
    {
        for(b=0; b< (2*baris2); b++)
        {
            if(a + b <= baris2 -1)
                cout << "*";
            else
                cout << " ";
            if ((a+baris2) <= b)
                cout << "*";
            else
                cout << " ";
        }
        cout<<endl;
    }

    // hadap keatas
    
    for (a = 1; a <= baris2; a++)
    {
        for (spasi = a; spasi < baris2; spasi++)
            cout << " ";
        for (b = 1; b <= a; b++)
            cout << "* ";
            cout << "\n";
    }

    return 0;
}