#include <iostream>
using namespace std;

int main()
{
    int i[6]={25,27,10,8,76,21};
    int j, tmp, imax;
    // selection sort nilai maximum
    // menampilkan data i
    cout<<"Data sebelum diurutkan : ";
    for(j=0;j<6;j++)
    {
        cout<<i[j]<<" ";
    }

    cout<<endl;
    // proses selection sort
    cout<<"Data setelah diurutkan dari kiri : ";
    for (j=0; j<6; j++)
    {
        imax = j;
        for (int k=j+1; k<6; k++)
        {
            if (i[k] > i[imax])
            {
                imax = k;
            }
        }
        tmp = i[j];
        i[j] = i[imax];
        i[imax] = tmp;
        cout<<i[j]<<" ";
    }
    cout<<endl;
    cout<<"Data setelah diurutkan dari kanan : ";
    // menggunakan j--
    for (j=5; j>=0; j--)
    {
        cout<<i[j]<<" ";
    }

    return 0;
}