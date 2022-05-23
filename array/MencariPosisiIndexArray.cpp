// search 2 dimensional array

#include <iostream>
using namespace std;

int main() {
    int arr[2][5] = {
                     {1, 2, 32, 23, 63},
                     {3, 4, 22, 34, 74}
                    };
    int target = 63;
    int row = 0;
    int col = 0;
    bool found = false;
    while (row < 5 && !found) {
        col = 0;
        while (col < 5 && !found) {
            if (arr[row][col] == target) {
                found = true;
            } else {
                col++;
            }
        }
        row++;
    }
    if (found) {
        cout << "Found " << target << " at " << row << "," << col << endl;
    } else {
        cout << "Not found" << endl;
    }
    return 0;
}
