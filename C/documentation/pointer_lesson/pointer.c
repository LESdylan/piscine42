#include <stdio.h>
 // Write a program that declares both an int variable and an int pointer variable. Use the pointer variale to
 //display the value stored by the int variable.
 
#include <stdio.h>

int main(void)
{
    int     age, size;
    float   weight;
    int    *p_int;
    float  *p_float;

    p_int = &age;
    *p_int = 24;        // Setting age to 24

    p_int = &size;
    *p_int = 183;       // Setting size to 183

    p_float = &weight;
    *p_float = 79.5;    // Setting weight to 79.5

    printf("Know your age: %d, size: %d, weight: %.1f\n", age, size, weight);

    return 0;
}
