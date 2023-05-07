// Membuat program untuk melakukan pencarian interpolasi

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

void pencarian_interpolasi(int data[], int n, int cari)
{
    int i, j, k, l, m, posisi;
    int atas, bawah, tengah;
    int ketemu = 0;
    int awal, akhir;
    int tanda = 0;
    int temp;

    // Proses pengurutan data
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    // Proses pencarian data
    awal = 0;
    akhir = n - 1;
    while (awal <= akhir && ketemu == 0)
    {
        posisi = ((cari - data[awal]) / (data[akhir] - data[awal])) * (akhir - awal) + awal;
        printf("\n Posisi : ((%d - %d) / (%d - %d)) * (%d - %d)) + %d = %d\n", cari, data[awal], data[akhir], data[awal], akhir, awal, awal, posisi);
        printf("===========================================================\n");
        if (cari == data[posisi])
        {
            ketemu = 1;
        }
        else if (cari < data[posisi])
        {
            akhir = posisi - 1;
        }
        else
        {
            awal = posisi + 1;
        }
    }

    // Proses menampilkan hasil
    if (ketemu == 1)
    {
        printf("Data %d ditemukan pada indeks ke-%d", cari, posisi);
    }
    else
    {
        printf("Data %d tidak ditemukan", cari);
    }
}

int main()
{
    int data[100];
    int n, i, cari;

    printf("Pencarian Interpolasi\nDicoding oleh Indra Dwi Aryadi (211011450468)\n");

    printf("Masukkan banyak data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("Masukkan data yang dicari: ");
    scanf("%d", &cari);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    pencarian_interpolasi(data, n, cari);
    printf("\n");

    return 0;
}
