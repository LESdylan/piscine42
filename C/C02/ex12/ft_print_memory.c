/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:15:58 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 21:03:03 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*https://chatgpt.com/c/66df3af3-9444-800d-b6fb-98074402839b chat gpt conversation in my dlesieur account gmail*/
#include <unistd.h>

// Helper function to print a character using write
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Helper function to print a byte in hexadecimal format
void ft_puthex(unsigned char c)
{
    char *hex = "0123456789abcdef";
    ft_putchar(hex[c / 16]); // First hex digit
    ft_putchar(hex[c % 16]); // Second hex digit
}

// Helper function to print an address in hexadecimal (16 bytes long)
void ft_putaddr(unsigned long addr)
{
    char *hex = "0123456789abcdef";
    int i;

    // Print 16 hexadecimal digits for the address
    for (i = 15; i >= 0; i--)
    {
        ft_putchar(hex[(addr >> (i * 4)) & 0xF]);
    }
    ft_putchar(':');
    ft_putchar(' ');
}

// Helper function to check if a character is printable
int ft_isprintable(unsigned char c)
{
    return (c >= 32 && c <= 126);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    if (size == 0)
        return addr;

    unsigned int i = 0;
    unsigned int j;
    unsigned char *memory = (unsigned char *)addr; // Access the memory byte by byte

    while (i < size)
    {
        // Print the address of the first byte of the current 16-byte block
        ft_putaddr((unsigned long)(addr + i));

        // Print 16 bytes in hexadecimal format
        for (j = 0; j < 16 && i + j < size; j++)
        {
            ft_puthex(memory[i + j]);
            if (j % 2)
                ft_putchar(' ');  // Add space every 2 bytes
        }

        // Add padding if less than 16 bytes were printed
        while (j < 16)
        {
            ft_putchar(' ');
            ft_putchar(' ');
            if (j % 2)
                ft_putchar(' ');
            j++;
        }

        // Print the character representation (ASCII), replacing non-printable characters with '.'
        for (j = 0; j < 16 && i + j < size; j++)
        {
            if (ft_isprintable(memory[i + j]))
                ft_putchar(memory[i + j]);
            else
                ft_putchar('.');
        }

        ft_putchar('\n');
        i += 16;
    }

    return addr;
}

int main(void)
{
    char *c = "Bonjour les aminches. C'est fou";
    ft_print_memory(c, 64);  // Set size as needed, e.g., 64 to match the example output
    return 0;
}
