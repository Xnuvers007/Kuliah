// Masukkan nilai x
// Jika x>0, maka x adalah bilangan positif
// Jika x<0, maka x adalah bilangan negative
// Jika x=0, maka x adalah bilangan 0
// Language: cpp

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Code By Indra Dwi Aryadi (xxxxxxxxxxxxxx)";
    while (true){
    cout<<"\n\nMasukan nilai = ";
    cin>>x;
    if(x>0)
    {
        cout<<"Nilai Positif";
    }
    else if (x<0)
    {
        cout<<"Nilai Negative";
    }
    else if(x==0)
    {
        cout<<"Nilai 0";
    }
    }
    return 0;
}
