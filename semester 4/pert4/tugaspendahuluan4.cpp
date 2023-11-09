#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int *ptr = &num;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;
    
    cout << "Nilai dari variabel num                                    : " << num << endl;
    cout << "Alamat memori dari variabel num                            : " << &num << endl;
    cout << "Nilai dari variabel yang ditunjuk oleh pointer ptr         : " << *ptr << endl;
    cout << "Alamat memori dari variabel yang ditunjuk oleh pointer ptr : " << ptr << endl;
    
    cout << endl;

    return 0;
}