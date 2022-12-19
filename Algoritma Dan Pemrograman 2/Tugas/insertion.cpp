#include <iostream>
using namespace std;

int main()
{
    int data[]={2,33,21,43,20,99};
    int x,j;
    bool ketemu;

    for(int i=1; i<6;i++)
    {
        x = data[i];
        j = i - 1;
        ketemu = false;

        while((j>=0)&&(!ketemu)){
            if(x < data[j]){
                data[j+1]=data[j];
                j = j-1;
            }
            else
                ketemu=true;
        }
        data[j+1]=x;
    }
    for(int i=0; i<6; i++){
            cout<<data[i]<<" ";
        }
}