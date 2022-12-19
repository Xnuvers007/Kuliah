#include <iostream>
#include <stdio.h>

using namespace std;
FILE *fp;
int main(){
    int i = 0;
    fp=fopen("./data1.txt", "w");
    if(fp==NULL)
    cout<<"Error Membuka Berkas"<<endl;
    else{
        for(i=0; i<=10; i++)
        fprintf(fp,"%d ", i);
        fclose(fp);
    }
}