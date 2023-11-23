#include <iostream>
#include <string>

using namespace std;

string reverseSentence(const string &sentence);

int main() {
    string inputSentence;

    cout << "Masukkan kalimat: ";
    getline(cin, inputSentence);

    string reversedSentence = reverseSentence(inputSentence);

    cout << "Kalimat Terbalik: " << reversedSentence << endl;

    return 0;
}

string reverseSentence(const string &sentence) {
    string reversed;
    for (int i = sentence.length() - 1; i >= 0; i--) {
        reversed += sentence[i];
    }
    return reversed;
}
