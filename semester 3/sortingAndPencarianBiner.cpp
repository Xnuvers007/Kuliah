#include <iostream>

using namespace std;

void tampilArray(int n, int arr[]) {
    int i;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int n, int arr[]) {
    int i, j, temp;
    bool tukar;

    for (i = 0; i < n - 1; i++) {
        tukar = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                tukar = true;
            }
        }
        if (!tukar) {
            break;
        }
        tampilArray(n, arr); // Menampilkan array setelah setiap perulangan
    }
}

void insertionSort(int n, int arr[]) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        tampilArray(n, arr); // Menampilkan array setelah setiap perulangan
    }
}

void selectionSort(int n, int arr[]) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        tampilArray(n, arr); // Menampilkan array setelah setiap perulangan
    }
}

int binarySearch(int arr[], int low, int high, int cari) {
    while (low <= high) {
        int tengah = low + (high - low) / 2;

        if (arr[tengah] == cari) {
            return tengah;
        }
        else if (arr[tengah] < cari) {
            low = tengah + 1;
        }
        else {
            high = tengah - 1;
        }
    }

    return -1;
}

int main() {
    int n, i;
    cout << "Dikoding oleh\nNama: Indra Dwi Aryadi (xxxxxxxxxxxx)\nKelas: 03TPLP003"<<endl;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int tabInt[n];
    cout << "Masukkan elemen-elemen array: ";
    for (i = 0; i < n; i++) {
        cin >> tabInt[i];
    }

    cout << "Array sebelum diurutkan: ";
    tampilArray(n, tabInt);

    int bubbleSortArr[n];
    for (i = 0; i < n; i++) {
        bubbleSortArr[i] = tabInt[i];
    }
    cout << "Bubble Sort:\n";
    bubbleSort(n, bubbleSortArr);

    int insertionSortArr[n];
    for (i = 0; i < n; i++) {
        insertionSortArr[i] = tabInt[i];
    }
    cout << "Insertion Sort:\n";
    insertionSort(n, insertionSortArr);

    int selectionSortArr[n];
    for (i = 0; i < n; i++) {
        selectionSortArr[i] = tabInt[i];
    }
    cout << "Selection Sort:\n";
    selectionSort(n, selectionSortArr);

    cout << "\n\n";
    cout << "Dikoding oleh\nNama: Indra Dwi Aryadi (xxxxxxxxxxx)\nKelas: 03TPLP003"<<endl;
    cout << "Pencarian Biner:\n";
    int cari;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> cari;

    // Pencarian pada array yang telah diurutkan menggunakan binary search
    int posisi = binarySearch(bubbleSortArr, 0, n - 1, cari);
    if (posisi != -1) {
        cout<< "Data telah diurutkan dan pencarian biner: "<<endl;
        cout << "Angka " << cari << " ditemukan pada indeks ke-" << posisi << endl;
    } else {
        cout << "Angka " << cari << " tidak ditemukan" << endl;
    }

    return 0;
}
