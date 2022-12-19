// susun algoritma dan buat program untuk mencetak bilangan segitiga pascal dengan memanfaatkan atau menggunakan array satu dimensi

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i,j,n;
    int p[100];
    cout<<"Masukan Jumlah Baris : ";
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        p[0]=1;
        p[i]=1;
        for(j=1;j<i;j++)
        {
            p[j]=p[j-1]*(i-j+1)/j;
        }
        for(j=0;j<=i;j++)
        {
            cout<<p[j]<<" ";
        }
        cout<<endl;
    }
}