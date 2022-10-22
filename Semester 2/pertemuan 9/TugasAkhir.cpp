#include <stdio.h>
#include <cstring>

int main()
{
    char nama[100], hobi[100], nama2[100], combine[100];
    
    printf("Masukkan nama 1: ");
    scanf("%s", &nama);

    printf("Masukan nama 2 : ");
    scanf("%s", &nama2);

    printf("Masukkan hobi: ");
    scanf("%s", &hobi);

    strcpy(nama, nama);
    strcpy(hobi, hobi);

    strcpy(combine, nama);
    strcat(combine, " ");
    strcat(combine, nama2);

    printf("Nama Anda adalah %s\n", combine);
    printf("Hobi Anda adalah %s\n", hobi);

    return 0;
}