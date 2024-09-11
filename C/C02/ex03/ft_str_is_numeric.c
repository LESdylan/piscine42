/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:56:28 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 15:53:24 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while (*str != '\0')
    {
        if (!(*str >= '0' && *str <= '9'))
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
    char *c2 = "JKFDHKDJFSlfnjjds546";
    char *c3 = "";

    printf("Test 1: %d\n", ft_str_is_numeric(c));  
    printf("Test 2: %d\n", ft_str_is_numeric(c1)); 
    printf("Test 3: %d\n", ft_str_is_numeric(c2));
    printf("Test 4: %d\n", ft_str_is_numeric(c3));

    return 0;
}
*/