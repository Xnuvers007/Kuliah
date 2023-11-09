#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void BubbleSortAscending(string &word) {
    int n = word.length();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (word[j] > word[j + 1]) {
                swap(word[j], word[j + 1]);
            }
        }
    }
}

void BubbleSortDescending(string &word) {
    int n = word.length();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (word[j] < word[j + 1]) {
                swap(word[j], word[j + 1]);
            }
        }
    }
}

int main() {
    string nama, NIM;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan NIM: ";
    getline(cin, NIM);

    transform(nama.begin(), nama.end(), nama.begin(), ::tolower);

    istringstream iss(nama);
    string word;
    vector<string> words;

    while (iss >> word) {
        words.push_back(word);
    }

    string combined = nama + " ";
    for (char &c : NIM) {
        combined += c;
        combined += " ";
    }

    cout << endl;

    for (string &word : words) {
        cout << word << " ";
    }
    cout << "(sebelum)" << endl;

    for (string &word : words) {
        BubbleSortAscending(word);
        cout << word << " ";
    }
    cout << "(ascending)" << endl;

    for (string &word : words) {
        BubbleSortDescending(word);
        cout << word << " ";
    }
    cout << "(descending)" << endl;

    cout << endl;

    for (char &c : NIM) {
        cout << c << " ";
    }
    cout << "(sebelum)" << endl;

    // Urutkan NIM
    BubbleSortAscending(NIM);
    for (char &c : NIM) {
        cout << c << " ";
    }
    cout << "(ascending)" << endl;

    BubbleSortDescending(NIM);
    for (char &c : NIM) {
        cout << c << " ";
    }
    cout << "(descending)" << endl;

    cout << endl;

    // Gabungkan nama dan NIM menjadi satu string tanpa pengurutan
    cout << combined << "(sebelum)" << endl;

    for (string &word : words){
        BubbleSortDescending(word);
        cout << word << " ";
    }
    for (char &c : NIM){
        BubbleSortDescending(NIM);
        cout << c << " ";
    }
    cout << "(descending)" << endl;

    for (string &word : words) {
        BubbleSortAscending(word);
        cout << word << " ";
    }
    for (char &c : NIM){
        BubbleSortAscending(NIM);
        cout << c << " ";
    }

    cout << "(ascending)" << endl;


    return 0;
}
