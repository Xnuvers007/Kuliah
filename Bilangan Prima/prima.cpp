#include<iostream>
using namespace std;
int main()
{
    int bil,a;
    cout<<"Masukkan bilangan primanya sampai mana : ";
    cin>>a;
    cout<<"Menampilkan Bilangan deret prima 1-"<<a<<endl;
    for(bil=1;bil<=a;bil++)
    {
        int i,j;
        for(i=2;i<bil;i++)
        {
            if(bil%i==0)
            {
                break;
            }
        }
        if(i==bil)
        {
            cout<<bil<<" ";
        }
    }
}
