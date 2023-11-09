#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ptr = &arr[0][0];

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "Array nya " << endl;
    
    for (int i = 0; i < 9; i++) {
        cout << *(ptr + i) << " ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    cout << endl;
    cout << "Memori nya " << endl;
    for (int i = 0; i < 9; i++) {
        cout << (ptr + i) << " ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    cout << endl;
    
    return 0;
}