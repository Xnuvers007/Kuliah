#include <iostream>
#include <vector>

using namespace std;

struct Stack
{
    vector<char> Isi;
    unsigned int Top;
};

void INITS(Stack &S);
void PUSH(Stack &S, char Data);
void CETAK(Stack S);
void POP(Stack &S, char &Hsl);

int main()
{
    char huruf;
    Stack S;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

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

    POP(S, huruf);
    cout << endl << "Yang Dihapus ........." << huruf;

    CETAK(S);

    cout << endl << "Masukan Karakter :";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan karakter :";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan karakter :";
    cin >> huruf;
    PUSH(S, huruf);

    CETAK(S);

    POP(S, huruf);
    cout << endl << "Yang Dihapus .........." << huruf;

    CETAK(S);

    cin.get();
    return 0;
}

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
    cout << endl << "Isi Stack : ";
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
