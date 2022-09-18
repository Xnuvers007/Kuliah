#include <iostream>
using namespace std;

int main(){
    int a = 1;

    int *pointer1 = &a;

    cout<<"a = "<<&a<<endl;
    cout<<"pointer 1 pake * = "<<*pointer1<<endl;
    cout<<"pointer 1 pake dan = "<<&pointer1<<endl;
    cout<<"pointer 1 doank = "<<pointer1<<endl;

    *pointer1 = 2;
    cout<<"a yg diubah tanpa apa apa = "<<a<<endl;
    cout<<"pointer 1 yg 2 menggunakan dan = "<<&pointer1<<endl;
    cout<<"pointer 1 yg 2 menggunakan * = "<<*pointer1<<endl;
}
