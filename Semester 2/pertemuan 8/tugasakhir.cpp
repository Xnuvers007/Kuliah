// 1. Buatlah program menampilkan bilangan matriks 3x3 menggunakan Array!

#include <stdio.h>
#include <conio.h>

int main()
{
    int matrik1[3][3], matrik2[3][3];
    int i, j;

    printf("Masukkan nilai matrik 1: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Masukkan nilai matrik [%d][%d]: ", i, j);
            scanf("%d", &matrik1[i][j]);
        }
    }

    printf("Matrik 1: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrik1[i][j]);
        }
        printf("\n");
    }

    getch();
}