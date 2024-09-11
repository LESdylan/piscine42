/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:32:32 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 15:54:20 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
    char *original_str = str; // pointer tracking : Save the starting pointer 
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + ('a' - 'A'); // Convert to uppercase
        }
        str++;
    }
    return original_str; // Return pointer to the start of the string
}
/*
int main(void)
{
    char c[] = "Je m'appeLLe Dylan";
    printf("%s\n", ft_strlowcase(c));
    return 0;
}
*/