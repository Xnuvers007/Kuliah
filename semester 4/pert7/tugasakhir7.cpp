#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                cout << "Penukaran " << arr[j] << " dan " << arr[j + 1] << ": ";
                printArray(arr, n);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                cout << "Penukaran " << arr[j] << " dan " << arr[j + 1] << ": ";
                printArray(arr, n);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int data[] = {34, 12, 56, 78, 6, 43, 32, 20, 90, 50, 55, 75, 85, 95, 25};
    int n = sizeof(data) / sizeof(data[0]);

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;
    
    cout << endl;

    cout << "Data sebelum diurutkan:" << endl;
    printArray(data, n);

    cout << "\nBubble Sort Naik:" << endl;
    bubbleSortAscending(data, n);

    cout << "\nBubble Sort Turun:" << endl;
    bubbleSortDescending(data, n);

    return 0;
}
