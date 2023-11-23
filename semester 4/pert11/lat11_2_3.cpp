#include <iostream>
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
    int start = 0;
    int end = sentence.length() - 1;

    while (start < end) {
        // Swap characters at the start and end positions
        char temp = sentence[start];
        sentence[start] = sentence[end];
        sentence[end] = temp;

        // Move to the next pair of characters
        start++;
        end--;
    }
}
