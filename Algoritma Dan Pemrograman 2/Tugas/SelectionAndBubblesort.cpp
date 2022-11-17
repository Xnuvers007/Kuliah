#include <iostream>
#include <cstdlib>

using namespace std;

void bubblesort();
void selectionsort();
void inputdata();
void tampildata();

int dataarray[5];

main()
{
    char ulang;
    do{
        system("cls||clear");
        int pil;
        cout<<" Pengurutan"<<endl;
        cout<<"=================="<<endl;
        cout<<"1. Selection sort"<<endl;
        cout<<"2. Bubble Sort"<<endl;
        cout<<"3. Keluar Aplikasi"<<endl;
        cout<<"=================="<<endl;

        cout<<"Masukan Pilihan (1-3) : ";
        cin>>pil;

        switch(pil){
            case 1:
                bubblesort();
                break;
            
            case 2:
                selectionsort();
                break;

            case 3:
                return 0;
                break;

            default:
                cout<<"Silahkan Masukan (1-3)"<<endl;
        }
        cout<<"\n\nUlang (Y/n) : ";
        cin>>ulang;

    }

    while (ulang=='y' || ulang=='Y');
    
}

void inputdata(){
    cout<<"Silahkan masukan data acak : "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Data Ke - "<<i<<" : ";
        cin>>dataarray[i];
    }
    cout<<endl;
}

void tampildata(){
    cout<<"Data yang sudah anda masukan adalah : ";
    for(int i=0; i<5; i++)
    {
        cout<<dataarray[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(){
    system("cls||clear");
    cout<<"Pengurutan Menggunakan Metode Bubble Sort"<<endl;
    inputdata();
    cout<<"Data yang sudah anda masukan"<<endl;
    tampildata();
    // Mengurutkan data dengan metode bubble sort
    int temp;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(dataarray[j]>dataarray[j+1])
            {
                temp=dataarray[j];
                dataarray[j]=dataarray[j+1];
                dataarray[j+1]=temp;
            }
        }
    }
    cout<<"Data Setelah diurutkan"<<endl;
    tampildata();
}

void selectionsort(){
    system("cls");
    cout<<"Pengurutan menggunakan Metode Selection Sort"<<endl;
    inputdata();
    cout<<"Data yang sudah anda masukan"<<endl;
    tampildata();
    // Menggunakan data dengan metode selection sort
    int temp;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(dataarray[i]>dataarray[j])
            {
                temp=dataarray[i];
                dataarray[i]=dataarray[j];
                dataarray[j]=temp;
            }
        }
    }
    cout<<"Data Setelah diurutkan"<<endl;
    tampildata();
}