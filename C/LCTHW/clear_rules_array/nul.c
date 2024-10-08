#include <stdio.h>
#include <string.h>
int main(void)
{
	int	numbers[4] = { 0, 'a', 'b' };
	char	name[4] = { 1,2,3,4 };

	char	name2[4] = {'A', 'b', 'c', 'd'};
	int	*int_ptr = (int *)name;
	int value_as_int = *int_ptr;
	printf("Integer interpretation of the name array :%d\n", value_as_int);

	//first, print them out raw
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c",
			name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	// set up the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	// set up the name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = 'i';

	//then print them out initialized
	 printf("numbers: %d %d %d %d\n",
                        numbers[0], numbers[1], numbers[2], numbers[3]);
        printf("name each: %c %c %c %c",
                        name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	char	buffer[20];
	strcpy(buffer, "hello, world!");
	printf("Buffer: %s\n", buffer);

	// another way to use name
	char *another = "Zedgh";
	printf("another : %s\n", another);
	printf("another each: %c %c %c %c %c\n",
			another[0], another[1], another[2], another[3], another[4]);
	return 0;
}
