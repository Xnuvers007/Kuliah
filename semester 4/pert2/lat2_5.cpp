#include <iostream>
#include <iomanip>

int main() {
    std::cout << "\nNama : Indra Dwi Aryadi\n";
    std::cout << "NIM  : 211011450468\n\n";
    
    int matrix[3][4] = {
        {1, 3, 4, 5},
        {2, 4, 6, 8},
        {3, 5, 7, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << std::setw(2) << matrix[i][j];
            if (j < 3) {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
