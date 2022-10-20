#include <string.h>
#include <stdio.h>
int main (void)
{
    char str1 [10] = {"abcdefghi"};
    char str2 [10];
    
    strcpy (str2, str1);
    printf ("%s\n",str2);
    
 return 0;
}