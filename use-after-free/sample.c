#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p1 = malloc(13);
    char *p2 = malloc(16);
    free(p1);
    free(p2);
    p1[1] = 'b';
    return 0;
}