// 1. Buatlah program untuk mengurutkan data-data berikut ini dari yang terbesar ke 
// yang terkecil!
// 4 , 8 , 5 , 9 , 6 , 2 , 7 , 5 , 9 , 5

#include <iostream>
using namespace std;

int pilih, angka[10] = {4, 8, 5, 9, 6, 2, 7, 5, 9, 5};
int i, j, temp, n = 10;
int kiri = 0, kanan = n-1;
int pivot = angka[(kiri + kanan) / 2];

void bubblesort(){
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(angka[j] < angka[j+1]){
                temp = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = temp;
            }
        }
    }
}

void selectionsort(){
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(angka[i] < angka[j]){
                temp = angka[i];
                angka[i] = angka[j];
                angka[j] = temp;
            }
        }
    }
}

void insertionsort(){
    for(i=1; i<n; i++){
        temp = angka[i];
        j = i-1;
        while(j>=0 && angka[j] < temp){
            angka[j+1] = angka[j];
            j--;
        }
        angka[j+1] = temp;
    }
}

void quicksort(){
    while(i <= j){
        while(angka[i] > pivot){
            i++;
        }
        while(angka[j] < pivot){
            j--;
        }
        if(i <= j){
            temp = angka[i];
            angka[i] = angka[j];
            angka[j] = temp;
            i++;
            j--;
        }
    }
    if(kiri < j){
        quicksort();
    }
    if(i < kanan){
        quicksort();
    }
}

void mergesort(){
    int i, j, k, n1, n2;
    int L[5], R[5];
    n1 = 5;
    n2 = 5;
    for(i=0; i<n1; i++){
        L[i] = angka[i];
    }
    for(j=0; j<n2; j++){
        R[j] = angka[j+n1];
    }
    i = 0;
    j = 0;
    k = 0;
    while(i < n1 && j < n2){
        if(L[i] >= R[j]){
            angka[k] = L[i];
            i++;
        }
        else{
            angka[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        angka[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        angka[k] = R[j];
        j++;
        k++;
    }
}

void tampil(){
    for(i=0; i<n; i++){
        cout << angka[i] << " ";
    }
}

int main(){
    cout << "Pilih metode sorting: " << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Quick Sort" << endl;
    cout << "5. Merge Sort" << endl;
    cout << "Pilihan: ";
    cin >> pilih;
    cout << endl;
    cout << "Data sebelum diurutkan: ";
    tampil();
    cout << endl;
    switch(pilih){
        case 1:
            bubblesort();
            cout << "Data setelah diurutkan: ";
            tampil();
            break;
        case 2:
            selectionsort();
            cout << "Data setelah diurutkan: ";
            tampil();
            break;
        case 3:
            insertionsort();
            cout << "Data setelah diurutkan: ";
            tampil();
            break;
        case 4:
            quicksort();
            cout << "Data setelah diurutkan: ";
            tampil();
            break;
        case 5:
            mergesort();
            cout << "Data setelah diurutkan: ";
            tampil();
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }
    return 0;
}