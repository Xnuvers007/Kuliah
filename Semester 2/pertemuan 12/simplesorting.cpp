// 3. Buatlah contoh algoritma dan program sederhana menggunakan Sorting dengan 
// memakai Flowchart!

#include <iostream>
using namespace std;

void Tukar(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                Tukar(&arr[j], &arr[j+1]);
            }
        }
    }
}

void PrintArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Masukkan data ke-"<<i+1<<" : ";
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    cout << "Data urut : ";
    PrintArray(arr, n);
    return 0;
}
