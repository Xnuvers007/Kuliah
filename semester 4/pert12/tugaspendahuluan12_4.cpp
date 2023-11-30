#include <iostream>
#include <stack>

using namespace std;

bool isEmpty(stack<int> &s) {
    return s.empty();
}

int main() {

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    stack<int> myStack;

    // Cek apakah stack kosong
    if (isEmpty(myStack)) {
        cout << "Stack is Empty.\n";
    } else {
        cout << "Stack is not Empty.\n";
    }

    // Menambahkan elemen ke dalam stack
    myStack.push(42);

    // Cek lagi setelah menambahkan elemen
    if (isEmpty(myStack)) {
        cout << "Stack is Empty.\n";
    } else {
        cout << "Stack is not Empty.\n";
    }

    // Menampilkan elemen-elemen stack
    cout << "Stack Elements: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
