#include<iostream>

using namespace std;

int binary_search(int [ ], int, int);

int main( )
{
    const int array_size=10;
    int angkaarray[array_size]={0, 6, 9, 12, 20, 23, 29, 32, 47, 79};

    cout<<"Isi dari array adalah : "<<endl;
    cout<<"\nArray:"<<"\t\t Data:"<<endl;
    for (int count=0; count<array_size; count++)
    {
        cout<<"array["<<count<<"]"<<"\t\t";
        cout<<angkaarray[count]<<endl;
    }

    int mencari_element=0;
    int flag=0;

    cout<<"\n\n masukan data yang anda cari = ";
    cin>>mencari_element;
    flag = binary_search(angkaarray, array_size, mencari_element);

    if(flag != -1)
    {
        cout<<"\ndata tersebut ditemukan pada posisi: array[ "<<flag<<"]";
    }
    else
    {
        cout<<"\n data tersebut tidak ditemukan ";
    }
    return 0;
}

int binary_search(int dataarray[], int array_size, int element)
{
    int first=0;
    int last=array_size-1;
    int middle;
    int flag=-1;

    while(first<=last)
    {
        middle=(first+last)/2;
        if(dataarray[middle]==element)
        {
            flag=middle;
            break;
        }
        else if(dataarray[middle]>element)
        {
            last=middle-1;
        }
        else
        {
            first=middle+1;
        }
    }
    return flag;
}