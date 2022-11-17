#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char namalengkap[100],hobi[20], mixed[25];
    char destination[100], destination2[100];
   
    cout << "Masukkan nama lengkap: ";
    cin.getline(namalengkap, 100);
    cout << "Masukkan hobi: ";
    cin.getline(hobi, 20);

    strcpy(destination, "Nama Lengkap : ");
    strcat(destination, namalengkap);

    strcpy(destination2, " Hobi : ");
    strcat(destination2, hobi);

    cout <<destination<<endl;
    cout <<destination2;
    
    return 0;

    // strcat = menggabungkan string/kata, strcat (tujuan, sumber)
    // strcpy = Menyalin kata dari tujuan ke sumber , strcpy (tujuan, sumber)
   
}