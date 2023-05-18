// Tanpa lihat
// #include <iostream>
// using namespace std;

// const int STACK_SIZE = 10; // Ukuran stack
// int stack[STACK_SIZE]; // Array stack
// int top = -1; // Indeks top stack, diinisialisasi dengan -1

// // Fungsi untuk mengecek apakah stack kosong
// bool isEmpty() {
//     return (top == -1);
// }

// // Fungsi untuk mengecek apakah stack penuh
// bool isFull() {
//     return (top == STACK_SIZE - 1);
// }

// // Fungsi untuk melakukan push data ke dalam stack
// void push(int data) {
//     if (isFull()) {
//         cout << "STACK SUDAH PENUH" << endl;
//         return;
//     }
    
//     stack[++top] = data; // Menambahkan data ke dalam stack
// }

// // Fungsi untuk melakukan pop data dari stack
// int pop() {
//     if (isEmpty()) {
//         cout << "STACK SUDAH KOSONG" << endl;
//         return -1;
//     }
    
//     return stack[top--]; // Mengambil data dari stack dan mengurangi top
// }

// int main() {
//     int data;
    
//     while (true) {
//         cout << "Masukkan data (3 digit NIM terakhir): ";
//         cin >> data;
        
//         if (data % 1000 == 468) {
//             break;
//         }
        
//         if (data >= 100) {
//             push(data);
//         } else {
//             int poppedData = pop();
//             if (poppedData != -1) {
//                 cout << "Data yang diambil dari stack: " << poppedData << endl;
//             }
//         }
//     }
    
//     return 0;
// }

#include <iostream> // Library ini digunakan untuk fungsi input/output standar
using namespace std; // Digunakan agar tidak perlu menuliskan std::cout, std::cin, dll.

const int STACK_SIZE = 10; // Ukuran stack
int stack[STACK_SIZE]; // Array stack
int top = -1; // Indeks top stack, diinisialisasi dengan -1

// Fungsi untuk mengecek apakah stack kosong
bool isEmpty() {
    return (top == -1); // Mengembalikan true jika top == -1 (stack kosong), false jika tidak
}

// Fungsi untuk mengecek apakah stack penuh
bool isFull() {
    return (top == STACK_SIZE - 1); // Mengembalikan true jika top == STACK_SIZE - 1 (stack penuh), false jika tidak
}

// Fungsi untuk melakukan push data ke dalam stack
void push(int data) {
    if (isFull()) {
        cout << "STACK SUDAH PENUH" << endl; // Menampilkan pesan jika stack sudah penuh
        return; // Keluar dari fungsi jika stack sudah penuh
    }

    stack[++top] = data; // Menambahkan data ke dalam stack dan memperbarui nilai top
    cout << "Data yang ditambahkan ke stack: " << data << endl; // Menampilkan pesan data yang ditambahkan ke stack

    cout << "Tumpukan data pada stack: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " "; // Menampilkan tumpukan data pada stack dari top ke bawah
    }
    cout << endl << endl;
}

// Fungsi untuk melakukan pop data dari stack
int pop() {
    if (isEmpty()) {
        cout << "STACK SUDAH KOSONG" << endl; // Menampilkan pesan jika stack sudah kosong
        return -1; // Mengembalikan nilai -1 jika stack sudah kosong
    }

    int poppedData = stack[top--]; // Mengambil data dari stack dan mengurangi nilai top
    cout << "Data yang diambil dari stack: " << poppedData << endl; // Menampilkan pesan data yang diambil dari stack

    cout << "Tumpukan data pada stack: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " "; // Menampilkan tumpukan data pada stack dari top ke bawah
    }
    cout << endl << endl;

    return poppedData; // Mengembalikan data yang diambil dari stack
}

int main() {
    int data;

    system("clear||cls"); // Membersihkan layar sebelum program dijalankan

    while (true) {
        cout << "Masukkan data (3 digit NIM terakhir): ";

        if (!(cin >> data)) {
            // Jika pengguna menginputkan huruf/abjad
            cout << "Masukkan data berupa angka (3 digit NIM terakhir)" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (data % 1000 == 468) {
            break;
        }

        if (data >= 100) {
            push(data);
        } else {
            int poppedData = pop();
            if (poppedData != -1) {
                // Data telah diambil dari stack
            }
        }
    }

    return 0;
}
