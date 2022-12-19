#include <iostream>
using namespace std;

int main(){
    int data[] = {25,27,10,8,76,21};
    int imax, tmp;

    for (int i=5; i>=0; i--){
        imax = i;
        for (int j=i-1; j>=0; j--){
            if (data[j] > data[imax]){
                imax = j;
            }
        }
        tmp = data[i];
        data[i] = data[imax];
        data[imax] = tmp;
    }
    for (int i=0; i<=5; i++){
        cout << data[i] << " ";
    }
}