#include <cstdio>
using namespace std;

int findmax(int n1, int n2)
{
 if(n1 > n2)
 { return n1; }
 else
 { return n2; }
}

void printmax(int m)
{
 printf ( " bilangan yang terbesar adalah :%d\n",m);
}

int main()
{
    int findmax(int n1, int n2);
    void printmax(int m);
 int i =5;
 int j =7;
 int k;
 k =findmax(i,j);
 printmax(k);
}
