#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int x, *p, **q;
    x = 10;
    p = &x;
    q = &p;

    cout<< **q;
    
    return 0;
}