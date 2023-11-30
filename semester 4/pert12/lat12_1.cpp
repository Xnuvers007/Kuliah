#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node *simpul;
struct node
{
    char Isi;
    simpul next;
};

// Prototype Function
void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Belakang(simpul &L);
void Cetak(simpul L);

int main()
{
    char huruf;
    simpul L = NULL; // Make sure L is empty
    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    // Sisip Belakang
    cout << "Operasi Single Linked List Pada Stack\n";
    cout << "\nPenyiapan Stack\n";
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    Cetak(L);

    // Hapus Simpul Belakang
    cout << "\n\nHapus Elemen\n";
    Hapus_Belakang(L);
    Cetak(L);
    cout << "\n\nHapus Elemen\n";
    Hapus_Belakang(L);
    Cetak(L);
    cout << "\n\nHapus Elemen\n";
    Hapus_Belakang(L);
    Cetak(L);
    cout << "\n\nHapus Elemen\n";
    Hapus_Belakang(L);
    Cetak(L);

    return 0;
}

void Sisip_Belakang(simpul &L, char elemen)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen;
    baru->next = NULL;

    if (L == NULL)
        L = baru;
    else
    {
        bantu = L;
        while (bantu->next != NULL)
            bantu = bantu->next;
        bantu->next = baru;
    }
}

void Hapus_Belakang(simpul &L)
{
    simpul bantu, hapus;

    if (L == NULL)
        cout << "Linked List Kosong...........";
    else
    {
        bantu = L;
        while (bantu->next->next != NULL)
            bantu = bantu->next;
        hapus = bantu->next;
        bantu->next = NULL;
        free(hapus);
    }
}

void Cetak(simpul L)
{
    simpul bantu;

    if (L == NULL)
        cout << "Linked List Kosong……….." << endl;
    else
    {
        bantu = L;
        cout << endl
             << "Isi Linked List : ";
        while (bantu->next != NULL)
        {
            cout << bantu->Isi << "->";
            bantu = bantu->next;
        }
        cout << bantu->Isi;
    }
}
