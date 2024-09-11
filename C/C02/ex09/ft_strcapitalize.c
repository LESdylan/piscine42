/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:33:58 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 15:54:34 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int new_word = 1;  // Flag to determine if the current character is the start of a new word
    char *original_str = str;

    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z'))
        {
            if (new_word)
            {
                *str -= 32;  // Capitalize the first letter of a new word
            }
        }
        else if ((*str >= 'A' && *str <= 'Z'))
        {
            if (!new_word)
            {
                *str += 32;  // Convert other letters to lowercase
            }
        }

        new_word = !((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'));
        
        str++;
    }
    return original_str;
}
/*
int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}
*/