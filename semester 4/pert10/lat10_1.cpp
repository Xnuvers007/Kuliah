#include <iostream>

#include <stdlib.h>

using namespace std;

typedef struct node * simpul;
struct node {
  char Isi;
  simpul Next;
};

// Prototype Function
void Sisip_Depan(simpul & L, char elemen);
void Sisip_Belakang(simpul & L, char elemen);
void Sisip_Tengah1(simpul & L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul & L, char elemen1, char elemen2);
void Hapus_Depan(simpul & L);
void Hapus_Belakang(simpul & L);
void Hapus_Tengah(simpul & L, char elemen);
void Cetak(simpul L);

int main() {
  char huruf, huruf2;
  simpul L = NULL;

  cout << endl;

  cout << "|=============================|" << endl;
  cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
  cout << "| NIM   :   211011450468      |" << endl;
  cout << "|=============================|" << endl;

  cout << endl;

  cout << "==OPERASI PADA SINGLE LINKED LIST==" << endl <<
    endl;

  // Sisip_Depan
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