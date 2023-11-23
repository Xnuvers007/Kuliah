#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

char* reverseSentence(const char sentence[]);

int main() {
    const int MaxLength = 100;
    char inputSentence[MaxLength];

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "======== Membalik Kalimat =======\n\n";
    cout << "Masukan Sembarang Kalimat: ";
    cin.getline(inputSentence, MaxLength);

    char* reversedSentence = reverseSentence(inputSentence);

    cout << "Kalimat Terbalik: " << reversedSentence << endl;

    delete[] reversedSentence;

    return 0;
}

char* reverseSentence(const char sentence[]) {
    stack<char> charStack;

    for (int i = 0; i < strlen(sentence); i++) {
        charStack.push(sentence[i]);
    }

    char* reversedSentence = new char[strlen(sentence) + 1];
    for (int i = 0; i < strlen(sentence); i++) {
        reversedSentence[i] = charStack.top();
        charStack.pop();
    }
    reversedSentence[strlen(sentence)] = '\0';

    return reversedSentence;
}
