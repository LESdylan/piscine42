#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i = 0;
    char letter;

    // Check if there are any command-line arguments
    if (argc < 2) {
        printf("Usage: %s <words>\n", argv[0]);
        return 1;
    }

    // Loop through each command-line argument
    while (++i < argc) {
        int j = 0;

        // Loop through each character in the argument
        while (argv[i][j] != '\0') {
            letter = argv[i][j];
            j++;

            // Switch statement to identify vowels
            switch (letter) {
                // Lowercase vowels
                case 'a': // fallthrough
                case 'e': // fallthrough
                case 'i': // fallthrough
                case 'o': // fallthrough
                case 'u':
                    printf("%c is a vowel\n", letter);
                    break;

                // Uppercase vowels
                case 'A': // fallthrough
                case 'E': // fallthrough
                case 'I': // fallthrough
                case 'O': // fallthrough
                case 'U':
                    printf("%c is a vowel\n", letter);
                    break;

                default:
                    printf("%c is not a vowel\n", letter);
                    break;
            }
        }
    }
    
    return 0;
}

