#include <iostream>

int main(){
    int rows, cols;
    std::cout<<"NIM  : 211011450468\n";
    std::cout<<"Nama : Indra Dwi Aryadi\n";

    std::cout << "Masukkan jumlah baris : ";
    std::cin >> rows;
    std::cout << "Masukkan jumlah kolom : ";
    std::cin >> cols;

    int matrix1[rows][cols];
    int matrix2[rows][cols];

    std::cout << "\nMasukkan elemen matrix pertama : \n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "\nMasukkan elemen matrix kedua : \n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cin >> matrix2[i][j];
        }
    }

    int result[rows][cols];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    std::cout << "Hasil penjumlahan matrix : \n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cout << result[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}