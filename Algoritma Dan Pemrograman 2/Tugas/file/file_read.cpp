#include <iostream>
#include <stdio.h>

using namespace std;
FILE *fp;


int main(){
    int i=0, k;
    fp = fopen("./data1.txt", "rb");
    if(fp==NULL)
    cout<<"Error membuka berkas"<<endl;
    else{
        while(!feof(fp))
        {
            fscanf(fp, "%d ", &k);
            cout<<k<<" ";
        }
        cout<<endl;
        fclose(fp);
    }
}