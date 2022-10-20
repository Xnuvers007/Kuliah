#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    string input;
    char kalimat[501];
    cout << "Masukkan kalimat yang ingin dikonversi (sampai 500 huruf) : ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        cout << bitset<8>(input[i]) << " ";
    }

    // translate
    for (int i = 0; i < input.length(); i++)
    {
        kalimat[i] = input[i];
    }
    cout << endl;
    cout<< "Kalimat yang diinput : " << kalimat << endl;

    cout << endl;

    return 0;
}