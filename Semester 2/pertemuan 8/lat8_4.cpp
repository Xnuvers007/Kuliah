#include <stdio.h>
#include <conio.h>

int main()
{
    int matrik1[2][2], matrik2[2][2];
    int i, j;

    printf("Masukkan nilai matrik 1: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Masukkan nilai matrik [%d][%d]: ", i, j);
            scanf("%d", &matrik1[i][j]);
        }
    }

    printf("Matrik 1: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matrik1[i][j]);
        }
        printf("\n");
    }

    getch();
}