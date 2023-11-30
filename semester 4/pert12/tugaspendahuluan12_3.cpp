#include <iostream>
#include <stack>

using namespace std;

const int MaxSize = 5;

bool isFull(stack<int> &s) {
    return s.size() == MaxSize;
}

int main() {
    stack<int> myStack;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    // Menambahkan elemen ke dalam stack
    for (int i = 1; i <= MaxSize + 1; ++i) {
        if (isFull(myStack)) {
            cout << "Stack is Full. Cannot push more elements.\n";
        } else {
            myStack.push(i);
            cout << "Pushed: " << i << endl;
        }
    }

    return 0;
}
