/*
Indra Dwi A.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Masukan Nilai N : ";
    cin>>n;
    if (n>50)
    {
        n = n+25;
        cout<<"Nilai Anda : "<<n;
    }
    else
    {
        n = n+10;
        cout<<"Nilai Anda : "<<n;
    }
    return 0;
}
