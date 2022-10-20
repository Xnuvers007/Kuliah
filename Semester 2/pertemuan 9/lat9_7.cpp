#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

char *entry, letter, choice [2];
int ascii, len, binary [8], total;

void prog ();

int main()
{
    prog ();
    return 0;
}

void prog()
{
    entry = new char [501];
    char *kalimat = new char [501];

    cout<<"Masukkan kalimat yang ingin dikonversi (sampai 500 huruf) : ";
    cin.getline(entry, 500);
    
    len = strlen (entry);
    for (int i = 0; i<len; i++)
    {
        total = 0;
        letter = entry[i];
        ascii = letter;
        
        while(ascii>0)
        {
            if ((ascii%2)==0)
            {
                binary [total] = 0;
                ascii = ascii/2;
                total++;
            }

            else
            {
                binary [total] = 1;
                ascii = ascii/2;
                total++;
            }
        }
        total--;
        
        while (total>=0) 
        {
            cout<<binary[total];
            total--;
        }
        cout<<" ";

    }
    cout<<endl;
    // translate
    for (int i = 0; i < len; i++)
    {
        kalimat[i] = entry[i];
    }
    cout<<"Kalinat yang diinput : "<<kalimat<<endl;
    
    delete[ ] entry;
    
    cout<<endl<<"Akan diulangi lagi (1 =ya, 2= tidak) ? : ";
    cin.getline(choice, 3);
    
    if (choice [0]=='1')
    {
        prog();
    }

    else
    {
        exit(0);
    }
}