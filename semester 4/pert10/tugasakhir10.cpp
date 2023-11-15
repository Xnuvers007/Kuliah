#include <iostream>
#include <stdlib.h>
#include <conio.h>

#define true 1
#define false 0

using namespace std;

// Single Linked List
typedef struct node * simpul;
struct node {
  char Isi;
  simpul Next;
};

// Doubly Linked List
typedef struct nodeD * simpulD;
struct nodeD {
  char Isi;
  simpulD kanan;
  simpulD kiri;
};

// Prototype Function for Single Linked List
void Sisip_Depan(simpul & L, char elemen);
void Sisip_Belakang(simpul & L, char elemen);
void Sisip_Tengah1(simpul & L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul & L, char elemen1, char elemen2);
void Hapus_Depan(simpul & L);
void Hapus_Belakang(simpul & L);
void Hapus_Tengah(simpul & L, char elemen);
void Cetak(simpul L);

// Prototype Function for Doubly Linked List
void Sisip_Depan(simpulD & DL, char elemen);
void Sisip_Belakang(simpulD & DL, char elemen);
void Sisip_Tengah1(simpulD & DL, char elemen1, char elemen2);
void Sisip_Tengah2(simpulD & DL, char elemen1, char elemen2);
void Hapus_Depan(simpulD & DL);
void Hapus_Belakang(simpulD & DL);
void Hapus_Tengah(simpulD & DL, char elemen);
void Cetak(simpulD DL);

int main() {
  int choice;
  char huruf, huruf2;
  int i;
  simpul L = NULL;
  simpulD DL = NULL;

  do {
    system("cls");
    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "MENU PROGRAM" << endl;
    cout << "1. Single Linked List" << endl;
    cout << "2. Doubly Linked List" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan Anda : ";
    cin >> choice;

    switch (choice) {
    case 1:
      system("cls");
      cout << "OPERASI PADA SINGLE LINKED LIST" << endl <<
        endl;
      cout << "Penyisipan Simpul Di Depan" << endl <<
        endl;
      cout << "Masukan Huruf : ";
      cin >> huruf;
      Sisip_Depan(L, huruf);
      cout << "Masukan Huruf : ";
      cin >> huruf;
      Sisip_Depan(L, huruf);
      cout << "Masukan Huruf : ";
      cin >> huruf;
      Sisip_Depan(L, huruf);
      cout << "Masukan Huruf : ";
      cin >> huruf;
      Sisip_Depan(L, huruf);
      Cetak(L);

      // Sisip_Belakang
      cout << "\n\nPenyisipan Simpul Di Belakang" << endl <<
        endl;
      cout << "Masukan Huruf : ";
      cin >> huruf;
      Sisip_Belakang(L, huruf);
      cout << "Masukan Huruf : ";
      cin >> huruf;
      Sisip_Belakang(L, huruf);
      cout << "Masukan Huruf : ";
      cin >> huruf;
      Sisip_Belakang(L, huruf);
      cout << "Masukan Huruf : ";
      cin >> huruf;
      Sisip_Belakang(L, huruf);
      Cetak(L);

      // Sisip_Tengah1
      cout << endl <<
        endl <<
        "Masukan Huruf : ";
      cin >> huruf;
      cout << "Disisip Setelah Huruf : ";
      cin >> huruf2;
      cout << huruf << " Disisip Setelah " << huruf2 << endl;
      Sisip_Tengah1(L, huruf, huruf2);
      Cetak(L);

      // Sisip_Tengah2
      cout << endl <<
        endl <<
        "Masukan Huruf : ";
      cin >> huruf;
      cout << "Disisip Sebelum Huruf : ";
      cin >> huruf2;
      cout << huruf << " Disisip Sebelum " << huruf2 << endl;
      Sisip_Tengah2(L, huruf, huruf2);
      Cetak(L);

      // Hapus_Depan
      cout << endl <<
        endl <<
        "Setelah Hapus Simpul Depan" << endl;
      Hapus_Depan(L);
      Cetak(L);

      // Hapus_Belakang
      cout << endl <<
        endl <<
        "Setelah Hapus Simpul Belakang" << endl;
      Hapus_Belakang(L);
      Cetak(L);

      // Hapus_Tengah
      cout << "\n\nMasukkan Huruf Tengah Yang akan dihapus : ";
      cin >> huruf;
      Hapus_Tengah(L, huruf);
      Cetak(L);
      getch();
      break;

    case 2:
      system("cls");
      cout << "OPERASI PADA DOUBLY LINKED LIST" << endl <<
        endl;
      // Sisip_Depan
      cout << "Penyisipan Simpul Di Depan" << endl <<
        endl;
      for (i = 1; i <= 4; i++) {
        cout << "Masukan Huruf : ";
        cin >> huruf;
        Sisip_Depan(DL, huruf);
      }
      Cetak(DL);

      // Sisip_Belakang
      cout << "\n\nPenyisipan Simpul Di Belakang" << endl <<
        endl;
      for (i = 1; i <= 4; i++) {
        cout << "Masukan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(DL, huruf);
      }
      Cetak(DL);

      // Sisip_Tengah1
      cout << endl <<
        endl <<
        "Masukan Huruf : ";
      cin >> huruf;
      cout << "Disisip Setelah Huruf : ";
      cin >> huruf2;
      cout << huruf << " Disisip Setelah " << huruf2 << endl;
      Sisip_Tengah1(DL, huruf, huruf2);
      Cetak(DL);

      // Sisip_Tengah2
      cout << endl <<
        endl <<
        "Masukan Huruf : ";
      cin >> huruf;
      cout << "Disisip Sebelum Huruf : ";
      cin >> huruf2;
      cout << huruf << " Disisip Sebelum " << huruf2 << endl;
      Sisip_Tengah2(DL, huruf, huruf2);
      Cetak(DL);

      // Hapus_Depan
      cout << endl <<
        endl <<
        "Setelah Hapus Simpul Depan" << endl;
      Hapus_Depan(DL);
      Cetak(DL);

      // Hapus_Belakang
      cout << endl <<
        endl <<
        "Setelah Hapus Simpul Belakang" << endl;
      Hapus_Belakang(DL);
      Cetak(DL);

      // Hapus_Tengah
      cout << "\n\nMasukkan Huruf Tengah Yang akan dihapus : ";
      cin >> huruf;
      Hapus_Tengah(DL, huruf);
      Cetak(DL);
      getch();
      break;

    case 3:
      cout << "Terima kasih telah menggunakan program ini." << endl;
      break;

    default:
      cout << "Pilihan tidak valid. Silakan masukkan pilihan yang benar." << endl;
      getch();
    }

  } while (choice != 3);

  return 0;
}

void Sisip_Depan(simpul & L, char elemen) {
  simpul baru = (simpul) malloc(sizeof(simpul));
  baru -> Isi = elemen;
  baru -> Next = NULL;
  if (L == NULL)
    L = baru;
  else {
    baru -> Next = L;
    L = baru;
  }
}

// Function to insert a node at the end of the linked list
void Sisip_Belakang(simpul & L, char elemen) {
  simpul baru = (simpul) malloc(sizeof(simpul));
  baru -> Isi = elemen;
  baru -> Next = NULL;
  if (L == NULL)
    L = baru;
  else {
    simpul bantu = L;
    while (bantu -> Next != NULL)
      bantu = bantu -> Next;
    bantu -> Next = baru;
  }
}

// Function to insert a node after a specified node
void Sisip_Tengah1(simpul & L, char elemen1, char elemen2) {
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru -> Isi = elemen1;
  baru -> Next = NULL;
  if (L == NULL)
    cout << "List Kosong ............." << endl;
  else {
    bantu = L;
    while (bantu -> Isi != elemen2)
      bantu = bantu -> Next;
    baru -> Next = bantu -> Next;
    bantu -> Next = baru;
  }
}

// Function to insert a node before a specified node
void Sisip_Tengah2(simpul & L, char elemen1, char elemen2) {
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru -> Isi = elemen1;
  baru -> Next = NULL;
  if (L == NULL)
    cout << "List Kosong.............." << endl;
  else {
    bantu = L;
    while (bantu -> Next -> Isi != elemen2)
      bantu = bantu -> Next;
    baru -> Next = bantu -> Next;
    bantu -> Next = baru;
  }
}

// Function to display the linked list
void Cetak(simpul L) {
  simpul bantu;
  if (L == NULL)
    cout << "Linked List Kosong ........" << endl;
  else {
    bantu = L;
    cout << "Isi Linked List : ";
    while (bantu -> Next != NULL) {
      cout << bantu -> Isi << "-->";
      bantu = bantu -> Next;
    }
    cout << bantu -> Isi << endl;
  }
}

// Function to delete a node from the beginning of the linked list
void Hapus_Depan(simpul & L) {
  simpul Hapus;
  if (L == NULL)
    cout << "Linked List Kosong.............";
  else {
    Hapus = L;
    L = L -> Next;
    Hapus -> Next = NULL;
    free(Hapus);
  }
}

// Function to delete a node from the end of the linked list
void Hapus_Belakang(simpul & L) {
  simpul bantu, hapus;
  if (L == NULL)
    cout << "Linked List Kosong.............";
  else {
    bantu = L;
    while (bantu -> Next -> Next != NULL)
      bantu = bantu -> Next;
    hapus = bantu -> Next;
    bantu -> Next = NULL;
    free(hapus);
  }
}

// Function to delete a specified node from the linked list
void Hapus_Tengah(simpul & L, char elemen) {
  simpul bantu, hapus;
  if (L == NULL)
    cout << "Linked List Kosong.............";
  else {
    bantu = L;
    while (bantu -> Next -> Isi != elemen)
      bantu = bantu -> Next;
    hapus = bantu -> Next;
    bantu -> Next = bantu -> Next -> Next;
    hapus -> Next = NULL;
    free(hapus);
  }
}

// Implementation of Doubly Linked List functions...

// Function to insert a node at the beginning of the doubly linked list
void Sisip_Depan(simpulD & DL, char elemen) {
  simpulD baru = (simpulD) malloc(sizeof(simpulD));
  baru -> Isi = elemen;
  baru -> kanan = NULL;
  baru -> kiri = NULL;
  if (DL == NULL)
    DL = baru;
  else {
    baru -> kanan = DL;
    DL -> kiri = baru;
    DL = baru;
  }
}

// Function to insert a node at the end of the doubly linked list
void Sisip_Belakang(simpulD & DL, char elemen) {
  simpulD baru = (simpulD) malloc(sizeof(simpulD));
  baru -> Isi = elemen;
  baru -> kanan = NULL;
  baru -> kiri = NULL;
  if (DL == NULL)
    DL = baru;
  else {
    simpulD bantu = DL;
    while (bantu -> kanan != NULL)
      bantu = bantu -> kanan;
    bantu -> kanan = baru;
    baru -> kiri = bantu;
  }
}

// Function to insert a node after a specified node in the doubly linked list
void Sisip_Tengah1(simpulD & DL, char elemen1, char elemen2) {
  simpulD bantu, baru;
  baru = (simpulD) malloc(sizeof(simpulD));
  baru -> Isi = elemen1;
  baru -> kanan = NULL;
  baru -> kiri = NULL;
  if (DL == NULL)
    cout << "List Kosong ............." << endl;
  else {
    bantu = DL;
    while (bantu -> Isi != elemen2)
      bantu = bantu -> kanan;
    baru -> kanan = bantu -> kanan;
    baru -> kiri = bantu;
    bantu -> kanan -> kiri = baru;
    bantu -> kanan = baru;
  }
}

// Function to insert a node before a specified node in the doubly linked list
void Sisip_Tengah2(simpulD & DL, char elemen1, char elemen2) {
  simpulD bantu, baru;
  baru = (simpulD) malloc(sizeof(simpulD));
  baru -> Isi = elemen1;
  baru -> kanan = NULL;
  baru -> kiri = NULL;
  if (DL == NULL)
    cout << "List Kosong.............." << endl;
  else {
    bantu = DL;
    while (bantu -> kanan -> Isi != elemen2)
      bantu = bantu -> kanan;
    baru -> kanan = bantu -> kanan;
    baru -> kiri = bantu;
    bantu -> kanan -> kiri = baru;
    bantu -> kanan = baru;
  }
}

// Function to display the doubly linked list
void Cetak(simpulD DL) {
  simpulD bantu;
  if (DL == NULL)
    cout << "Doubly Linked List Kosong ........" << endl;
  else {
    bantu = DL;
    cout << "Isi Doubly Linked List : ";
    while (bantu -> kanan != NULL) {
      cout << bantu -> Isi << "<= =>";
      bantu = bantu -> kanan;
    }
    cout << bantu -> Isi << endl;
  }
}

// Function to delete a node from the beginning of the doubly linked list
void Hapus_Depan(simpulD & DL) {
  simpulD Hapus;
  if (DL == NULL)
    cout << "Doubly Linked List Kosong.............";
  else {
    Hapus = DL;
    DL = DL -> kanan;
    DL -> kiri = NULL;
    Hapus -> kanan = NULL;
    free(Hapus);
  }
}

// Function to delete a node from the end of the doubly linked list
void Hapus_Belakang(simpulD & DL) {
  simpulD bantu, hapus;
  if (DL == NULL)
    cout << "Doubly Linked List Kosong.............";
  else {
    bantu = DL;
    while (bantu -> kanan -> kanan != NULL)
      bantu = bantu -> kanan;
    hapus = bantu -> kanan;
    bantu -> kanan = NULL;
    hapus -> kiri = NULL;
    free(hapus);
  }
}

// Function to delete a specified node from the doubly linked list
void Hapus_Tengah(simpulD & DL, char elemen) {
  simpulD bantu, hapus;
  if (DL == NULL)
    cout << "Doubly Linked List Kosong.............";
  else {
    bantu = DL;
    while (bantu -> kanan -> Isi != elemen)
      bantu = bantu -> kanan;
    hapus = bantu -> kanan;
    bantu -> kanan -> kanan -> kiri = bantu;
    bantu -> kanan = bantu -> kanan -> kanan;
    hapus -> kanan = NULL;
    hapus -> kiri = NULL;
    free(hapus);
  }
}