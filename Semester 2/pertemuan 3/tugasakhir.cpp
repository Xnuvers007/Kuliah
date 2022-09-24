#include <stdio.h>
#include <string.h>
#include <conio.h>

int main ()
{
    long int kode;
    char hari[10];
    printf("Kode By Indra Dwi Aryadi xxxxxxxxxx\n");
    while(true){
    printf("Masukan kode hari [1-7] : ");
    scanf("%ld", &kode);

    if (kode==1)
        {
            strcpy (hari, "Senin");
        }
    else if (kode==2)
        {
            strcpy (hari, "Selasa");
        }
    else if (kode==3)
        {
            strcpy (hari, "Rabu");
        }
    else if (kode==4)
        {
            strcpy (hari, "Kamis");
        }
    else if (kode==5)
        {
            strcpy (hari, "Jumat");
        }
    else if (kode==6)
        {
            strcpy (hari, "Sabtu");
        }
    else if (kode==7)
        {
            strcpy (hari, "Minggu");
        }
    printf("\nkode yang dimasukan adalah %ld\n", kode);
    printf("Yaitu hari : %s\n\n", hari);
    }
    getch();
}
