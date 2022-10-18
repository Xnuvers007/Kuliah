#include <stdio.h>
#define SIZE 12
main()
{
    int a [ SIZE ]= {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int indeks, total = 0;
    for (indeks=0 ; indeks<=SIZE-1 ; indeks++)
    {
        total += a [indeks];
    }
    
    printf ("\nTotal Setiap Elemen Array adalah %d" , total);
    return 0;
}
