/*

C. Soal Latihan
Susunlah program untuk menginput empat buah bilangan bulat kemudian
mencetak salah satu bilangan yang nilainya terbesar, serta buat flowchatnya!

Nama = Indra Dwi A
01 TPLP 004
Universitas Pamulang

*/
#include <iostream>
using namespace std;

int main()
{
    int pertama, kedua, ketiga, keempat;

    cout<<"Input bilangan pertama : ";
    cin>>pertama;

    cout<<"input bilangan kedua : ";
    cin>>kedua;

    cout<<"input bilangan ketiga : ";
    cin>>ketiga;

    cout<<"Input Bilangan keempat : ";
    cin>>keempat;
    if (pertama > kedua)
    {
        if(pertama > ketiga)
        {
            if(pertama > keempat)
            {
                cout<<pertama<<endl;
            }
            else
            {
                cout<<keempat<<endl;
            }
            // cout <<pertama;
        }
        // else
        //     cout<<keempat;
    }
    if (kedua > pertama)
    {
        if(kedua > ketiga)
        {
            if(kedua > keempat)
            {
                cout<<kedua<<endl;
            }
            else
            {
                cout<<keempat<<endl;
            }
            // cout <<kedua;
        }
        // else
        //     cout<<keempat;
    }
    if (ketiga > pertama)
    {
        if(ketiga > kedua)
        {
            if(ketiga > keempat)
            {
                cout<<ketiga<<endl;
            }
            else
            {
                cout<<keempat<<endl;
            }
            // cout <<ketiga;
        }
        // else
        //     cout<<keempat;
    }
    if(keempat > pertama)
    {
        if(keempat > kedua)
        {
            if(keempat > ketiga)
            {
                cout<<keempat<<endl;
            }
            else
            {
                cout<<ketiga<<endl;
            }
            // cout <<keempat;
        }
        // else
        //     cout<<ketiga;
    }
    return 0;
}
