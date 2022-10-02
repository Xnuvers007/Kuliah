#include<stdio.h>
#include<cctype>
main()
{
 int nomer, bagi, sisa=0;
 char chrpilihan;
 do
 {
 printf("masukan suatu bilangan :"); scanf("%d", &nomer);
 printf("masukan bilangan pembagi (2/3/4/5): ");scanf("%d", &bagi);
 printf("bilangan yang di pilih : %d\n", nomer);
 printf("bilangan pembagi : %d\n", bagi);
 sisa = nomer % bagi;
 if (sisa == 0)
 {
 printf("sisa bagi : tidak ada\n");
 }
 else
 {
 printf("sisa bagi: %d\n", sisa);
 }
 printf( "\napakah anda ingin meneruskan ? (y/n) :"); 
 scanf (" %c", &chrpilihan);
 }
while(toupper(chrpilihan == 'y')||toupper(chrpilihan == 'Y'));
}
