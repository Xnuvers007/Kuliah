#include<iostream>
#include<conio.h>

using namespace std;

int main (){
    int x=8, y;
    int *xPtr;
    
    xPtr = &x;
    y = *xPtr;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout<<"Nilai x                                      = "<< x <<endl ;
    cout<<"Alamat x                                     = "<<&x<<endl ;
    cout<<"Alamat xPtr                                  = "<<xPtr<<endl ;
    cout<<"Nilai yang disimpan pada alamat " << xPtr << " = " << y;

    getch();

}