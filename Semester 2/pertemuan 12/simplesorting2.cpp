#include <iostream>
using namespace std;

int main()
{
    int sorting[5];
    int temp;
    for(int i=0;i<5;i++)
    {
        cout<<"Masukkan data ke-"<<i+1<<" : ";
        cin>>sorting[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(sorting[i]<sorting[j])
            {
                temp=sorting[i];
                sorting[i]=sorting[j];
                sorting[j]=temp;
            }
        }
    }
    cout<<"Data urut : ";
    for(int i=0;i<5;i++)
    {
        cout<<sorting[i]<<" ";
    }
    return 0;
}