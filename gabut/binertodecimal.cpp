// Biner to decimal
#include <iostream>
using namespace std;

int main(){
    int biner, decimal, temp, digit;
    cout<<"Masukan angka biner : ";
    cin>>biner;

    temp = biner;
    decimal = 0;
    digit = 1;

    while(temp){
        decimal = decimal + (temp%10)*digit;
        temp = temp/10;
        digit = digit*2;
    }

    cout<<"Decimal dari "<<biner<<" adalah "<<decimal<<endl;
    
}