/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:15:11 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 15:54:01 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
    char *original_str = str; // pointer tracking : Save the starting pointer 
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A'); // Convert to uppercase
        }
        str++;
    }
    return original_str; // Return pointer to the start of the string
}
/*
int main(void)
{
    char c[] = "je m'appelle Dylan";
    printf("%s\n", ft_strupcase(c));
    return 0;
}
*/