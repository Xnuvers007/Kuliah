#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void reverseSentence(string &sentence);

int main() {
    string inputSentence;

    cout << "Masukkan kalimat: ";
    getline(cin, inputSentence);

    reverseSentence(inputSentence);

    cout << "Kalimat Terbalik: " << inputSentence << endl;

    return 0;
}

void reverseSentence(string &sentence) {
    reverse(sentence.begin(), sentence.end());
}
