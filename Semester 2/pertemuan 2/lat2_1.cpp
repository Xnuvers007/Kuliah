#include <stdio.h>
main()
{
 int panjang, lebar, luas, keliling;
  
 printf ("Masukkan panjang :");
 scanf ("%d", &panjang);
  
 printf ("Masukkan lebar :");
 scanf ("%d", &lebar);
 
 luas=panjang*lebar; 
 keliling=2*(panjang+lebar);
  
 printf ("Jadi luasnya adalah : %d\n",luas);
 printf ("Jadi kelilingnya adalah : %d\n",keliling);
}
