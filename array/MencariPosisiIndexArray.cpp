// search 2 dimensional array

#include <iostream>
using namespace std;

int main() {
    int arr[2][5] = {
                     {1, 2, 32, 23, 63},
                     {3, 4, 22, 34, 74}
                    };
                                    // 2 adalah baris 5 adalah kolom
                                    // {1, 2, 3},
                                    // {4, 5, 6};
                                    // {7, 8, 9};
                                    // ini adalah contoh array dengan 3 baris dan 3 kolom
    int target = 63;    // int target = 3;
    int row = 0;       // ini baris
    int col = 0;        // ini kolom
    bool found = false;
    while (row < 5 && !found) { // while (row < 3 && !found)
        col = 0;
        while (col < 5 && !found) { // while (col < 2 && !found)
            if (arr[row][col] == target) {
                found = true;
            } else {
                col++;
            }
        }
        row++;
    }
    if (found) {
        cout << target << " Berhasil Ditemukan " << "pada Index " << row << "," << col << endl;
    } else {
        cout << "Tidak berhasil Ketemu :(" << endl;
    }
    return 0;
}
