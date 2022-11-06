#include <iostream>
using namespace std;
int main()
{
    int num[10];
    int *start, *end;
    
    start = num;
    end = &num[9];

    while(start != end)
    {
        cout<< "masukan bilangan : ";
        cin >> *start;
        start++;
    }
    return 0;
}