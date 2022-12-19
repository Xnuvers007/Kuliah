#include <iostream>
using namespace std;

#define N 10

void InsSort(int [], int, int, int);
void ShellSort(int [], int);

int main()
{
    int i, n=N-1;
    int data[] = {12,67,32,4,22,76,89,54,9,77};

    cout<<"Data sebelum diurutkan : "<<endl;
    
    for(i=0; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }

    ShellSort(data, n);

    cout<<"\n\nData setelah diurutkan : "<<endl;

    for(i=0; i<=n; i++){
        cout<<data[i]<<" ";
    }
}

void ShellSort(int data[], int n)
{
    int start, step;

    for(step=5; step>=1; step-=2)
    {
        for(start=0; start<=step; start++){
            InsSort(data, n, start, step);
        }
    }
}

void InsSort(int data[], int n, int start, int step)
{
    int i, j, x;
    bool ketemu;

    i=start+step;
    while(i<=n){
        x = data[i];
        j = i-step;
        ketemu = false;
        while((j>=0) && (!ketemu))
        {
            if(x<data[j])
            {
                data[j+step] = data[j];
                j=j-step;
            }
            else
                ketemu = true;
        }
        data[j+step]=x;
        i=i+step;
    }
}