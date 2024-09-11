// Code a program to display five values in an int array along with each element's memory address.
#include <stdio.h>
int main(void)
{
    int integers[] = {1,2,3,4,5};
    int *integer = integers;
    int size = sizeof(integers) / sizeof(integers[0]);
    int i;
    i = -1;
    while(++i < size)
    {
        printf("%d at %p\n", *integer, &(*integer));
        *integer++;
    }
    return 0;
}