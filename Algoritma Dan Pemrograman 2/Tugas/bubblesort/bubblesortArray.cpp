#include <iostream>
using namespace std;

int main()
{
    int i, k, tmp, n=9;
    int array1[]={12,4,33,65,32,14,44,90,23,10};

    cout<<"Pengurutan Data Menggunakan Bubble Sort\n";
    cout<<"Data sebelum diurutkan\n";

    for(int i=0; i<=n; i++)
    {
        cout<<array1[i]<<" ";
    }

    for(i=1; i<=n; i++)
    {
        for(k=n; k>=i; k--)
        {
            if(array1[k]<array1[k-1])
            {
                tmp = array1[k];
                array1[k] = array1[k-1];
                array1[k-1] = tmp;
            }
        }
    }

    cout<<"\n\n Data Setelah diurutkan\n";
    for(int i=0; i<=n; i++)
    {
        cout<<array1[i]<<" ";
    }

    return 0;
}