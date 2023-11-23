#include <iostream>
#include <stack>
#include <string>

using namespace std;

void reverseSentence(const string &sentence);

int main() {
    string inputSentence;

    cout << "Masukkan kalimat: ";
    getline(cin, inputSentence);

    reverseSentence(inputSentence);

    return 0;
}

void reverseSentence(const string &sentence) {
    stack<char> charStack;

    // Push each character onto the stack
    for (char ch : sentence) {
        charStack.push(ch);
    }

    // Pop and print characters to reverse the sentence
    cout << "Kalimat Terbalik: ";
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }

    cout << endl;
}
