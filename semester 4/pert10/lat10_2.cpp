#include <iostream>
#include <stdlib.h>
#include <conio.h>

#define true 1
#define false 0

using namespace std;

typedef struct node *simpul;
struct node
{
    char Isi;
    simpul kanan;
    simpul kiri;
};

// Prototype Function
void Sisip_Depan(simpul &DL, char elemen);
void Sisip_Belakang(simpul &DL, char elemen);
void Sisip_Tengah1(simpul &DL, char elemen1, char elemen2);
void Sisip_Tengah2(simpul &DL, char elemen1, char elemen2);
void Hapus_Depan(simpul &DL);
void Hapus_Belakang(simpul &DL);
void Hapus_Tengah(simpul &DL, char elemen);
void Cetak(simpul DL);

int main()
{
    char huruf, huruf2;
    simpul DL = NULL;
    int i;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "\t\t==OPERASI PADA DOUBLY LINKED LIST==\n\n";

    // Sisip_Depan
    cout << "Penyisipan Simpul Di Depan" << endl
         << endl;
    for (i = 1; i <= 4; i++)
    {
        cout << "Masukan Huruf : ";
        cin >> huruf;
        Sisip_Depan(DL, huruf);
    }
    Cetak(DL);

    // Sisip_Belakang
    cout << "\n\nPenyisipan Simpul Di Belakang" << endl
         << endl;
    for (i = 1; i <= 4; i++)
    {
        cout << "Masukan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(DL, huruf);
    }
    Cetak(DL);

    // Sisip_Tengah1
    cout << endl
         << endl
         << "Masukan Huruf : ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf : ";
    cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    Sisip_Tengah1(DL, huruf, huruf2);
    Cetak(DL);

    // Sisip_Tengah2
    cout << endl
         << endl
         << "Masukan Huruf : ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf : ";
    cin >> huruf2;
    cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    Sisip_Tengah2(DL, huruf, huruf2);
    Cetak(DL);

    // Hapus_Depan
    cout << endl
         << endl
         << "Setelah Hapus Simpul Depan" << endl;
    Hapus_Depan(DL);
    Cetak(DL);

    // Hapus_Belakang
    cout << endl
         << endl
         << "Setelah Hapus Simpul Belakang" << endl;
    Hapus_Belakang(DL);
    Cetak(DL);

    // Hapus_Tengah
    cout << "\n\nMasukkan Huruf Tengah Yang akan dihapus : ";
    cin >> huruf;
    Hapus_Tengah(DL, huruf);
    Cetak(DL);

    getch();

    return 0;
}

void Sisip_Depan(simpul &DL, char elemen)
{
    simpul baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
        DL = baru;
    else
    {
        baru->kanan = DL;
        DL->kiri = baru;
        DL = baru;
    }
}

// Function to insert a node at the end of the doubly linked list
void Sisip_Belakang(simpul &DL, char elemen)
{
    simpul baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
        DL = baru;
    else
    {
        simpul bantu = DL;
        while (bantu->kanan != NULL)
            bantu = bantu->kanan;
        bantu->kanan = baru;
        baru->kiri = bantu;
    }
}

// Function to insert a node after a specified node in the doubly linked list
void Sisip_Tengah1(simpul &DL, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
        cout << "List Kosong ............." << endl;
    else
    {
        bantu = DL;
        while (bantu->Isi != elemen2)
            bantu = bantu->kanan;
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        bantu->kanan->kiri = baru;
        bantu->kanan = baru;
    }
}

// Function to insert a node before a specified node in the doubly linked list
void Sisip_Tengah2(simpul &DL, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
        cout << "List Kosong.............." << endl;
    else
    {
        bantu = DL;
        while (bantu->kanan->Isi != elemen2)
            bantu = bantu->kanan;
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        bantu->kanan->kiri = baru;
        bantu->kanan = baru;
    }
}

// Function to display the doubly linked list
void Cetak(simpul DL)
{
    simpul bantu;
    if (DL == NULL)
        cout << "Doubly Linked List Kosong ........" << endl;
    else
    {
        bantu = DL;
        cout << "Isi Doubly Linked List : ";
        while (bantu->kanan != NULL)
        {
            cout << bantu->Isi << "<= =>";
            bantu = bantu->kanan;
        }
        cout << bantu->Isi << endl;
    }
}

// Function to delete a node from the beginning of the doubly linked list
void Hapus_Depan(simpul &DL)
{
    simpul Hapus;
    if (DL == NULL)
        cout << "Doubly Linked List Kosong.............";
    else
    {
        Hapus = DL;
        DL = DL->kanan;
        DL->kiri = NULL;
        Hapus->kanan = NULL;
        free(Hapus);
    }
}

// Function to delete a node from the end of the doubly linked list
void Hapus_Belakang(simpul &DL)
{
    simpul bantu, hapus;
    if (DL == NULL)
        cout << "Doubly Linked List Kosong.............";
    else
    {
        bantu = DL;
        while (bantu->kanan->kanan != NULL)
            bantu = bantu->kanan;
        hapus = bantu->kanan;
        bantu->kanan = NULL;
        hapus->kiri = NULL;
        free(hapus);
    }
}

// Function to delete a specified node from the doubly linked list
void Hapus_Tengah(simpul &DL, char elemen)
{
    simpul bantu, hapus;
    if (DL == NULL)
        cout << "Doubly Linked List Kosong.............";
    else
    {
        bantu = DL;
        while (bantu->kanan->Isi != elemen)
            bantu = bantu->kanan;
        hapus = bantu->kanan;
        bantu->kanan->kanan->kiri = bantu;
        bantu->kanan = bantu->kanan->kanan;
        hapus->kanan = NULL;
        hapus->kiri = NULL;
        free(hapus);
    }
}
