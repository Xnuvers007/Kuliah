#include <iostream>

using namespace std;

typedef struct node *simpul;
struct node
{
    char Isi;
    simpul Next;
};

void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Depan(simpul &L);
void Cetak(simpul L);

int main()
{
    char huruf;
    simpul L = NULL;
    int choice;

    do
    {
        cout << "==OPERASI PADA SINGLE LINKED LIST==" << endl << endl;

        cout << "Menu:\n";
        cout << "1. Penyisipan Simpul\n";
        cout << "2. Hapus Simpul Depan\n";
        cout << "3. Cetak Linked List\n";
        cout << "4. Exit\n";
        cout << "Pilih menu (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nPenyisipan Simpul \n\n";
            cout << "Masukkan Huruf: ";
            cin >> huruf;
            Sisip_Belakang(L, huruf);
            break;
        case 2:
            cout << "\nSetelah Hapus Simpul " << endl;
            Hapus_Depan(L);
            break;
        case 3:
            Cetak(L);
            break;
        case 4:
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            break;
        }

    } while (choice != 4);

    cout << "\nProgram Selesai\n";

    return 0;
}

void Sisip_Belakang(simpul &L, char elemen)
{
    simpul bantu, baru;
    baru = new node;
    baru->Isi = elemen;
    baru->Next = NULL;

    if (L == NULL)
        L = baru;
    else
    {
        bantu = L;
        while (bantu->Next != NULL)
            bantu = bantu->Next;
        bantu->Next = baru;
    }
}

void Cetak(simpul L)
{
    simpul bantu;
    if (L == NULL)
        cout << "Linked List Kosong.........." << endl;
    else
    {
        bantu = L;
        cout << "\nIsi Linked List : ";
        while (bantu->Next != NULL)
        {
            cout << bantu->Isi << "->";
            bantu = bantu->Next;
        }
        cout << bantu->Isi << endl;
    }
}

void Hapus_Depan(simpul &L)
{
    simpul Hapus;
    if (L == NULL)
        cout << "Linked List Kosong.........." << endl;
    else
    {
        Hapus = L;
        L = L->Next;
        Hapus->Next = NULL;
        delete Hapus;
        cout << "Simpul Depan dihapus.\n";
    }
}
