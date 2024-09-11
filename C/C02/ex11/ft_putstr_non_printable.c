/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:10:45 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 15:51:35 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
   write(1, &c, 1);   
}


int ft_str_is_printable(char c)
{
    // Printable ASCII characters are in the range 32 to 126.
    return (c >= 32 && c <= 126);
}

void    write_hex_code(char dec)
{
    ft_putchar('\\'); // high nibble (first hex digit)
    if(dec / 16 > 9) 
        ft_putchar((dec / 16) + 87); // print hexadecimal letter
    else
        ft_putchar((dec / 16) + 48); // print digit digit
    if(dec % 16 > 9) // low nibble (second hex digit)
        ft_putchar((dec % 16) + 87); // print hexadecimal letter
    else
        ft_putchar((dec % 16) + 48); // print digit letter.
}

void ft_putstr_non_printable(char *str)
{
    while(*str != '\0')
    {    
        if(ft_str_is_printable(*str))
            ft_putchar(*str);
        else
            write_hex_code(*str);
        str++;
    }
}























/*
void	write_hex(char byte)
{
	char	c;

	//One \ acts as escape char
	write(1, "\\", 2);
	
	//Ternary operators...kinda neat here, 🚨Forbidden by norminette but not from real life code🚨
	c = (byte/16 > 9)? byte/16 + 87 : byte/16 + 48;
	write(1, &c, 1);
   	c = (byte%16 > 9)? byte%16 + 87 : byte%16 + 48;
	write(1, &c, 1);
}
*/
/*
void write_hex_char(unsigned char c) {
    char hex_digits[] = "0123456789abcdef";  // Table de correspondance pour les hexadécimaux
    char hex_representation[4] = "\\x00";    // Représentation du caractère non imprimable en hexadécimal

    // On remplit les deux derniers caractères de la chaîne par la valeur hexadécimale
    hex_representation[2] = hex_digits[(c >> 4)];  // permet d'isoler les 4bits de poids faible de c
    hex_representation[3] = hex_digits[c];         

    // Écrire la chaîne hexadécimale "\xXY"
    write(1, hex_representation, 4);
}

void convert_to_hex(const char *str) {
    while (*str) {
        if (*str >= 32 && *str <= 126) {
            // Caractères imprimables (espaces, lettres, chiffres, symboles standards)
            write(1, str, 1);
        } else {
            // Caractères non imprimables, les convertir en hexadécimal
            write_hex_char((unsigned char)*str);
        }
        str++;
    }
}
*/
/*
int main() {
    ft_putstr_non_printable("H\re\allo\nWo\trld\f");
    return 0;
}
*/