/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:07:45 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 15:53:32 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    while (*str != '\0')
    {
        if (!(*str >= 'a' && *str <= 'z'))
            return 0; // Return 0 if a non-numeric character is found
        str++; // Move to the next character
    }
    return 1; // Return 1 if all characters are numeric
}
/*
int main(void)
{
    char *c = "56540";
    char *c1 = "·\n&/&";
    char *c2 = "afsdfassdfhgjkhn";
    char *c3 = "";

    printf("Test 1: %d\n", ft_str_is_lowercase(c));  
    printf("Test 2: %d\n", ft_str_is_lowercase(c1)); 
    printf("Test 3: %d\n", ft_str_is_lowercase(c2));
    printf("Test 4: %d\n", ft_str_is_lowercase(c3));

    return 0;
}
*/