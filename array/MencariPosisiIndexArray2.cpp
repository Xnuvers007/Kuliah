#include<iostream>
using namespace std;

int main()
{
    int board[2][5] =
    {
        { 1, 2, 32, 23, 63 }, // row 0
        { 3, 4, 22, 34, 74 } // row 1
    };
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (board[r][c] ==63)
            {
                cout<<"Ditemukan "<<board[r][c];
                cout<<" pada index "<<r<<","<<c;
                return r;
            }
        }
    }
}
