#include<iostream>
using namespace std;
int main()
{
int A, B, C;
cout<<"Masukkan nilai sisi A: ";cin>>A;
cout<<"Masukkan nilai sisi B: ";cin>>B;
cout<<"Masukkan nilai sisi C: ";cin>>C;
if(A == B)
{
if(A == C)
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sama sisi";
}
else
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sama kaki";
}
}
else if(B == C)
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sama kaki";
}
else if(A == C)
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sama kaki";
}
else
{
	cout<<"===================================="<<endl;
cout<<"Segitiga sembarang";
}
}
