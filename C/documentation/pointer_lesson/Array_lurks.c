#include <stdio.h>
int main()
{    
    int number[10];
    int i; 

    i = 0;

    int *pn = number;
    while(i < 10)
    {
        *pn = i++;
        pn++;
    }
    pn = number; //reset the pointer pn to  point back to the start of the array before the second loop
    i = 0;
    while(i < 10)
    {
        printf("in the range of numbers[%d] is holding the value %c\t address : %p\t peeker side of pointer : %c\n",i, number[i], &number[i], *(pn + i));
        i++;
    }
    return(0);
}