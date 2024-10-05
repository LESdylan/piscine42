#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ARGS 5
void print_usage(const char *prog_name)
{
	printf("Usage : %s [arg1] [arg2] [arg3]\n", prog_name);
}
int	main(int argc, char **argv)
{
	int	i;
	if(argc == 1)
	{
		printf("You only have one argument, you suck.\n");
		print_usage(argv[0]); 
		return 1;
	}
	else if(argc >1 && argc <= MAX_ARGS +1)
	{
		printf("Here's your arguments:\n");
		i = -1;
		while (++i < argc)
			printf("you rock, argument is! %s\n", argv[i]);
	}
	else
	{
		puts("You have to many argument, you suck\n");
		print_usage(argv[0]);
		return 1;
	}
	return 0;
}
