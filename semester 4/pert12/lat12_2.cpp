#include <iostream>
#include <stack>
#include <cstring>
#include <vector>
#include <stdlib.h>

using namespace std;

// Pertemuan XI
struct Stack
{
    vector<char> Isi;
    unsigned int Top;
};

void INITS(Stack &S);
void PUSH(Stack &S, char Data);
void CETAK(Stack S);
void POP(Stack &S, char &Hsl);

// Pertemuan XII
typedef struct node *simpul;
struct node
{
    char Isi;
    simpul next;
};

// Prototype Functions Pertemuan XII
void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Belakang(simpul &L);
void Cetak(simpul L);

char *reverseSentence(const char sentence[]);

int main()
{
    int choice;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    do
    {

        cout << "\n\nMenu Program:\n";
        cout << "1. Pertemuan XI Program 1\n";
        cout << "2. Pertemuan XI Program 2\n";
        cout << "3. Pertemuan XII Program\n";
        cout << "4. Keluar\n";
        cout << "Pilih program (1/2/3/4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // Pertemuan XI Program 1
            char huruf;
            Stack S;
            INITS(S);

            cout << "Masukan Karakter :";
            cin >> huruf;
            PUSH(S, huruf);

            cout << "Masukan Karakter :";
            cin >> huruf;
            PUSH(S, huruf);

            cout << "Masukan Karakter :";
            cin >> huruf;
            PUSH(S, huruf);

            CETAK(S);

            char poppedChar;
            POP(S, poppedChar);
            cout << "\nYang Dihapus ........." << poppedChar;

            CETAK(S);

            cout << "\nMasukan Karakter :";
            cin >> huruf;
            PUSH(S, huruf);

            cout << "Masukan karakter :";
            cin >> huruf;
            PUSH(S, huruf);

            cout << "Masukan karakter :";
            cin >> huruf;
            PUSH(S, huruf);

            CETAK(S);

            POP(S, poppedChar);
            cout << "\nYang Dihapus .........." << poppedChar;

            CETAK(S);

            break;
        }
        case 2:
        {
            // Pertemuan XI Program 2
            const int MaxLength = 100;
            char inputSentence[MaxLength];

            cout << "======== Membalik Kalimat =======\n\n";
            cout << "Masukan Sembarang Kalimat: ";
            cin.ignore(); // Ignore the newline character from the previous input
            cin.getline(inputSentence, MaxLength);

            char *reversedSentence = reverseSentence(inputSentence);

            cout << "Kalimat Terbalik: " << reversedSentence << endl;

            delete[] reversedSentence;

            break;
        }
        case 3:
        {
            // Pertemuan XII Program
            char huruf;
            simpul L = NULL; // Make sure L is empty

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

            break;
        }
        case 4:
            cout << "Program Selesai\n";
            break;
        default:
            cout << "Pilihan tidak valid\n";
        }
    } while (choice != 4);

    cout << "\nProgram Selesai\n";

    return 0;
}

// Pertemuan XI Functions
void INITS(Stack &S)
{
    S.Top = 0;
}

void PUSH(Stack &S, char Data)
{
    S.Top++;
    S.Isi.push_back(Data);
}

void CETAK(Stack S)
{
    cout << endl
         << "Isi Stack : ";
    if (!S.Isi.empty())
    {
        for (const auto &item : S.Isi)
        {
            cout << item;
        }
    }
    else
    {
        cout << "Stack Kosong …..";
    }
}

void POP(Stack &S, char &Hsl)
{
    if (!S.Isi.empty())
    {
        Hsl = S.Isi.back();
        S.Isi.pop_back();
        S.Top--;
    }
    else
    {
        cout << "Stack Kosong…..";
    }
}

// Pertemuan XII Functions
void Sisip_Belakang(simpul &L, char elemen)
{
    simpul bantu, baru;
    baru = new node;
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
        delete hapus;
    }
}

void Cetak(simpul L)
{
    simpul bantu;

    if (L == NULL)
        cout << "Linked List Kosong………..";
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

// Pertemuan XI Program 2 Function
char *reverseSentence(const char sentence[])
{
    stack<char> charStack;

    for (int i = 0; i < strlen(sentence); i++)
    {
        charStack.push(sentence[i]);
    }

    char *reversedSentence = new char[strlen(sentence) + 1];
    for (int i = 0; i < strlen(sentence); i++)
    {
        reversedSentence[i] = charStack.top();
        charStack.pop();
    }
    reversedSentence[strlen(sentence)] = '\0';

    return reversedSentence;
}
