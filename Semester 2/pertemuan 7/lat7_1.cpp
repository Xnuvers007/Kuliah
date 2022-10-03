include<stdio.h>
int factorial(int n)
{
 if (n==1)
 { return(1); }
 else
 { return (n*factorial(n-1)); }
}
main()
{
 int x;
 printf("mencari nilai faktorial\n");
 printf("masukkan nilai x:");scanf("%d",&x);
 printf("nilai factorial dari %d=%d\n",x,factorial(x));
}
