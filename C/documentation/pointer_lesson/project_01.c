#include <stdio.h>
 // create a new project that fills a 26-character arrray by using pointersçç
 // fill the array with the lettes 'A' throug 'Z' by using pointer notation
 // build a char array, not a string
 //use pointer notation to output the array's contents.

 int    main(void)
 {
    char array[50];
    int i;
    char *ptr;

    ptr = array; 
    i = -1;
    while(++i < 26)
    {
        *ptr++ = 'A' + i; 
    }
    ptr = array;
    i = 0;
    while(*ptr && i++)
        printf(
            "in the range of numbers[%d] is hold the value %c\t address : %p\t peeker side of pointer : %c\n",
            i, array[i], &array[i], *ptr++ 
             );
    return 0;
 }

 /**
  * watchout (*pa)++ != *pa++
  * `*pa++` peeks a value and increment the pointer, 
  * the (*pa)++ increment the value being peeked at, the pointer address is not changed.
  */