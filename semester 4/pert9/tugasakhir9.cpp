#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void printData(const vector<string> &data)
{
    cout << "Data sebelum diurut                 : ";
    for (const string &word : data)
        cout << word << " ";
    cout << endl;
}

int main()
{
    vector<string> originalData = {"suka", "aku", "sama", "kamu", "dulu", "sampai", "dari", "sekarang"};

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "\t  SUSUN KATA sesuai Alphabet | Shell Sort & Insertion Sort\n";

    cout << endl;

    vector<string> shellSortData = originalData;

    // Shell Sort
    int i, k, jarak;
    string temp;
    int N = shellSortData.size();
    jarak = N / 2;

    while (jarak >= 1)
    {
        for (i = jarak; i < N; i++)
        {
            temp = shellSortData[i];
            k = i;
            while (k >= jarak && shellSortData[k - jarak] > temp)
            {
                shellSortData[k] = shellSortData[k - jarak];
                k = k - jarak;
            }
            shellSortData[k] = temp;
        }
        jarak /= 2;
    }

    vector<string> insertionSortData = originalData;

    // Insertion Sort
    int j;
    string key;
    N = insertionSortData.size();

    for (i = 1; i < N; i++)
    {
        key = insertionSortData[i];
        j = i - 1;

        while (j >= 0 && insertionSortData[j] > key)
        {
            insertionSortData[j + 1] = insertionSortData[j];
            j = j - 1;
        }

        insertionSortData[j + 1] = key;
    }

    printData(originalData);

    cout << "\nData Setelah diurut (Shell Sort)    : ";
    for (const string &word : shellSortData){
        cout << word << " ";
    }

    cout << "\n\nData Setelah diurut (Insertion Sort): ";
    for (const string &word : insertionSortData){
        cout << word << " ";
    }

    cout << endl << endl;

    return 0;
}
