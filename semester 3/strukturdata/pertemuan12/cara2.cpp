#include <iostream>
using namespace std;

const int MAX_SIZE = 10; // Ukuran maksimum stack

class Stack {
private:
    int top; // Indeks atas stack
    int data[MAX_SIZE]; // Array untuk menyimpan data stack

public:
    Stack() {
        top = -1; // Inisialisasi top dengan nilai -1 menandakan stack kosong
    }

    bool isFull() {
        return top == MAX_SIZE - 1; // Mengembalikan true jika stack penuh, false jika tidak
    }

    bool isEmpty() {
        return top == -1; // Mengembalikan true jika stack kosong, false jika tidak
    }

    void push(int value) {
        if (isFull()) {
            cout << "STACK SUDAH PENUH" << endl;
            return;
        }
        top++;
        data[top] = value; // Menyimpan data ke stack
        lihat(); // Memanggil fungsi lihat untuk melihat data pada stack
    }

    void pop() {
        if (isEmpty()) {
            cout << "STACK SUDAH KOSONG" << endl;
            return;
        }
        cout << "Data yang diambil dari stack: " << data[top] << endl;
        top--; // Mengurangi top untuk menghapus data dari stack
        lihat(); // Memanggil fungsi lihat untuk melihat data pada stack
    }

    void lihat() {
        if (isEmpty()) {
            cout << "STACK SUDAH KOSONG" << endl << endl;
            return;
        }
        cout << "Tumpukan data pada stack: ";
        for (int i = top; i >= 0; i--) {
            cout << data[i] << " ";
        }
        cout << endl << endl;
    }
};

int main() {
    Stack stack;
    int data;

    while (true) {
        cout << "Masukkan data (3 digit NIM terakhir untuk mengakhiri): ";
        cin >> data;

        if (data == 468) {
            break; // Keluar dari loop jika data yang diinputkan adalah 468
        }

        if (data >= 100) {
            stack.push(data); // Proses push jika data >= 100
        } else {
            stack.pop(); // Proses pop jika data < 100
        }
    }

    return 0;
}
