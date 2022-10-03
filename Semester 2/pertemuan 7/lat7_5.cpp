#include<iostream.h>
int mult(int x, int y, int z);
int main()
{
 int x, y, z;
 cout << "masukan bilangan pertama :";
 cin>>x;
 cout << "masukan bilangan kedua :";
 cin>>y;
 cout << "masukan bilangan ketiga :";
 cin>>z;
 cout<< "hasil perkalian bilangan itu adalah " << mult(x, y, z);
 return 0;
}
int mult(int x, int y, int z)
{
 return x*y*z;
}
