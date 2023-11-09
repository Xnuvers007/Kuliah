#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int i = 0;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;
   
    while (i < 5)
    {
        cout << *ptr << " = memori " << ptr << endl;
        ptr++;
        i++;
    }

    return 0;
}