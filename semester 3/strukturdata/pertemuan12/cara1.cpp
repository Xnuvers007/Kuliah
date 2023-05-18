// Tanpa fitur "lihat"
// #include <iostream>
// using namespace std;

// const int stackSize = 10; // Ukuran stack
// int stack[stackSize]; // Array stack
// int top = -1; // Indeks elemen teratas pada stack

// // Fungsi untuk menambahkan elemen ke dalam stack (push)
// void push(int data) {
//     if (top == stackSize - 1) {
//         cout << "STACK SUDAH PENUH" << endl;
//     } else {
//         top++;
//         stack[top] = data;
//     }
// }

// // Fungsi untuk mengambil elemen dari stack (pop)
// void pop() {
//     if (top == -1) {
//         cout << "STACK SUDAH KOSONG" << endl;
//     } else {
//         cout << "Data yang diambil: " << stack[top] << endl;
//         top--;
//     }
// }

// int main() {
//     int data;
    
//     while (true) {
//         cout << "Masukkan data: ";
//         cin >> data;
        
//         if (data % 1000 == 468) {
//             break;
//         } else if (data >= 100) {
//             push(data);
//         } else {
//             pop();
//         }
//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

const int stackSize = 10; // Ukuran stack
int stack[stackSize]; // Array stack
int top = -1; // Indeks elemen teratas pada stack

// Fungsi untuk menambahkan elemen ke dalam stack (push)
void push(int data) {
    if (top == stackSize - 1) {
        cout << "STACK SUDAH PENUH" << endl;
    } else {
        top++;
        stack[top] = data;
    }
}

// Fungsi untuk mengambil elemen dari stack (pop)
void pop() {
    if (top == -1) {
        cout << "STACK SUDAH KOSONG" << endl;
    } else {
        cout << "Data yang diambil: " << stack[top] << endl;
        top--;
    }
}

// Fungsi untuk menampilkan isi stack
void displayStack() {
    if (top == -1) {
        cout << "STACK KOSONG" << endl;
    } else {
        cout << "Isi Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int data;
    string command;
    
    while (true) {
        cout << "Masukkan data (atau ketik 'lihat' untuk melihat isi stack): ";
        cin >> command;
        
        if (command == "lihat") {
            displayStack();
        } else {
            data = stoi(command);
            
            if (data % 1000 == 468) {
                break;
            } else if (data >= 100) {
                push(data);
            } else {
                pop();
            }
        }
    }
    
    return 0;
}
