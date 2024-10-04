#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	int	i;

	if(argc < 2)
		puts("error : 404");
	printf("you have %d arguments\n", argc);
	i = 1;
	while(i < argc)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		i++;
	}
	return 0;
}

