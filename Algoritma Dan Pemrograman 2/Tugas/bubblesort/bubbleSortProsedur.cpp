// Bubble sort dengan prosedur, input dan angka yang sudah ditentukan

#include <iostream>
#pragma GCC optimize("O3")
using namespace std;

void BubbleSortInput(){

    int i, k, tmp, n;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    int array1[n];

    cout << "Masukkan data: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"Masukan data ke-"<<i+1<<": ";
        cin >> array1[i];
    }

    cout << "\nPengurutan Data Menggunakan Bubble Sort dengan Input User";

    for (i = 1; i < n; i++)
    {
        for (k = n; k >= i; k--)
        {
            if (array1[k] < array1[k - 1])
            {
                tmp = array1[k];
                array1[k] = array1[k - 1];
                array1[k - 1] = tmp;
            }
        }
    }

    cout << "\n\n Data Setelah diurutkan : ";
    for (int i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }

    cout<<endl;

    cout << "data setelah diurutkan dari yang terbesar: ";
    for (int i = n-1; i >= 0; i--)
    {
        cout << array1[i] << " ";
    }

}


void BubbleSortInput2(int array1[], int n){
    int i, k, tmp;
    cout << "\nPengurutan Data Menggunakan Bubble Sort dengan Input User\n";
    cout << "Data sebelum diurutkan : ";

    for (int i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }

    for (i = 1; i < n; i++)
    {
        for (k = n; k >= i; k--)
        {
            if (array1[k] < array1[k - 1])
            {
                tmp = array1[k];
                array1[k] = array1[k - 1];
                array1[k - 1] = tmp;
            }
        }
    }

    cout << "\n\n Data Setelah diurutkan : ";
    for (int i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }

    cout<<endl;
    // dari terbesar ke terkecil
    // menyusun angka dari terbesar ke terkecil
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array1[i] < array1[j]){
                int temp = array1[i];
                array1[i] = array1[j];
                array1[j] = temp;
            }
        }
    }

    cout << "Data Setelah diurutkan dari terbesar : ";
    for (int i = 0; i < n; i++){
        cout << array1[i] << " ";
    }

}

void BubbleSortList(){
        int array1[10] = {11, 2, 9, 13, 57, 25, 17, 50, 90, 3};
    int i, k, tmp, n = 10;

    cout << "\nPengurutan Data Menggunakan Bubble Sort dengan list\n";
    cout << "Data sebelum diurutkan : ";
    for(int i = 0; i < n; i++){
        cout << array1[i] << " ";
    }

    cout<<endl;
    for (i = 1; i < n; i++){
        for (k = n; k >= i; k--){
            if (array1[k] < array1[k - 1]){
                tmp = array1[k];
                array1[k] = array1[k - 1];
                array1[k - 1] = tmp;
            }
        }
    }

    cout << "Data Setelah diurutkan dari terkecil : ";
    for (int i = 0; i < n; i++){
        cout << array1[i] << " ";
    }

    cout<<endl;
    // dari terbesar ke terkecil
    // menyusun angka dari terbesar ke terkecil
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array1[i] < array1[j]){
                int temp = array1[i];
                array1[i] = array1[j];
                array1[j] = temp;
            }
        }
    }

    cout << "Data Setelah diurutkan dari terbesar : ";
    for (int i = 0; i < n; i++){
        cout << array1[i] << " ";
    }

}

void BubbleSortList2(int array2[], int n){
    
}

int main()
{
    cout<<"Pilih metode pengurutan data: \n";
    cout<<"1. BubbleSortInput\n";
    cout<<"2. BubbleSortInput2\n";
    cout<<"3. BubbleSortList\n";
    cout<<"4. BubbleSortList2\n";
    cout<<"Pilihan: ";
    int pilihan;
    cin>>pilihan;
    switch(pilihan){
        case 1:
            BubbleSortInput();
            break;
        case 2:
            int array1[10];
            int n;
            cout<<"Masukkan jumlah data: ";
            cin>>n;
            cout<<"Masukkan data: ";
            for(int i = 0; i < n; i++){
                cin>>array1[i];
            }
            BubbleSortInput2(array1, n);
            break;
        case 3:
            BubbleSortList();
            break;
        case 4:
            int array2[10];
            break;
        default:
            cout<<"Pilihan tidak ada";
    }
    return 0;

}