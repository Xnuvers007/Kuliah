#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

void reverseSentence(char sentence[]);

int main() {
    const int MaxLength = 100;
    char inputSentence[MaxLength];

    cout << "Masukkan kalimat: ";
    cin.getline(inputSentence, MaxLength);

    reverseSentence(inputSentence);

    cout << "Kalimat Terbalik: " << inputSentence << endl;

    return 0;
}

void reverseSentence(char sentence[]) {
    stack<char> charStack;

    // Push each character onto the stack
    for (int i = 0; i < strlen(sentence); i++) {
        charStack.push(sentence[i]);
    }

    // Pop characters and build the reversed sentence
    for (int i = 0; i < strlen(sentence); i++) {
        sentence[i] = charStack.top();
        charStack.pop();
    }
}
