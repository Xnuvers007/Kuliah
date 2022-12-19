#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int i, j, a, k, m;
    char nm[5][20], temp[40];

    cout<<"Inputkan 5 Nama\n";
    for(i=1; i<=5; i++)
    {
        cout<<"Input Nama Ke - "<<i<<" = ";
        cin.getline(nm[i],20);
        if(i>1)
        {
            for(j=1; j<=(i-1); j++)
            {
                a = (strcmp(nm[i], nm[j]));
                if(a<=0)
                {
                    strcpy(temp, nm[i]);
                    for (k=(i-1); k>=j; k--)
                    {
                        m=(k+1);
                        strcpy(nm[m], nm[k]);
                    }
                    strcpy(nm[j], temp);
                }
            }
        }
    }
    cout<<"\nHasil Pengurutan : \n";
    for(i=1; i<=5; i++)
    {
        cout<<"\n"<<nm[i];
    }
    getch();
}