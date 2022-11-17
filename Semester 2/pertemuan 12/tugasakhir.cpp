// 1. Buatlah program untuk mengurutkan data-data berikut ini dari yang terbesar ke 
// yang terkecil!
// 4 , 8 , 5 , 9 , 6 , 2 , 7 , 5 , 9 , 5
// menggunakan bubble sort, selection sort, insertion sort, quick sort, merge sort, heap sort, shell sort, dan counting sort.

#include <iostream>
#pragma GCC optimize ("O3")
using namespace std;

void bubbleSort(int angka[], int n){
    int i, j, temp;
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

void selectionSort(int angka[], int n){
    int i, j, temp;
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

void insertionSort(int angka[], int n){
    int i, j, temp;
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

void quickSort(int angka[], int left, int right){
    int i = left, j = right;
    int temp;
    int pivot = angka[(left + right) / 2];
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
    if(left < j){
        quickSort(angka, left, j);
    }
    if(i < right){
        quickSort(angka, i, right);
    }
}

void merge(int angka[], int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(i=0; i<n1; i++){
        L[i] = angka[left + i];
    }
    for(j=0; j<n2; j++){
        R[j] = angka[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = left;
    while(i < n1 && j < n2){
        if(L[i] >= R[j]){
            angka[k] = L[i];
            i++;
        }else{
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

void mergeSort(int angka[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;
        mergeSort(angka, left, mid);
        mergeSort(angka, mid + 1, right);
        merge(angka, left, mid, right);
    }
}

void heapify(int angka[], int n, int i){
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l < n && angka[l] > angka[largest]){
        largest = l;
    }
    if(r < n && angka[r] > angka[largest]){
        largest = r;
    }
    if(largest != i){
        swap(angka[i], angka[largest]);
        heapify(angka, n, largest);
    }
}

void heapSort(int angka[], int n){
    for(int i=n/2-1; i>=0; i--){
        heapify(angka, n, i);
    }
    for(int i=n-1; i>=0; i--){
        swap(angka[0], angka[i]);
        heapify(angka, i, 0);
    }
}

void shellSort(int angka[], int n){
    int i, j, temp;
    for(int gap=n/2; gap>0; gap/=2){
        for(i=gap; i<n; i++){
            temp = angka[i];
            for(j=i; j>=gap && angka[j-gap] < temp; j-=gap){
                angka[j] = angka[j-gap];
            }
            angka[j] = temp;
        }
    }
}

void countingSort(int angka[], int n){
    int output[n];
    int max = angka[0];
    for(int i=1; i<n; i++){
        if(angka[i] > max){
            max = angka[i];
        }
    }
    int count[max+1];
    for(int i=0; i<=max; i++){
        count[i] = 0;
    }
    for(int i=0; i<n; i++){
        count[angka[i]]++;
    }
    for(int i=1; i<=max; i++){
        count[i] += count[i-1];
    }
    for(int i=n-1; i>=0; i--){
        output[count[angka[i]]-1] = angka[i];
        count[angka[i]]--;
    }
    for(int i=0; i<n; i++){
        angka[i] = output[i];
    }
}

void radixSort(int angka[], int n){
    int output[n];
    int max = angka[0];
    for(int i=1; i<n; i++){
        if(angka[i] > max){
            max = angka[i];
        }
    }
    for(int exp=1; max/exp>0; exp*=10){
        int count[10] = {0};
        for(int i=0; i<n; i++){
            count[(angka[i]/exp)%10]++;
        }
        for(int i=1; i<10; i++){
            count[i] += count[i-1];
        }
        for(int i=n-1; i>=0; i--){
            output[count[(angka[i]/exp)%10]-1] = angka[i];
            count[(angka[i]/exp)%10]--;
        }
        for(int i=0; i<n; i++){
            angka[i] = output[i];
        }
    }
}

int main(){
    while(true){
    int menu;
    int angka[10] = {4, 8, 5, 9, 6, 2, 7, 5, 9, 5};
    int n = sizeof(angka)/sizeof(angka[0]);
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Quick Sort" << endl;
    cout << "5. Merge Sort" << endl;
    cout << "6. Heap Sort" << endl;
    cout << "7. Shell Sort" << endl;
    cout << "8. Counting Sort" << endl;
    cout << "9. Radix Sort" << endl;
    cout << "Pilih : ";
    cin >> menu;
    switch(menu){
        case 1:
            bubbleSort(angka, n);
            break;
        case 2:
            selectionSort(angka, n);
            break;
        case 3:
            insertionSort(angka, n);
            break;
        case 4:
            quickSort(angka, 0, n-1);
            break;
        case 5:
            mergeSort(angka, 0, n-1);
            break;
        case 6:
            heapSort(angka, n);
            break;
        case 7:
            shellSort(angka, n);
            break;
        case 8:
            countingSort(angka, n);
            break;
        case 9:
            radixSort(angka, n);
            break;
        default:
            cout << "Menu tidak tersedia" << endl;
    }
    cout << "Hasil : ";
    for(int i=0; i<n; i++){
        cout << angka[i] << " ";
    }
    cout << endl;
    }
    return 0;
}