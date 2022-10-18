#include <iostream>
using namespace std;

int main()
{
    int abc[10]={1,3,9,15,78,87,95,103,124,352};
    int loc, num, i, m, s=0,e=9;
    loc=1;
    cout<<" Enter any value: ";
    cin>>num;
    while(s<e)
    {
        m=(s+e)/2;
        if(num==abc[m])
        {
            loc= m+1;
            break;
            
        }
        else if(num<abc[m])
            e=m-1;
        else
            s=m+1;
        
    }
    if(loc==0)
        cout<<" Value not found"<<endl;
        cout<<" Value found at position = "<<loc<<endl;
        
}