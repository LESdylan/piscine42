#include <stdio.h>
#include <string.h>
typedef struct 
{
	int number;
	char c;
	char str[50];
	float fnumber;
	double dnumber;
	long lnumber;
	signed int num;
	unsigned int num2;
}DATA;
int main()
{
	DATA dateArray[2] = 
	{
		{5555,'h',"hello world",56465.1654,154564,9223372036854775807, -25, 25},
		{1234,'x',"salut monde", 12345.6789, 987654.321, 1234567890, -15, 30}
	};
	
	int i; 
	i = -1;
	while(++i < 2)
	{
		printf("DATA %d\n", i + 1);
		printf("Character: %c\n", dateArray[i].c);
		printf("String:%s\n", dateArray[i].str);
		printf("Float: %.4f\n", dateArray[i].fnumber);
		printf("Double: %.6lf\n", dateArray[i].dnumber);
		printf("Long: %ld\n", dateArray[i].lnumber);
		printf("Signed Integer: %d\n", dateArray[i].num);
		printf("Unsigned Integer: %u\n", dateArray[i].num2);
		printf("\n");
	};
	int bugs = 100;
	double bug_rate = 1.2;
	long universe_of_bugs = 1L * 1024L*1024L * 1024L;
	printf("the entire universe has %ld bugs. \n", universe_of_bugs);
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);
	double part_of_universe = expected_bugs / universe_of_bugs;
	printf("That is only a %e portion of the universe.\n", part_of_universe);

	// something weird
	char null_byte = '\0';
	int care_percentage = bugs * null_byte;
	printf("which means you should care %d%%.\n\n\n", care_percentage);
	puts("#================================================================================#");
	puts("CONTROL THE WIDHT OF THE OUPUT");
	puts("#================================================================================#");
	double pi = 3.14159;
	char name[] = "Alice";
	int num = 25;
	printf("Pi with precision: %.2f\n", pi);
	printf("Name with width : %10s\n\n\n", name);
	puts("#=================================================================================#");
	puts("Flags");
	puts("#=================================================================================#");
	printf("right-aligned: 	|%5d|\n", num); 	// default right-align
	printf("left-aligned: 	|%-5d|\n", num);	// left-align
	printf("Sign: 		|%+5d|\n", num);	// show plus sign for positive numbers
	printf("Zero padding:	|%05d|\n", num);	// pad with zeros
	printf("hash flag: 	|%#x|\n\n\n", num);		// Hexadecimal with `0x` prefix
	puts("#=================================================================================#");
	puts("FIELD WITDH");
	puts("#=================================================================================#");
	num = 7;
	printf("|%5d|\n", num);
	printf("|%-5d|\n\n\n", num);
	puts("#=================================================================================#");
	puts("Precision with Floating Point and Strings");
	puts("#=================================================================================#");
	printf("Pi with 2 decimal places : %.2f\n", pi);
	printf("Pi with 4 decimal places%.4f\n", pi);
	printf("First 3 letters of name: %.3s\n\n\n", name);
	puts("#=================================================================================#");
	puts("dynamic width and precision using '*'");
	puts("#=================================================================================#");
	int width = 10;
	int precision = 2;
	double value = 3.14159;
	printf("Value with dynamic width : |%*f|\n", width, value);
	printf("Value with dynamic precision: |%.*f|\n\n\n", precision, value);
	
	puts("#=================================================================================#");
	puts("handling integers: Signed, unsigned, and different Bases");
	puts("#=================================================================================#");
	int num3 = 255;
	printf("Decimal %d\n", num3);
	printf("Unsigned: %u\n", num3);
	printf("Hexadecimal %x\n", num3);
	printf("Octal %o\n\n\n", num3);
	puts("#=================================================================================#");
	puts("printing pointers:");
	puts("#=================================================================================#");
	int x = 42;
	int *ptr = &x;
	printf("Pointer : %p\n\n\n", ptr);
	puts("#=================================================================================#");
	puts("Escape sequences");
	puts("#=================================================================================#");
	printf("1. Newline: This is line one.\nThis is line two.\n\n");
    
    	printf("2. Horizontal Tab:\n\tThis text is indented using a tab.\n\n");
    
    	printf("3. Backslash: To display a backslash, use \\\\ like this.\n\n");
    
    	printf("4. Double Quote: He said, \"Hello!\".\n\n");
    
    	printf("5. Single Quote: It\'s a beautiful day.\n\n");
    
    	printf("6. Carriage Return: This text will be overwritten by the\rNew Text.\n\n");
    
    	printf("7. Form Feed (used in older printers to go to the next page).\fForm Feed Example (you won't see much difference on most consoles).\n\n");
    
    	printf("8. Backspace: Text\b\b\b\bThis will delete last few characters.\n\n");
    
    	printf("9. Audible Alert: This will make a beep sound!\a\n\n"); // You might hear a beep
    
    	printf("10. Vertical Tab:\vThis text is shifted vertically.\n\n");
    
    	printf("11. Question Mark: What is this character? \?\n\n");

    	printf("12. Null Character: Null terminator in strings \\0, but not visible in output.\n");
	
	printf("This is a test\e[1;31m in red\e[0m.\n");

	printf("this test is \t\t indented\n\n\n ");
	printf("Hello, World!\n");
   	printf("This is line 1.\n");
    	printf("This is line 2.\v");  // Insert a vertical tab
    	printf("This line is after a vertical tab.\n");
    
    	printf("\n--- Vertical Tab Example ---\n");
    
    	// Using vertical tabs for formatting
  	printf("Item 1\vItem 2\vItem 3\vItem 4\n");
   	printf("100\v200\v300\v400\n");
	puts("#================================================================================#");
	puts("Binary representation");
	puts("#================================================================================#");
    	printf("Hexadecimal escape: %c\n", '\x41');
	printf("Octal escape: %c\n", '\101');
	printf("escape character (non-standard): \e[31mRed Text\e[0m\n");
	int j = 7;
	int u = 0;
	char str[20];
	while(--j >= 0)
		str[u++] = printf("%c", (num &(1 << j)) ? '1':'0');
	str[u] = '\0';
	printf("%s", str);
	puts("");
	return 0;
	
}
