#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string removeNonAlpha(string str) {
    string result;
    for (char c : str) {
        if (isalpha(c)) {
            result += tolower(c);
        }
    }
    return result;
}

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    string cleanedSentence = removeNonAlpha(sentence);

    if (isPalindrome(cleanedSentence)) {
        cout << "Kalimat tersebut adalah palindrome." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrome." << endl;
    }

    return 0;
}
