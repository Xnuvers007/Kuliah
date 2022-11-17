#include <iostream>
#pragma GCC diagnostic ignored "-Wwrite-strings"

using namespace std;

struct S2
{
    char *s;
    int i;
    struct S2 *slp;
};

int main()
{
    static struct S2 a[] = {
        {
            "abcdef", 1, a + 1
        },
        {
            " ghijkl", 2, a + 2
        },
        {
            " mnopqr", 3, a
        }
    };
    
    struct S2 *p = a;
    int i;
    cout<< "a[0].s = " << a[0].s << " p->s = " << p->s << " a[2].slp->s = " << a[2].slp->s << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "--a[i].i = " << --a[i].i << " ";
        cout << "++a[i].s[3] = " << ++a[i].s[3] << endl;
    }

    return 0;   
}