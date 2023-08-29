#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p1 = malloc(13);
    char *p2 = malloc(16);
    p1[-1] = 'a'; //crash
    p1[13] = 'b'; //crash
    free(p1);
    free(p2);
    return 0;
}