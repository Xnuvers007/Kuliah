#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
    int Swap;
    
    cout<<"Data sebelum diurutkan: \n";
    
    for(int ctr=0; ctr<8; ctr++)
    {
        cout<< setw(3) << NumList[ctr];
    }
    
    cout<<"\n\n";
    for (int i=0; i<7; i++)
    for (int ii=0; ii<7; ii++)
    if ( NumList[ii] > NumList [ii +1] )
    {
        Swap = NumList [ii];
        NumList [ ii ] = NumList[ ii +1 ];
        NumList [ ii + 1] = Swap;
    }
    
    cout<<"Data setelah diurutkan : \n";
    for (int iii=0; iii<8; iii++)
    {
        cout<< setw (3) << NumList [iii];
    }
    cout<<endl <<endl;
}