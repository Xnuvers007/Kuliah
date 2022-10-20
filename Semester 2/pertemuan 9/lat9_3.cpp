#include <stdio.h>
#include <ctype.h>
int main (void)
{
    char c = 'C';
    if (islower (c))
    {
        printf ("%c is lower case character \n",c);
    }
    else
    {
        printf ("%c is not lower case character \n",c);
    }
    
return 0;
}
