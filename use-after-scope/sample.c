#include <stdio.h>

int main()
{
    char * p=NULL;
    {
        char a[13] = "aaaa";
        p = a;
    }
    *p = 'b';    
    return 0;
}