#include <iostream>

using namespace std;

const int MAX_SIZE = 5; // ukuran maksimum antrian, bisa diubah sesuai kebutuhan, misalnya 10

struct Antrian {
    char data[MAX_SIZE];
    int front;
    int rear;
};

// Fungsi untuk memeriksa apakah antrian kosong
bool isAntrianEmpty(Antrian &q) {
    return (q.front == -1 && q.rear == -1);
}

// Fungsi untuk memeriksa apakah antrian penuh
bool is_full(Antrian &q) {
    return ((q.rear + 1) % MAX_SIZE == q.front);
}

// Fungsi untuk menambahkan data ke antrian
void enqueue(Antrian &q, char data) {
    if (is_full(q)) {
        cout << "Antrian sudah penuh." << endl;
    } else if (isAntrianEmpty(q)) {
        q.front = q.rear = 0;
        q.data[q.rear] = data;
    } else {
        q.rear = (q.rear + 1) % MAX_SIZE;
        q.data[q.rear] = data;
    }
}

// Fungsi untuk menghapus data dari antrian
void dequeue(Antrian &q) {
    if (isAntrianEmpty(q)) {
        cout << "Antrian kosong." << endl;
    } else if (q.front == q.rear) {
        q.front = q.rear = -1;
    } else {
        q.front = (q.front + 1) % MAX_SIZE;
    }
}

// Fungsi untuk menampilkan data pada antrian
void print_queue(Antrian &q) {
    if (isAntrianEmpty(q)) {
        cout << "Antrian kosong." << endl;
    } else {
        int i = q.front;
        while (i != q.rear) {
            cout << q.data[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << q.data[i] << endl;
    }
}

// Buat reset antrian, jadi antrian kosong lagi dan masuk ke menu lagi
void reset_queue(Antrian &q) {
    q.front = q.rear = -1;
}

int main () {
    Antrian q;
    q.front = q.rear = -1;

    int choice;
    char data;

    do {
        cout << "\nPilih menu:" << endl;
        cout << "1. INSERT" << endl;
        cout << "2. DELETE" << endl;
        cout << "3. CETAK ANTRIAN" << endl;
        cout << "4. RESET" << endl;
        cout << "5. KELUAR" << endl;
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan 1 Huruf: ";
                cin >> data;
                enqueue(q, data);
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                cout << "\nAntrian: ";
                print_queue(q);
                break;
            case 4:
                reset_queue(q);
                break;
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (choice != 5);

    return 0;
}
