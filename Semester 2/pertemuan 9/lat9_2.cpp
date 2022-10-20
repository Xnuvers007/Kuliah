#include <stdio.h>
#include <ctype.h>
int main (void)
{
    char c = 'C';
    
    if (isdigit (c))
    {
        printf ("%c is a digit\n",c);
    
    }
    else
    {
        printf ("%c is not a digit\n",c);
    }

return 0;
}
