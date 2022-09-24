#include <stdio.h>
main()
{
 int nilai, tugas;
 printf ("Masukkan sebuah nilai :");
 scanf ("%d",&nilai);
  
 printf ("Masukkan nilai tugas :");
 scanf ("%d",&tugas);
  
 if (nilai>70 && tugas>=75)
   printf ("Lulus\n");
 else
   printf ("Tidak Lulus\n");
}
