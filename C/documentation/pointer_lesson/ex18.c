//the source code from Listings 18 - 2. Build and run it to see how much storage the char array occupies
//Edit your source code from Exercise 18-2, adding the strlen() func-tion to compare its result on the array with the sizeof operator’s result.
//edit the source code from Exercise 18-2 agaain, this time creating an int array with five elements.
#include <stdio.h>
#include <string.h>
int main(void)
{
    char c = 'c';
    int i = 123;
    float f = 98.6;
    double d = 6.022E23;
    char *hello = "hello";
    while(*hello)
    {
        printf("%c at %p\n", *hello, &(*hello));
        *hello++;
    }
    printf("Address of 'i' %p\n", &i);
    printf("Address of 'f' %p\n", &f);
    printf("Address of 'd' %p\n", &d);
    printf("Address of 'c' %p\n", &c);
    struct robot {
        int alive;
        char name [8];
        int xpos;
        int ypos;
        int strength;
    };
    printf("The evil robot struct size is %lu\n", sizeof(struct robot));
    return 0;
}
