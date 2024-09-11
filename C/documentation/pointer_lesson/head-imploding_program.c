#include <stdio.h>

int main(void)
{
    char alpha = 'A';
    int x; 
    char *pa;
    pa = &alpha;

    x = -1;
    while(++x < 26)
        putchar((*pa)++);
    putchar('\n');
    return 0;
}