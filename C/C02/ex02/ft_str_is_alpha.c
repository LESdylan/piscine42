/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:42:04 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 15:53:14 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    // Check each character in the string
    while (*str != '\0')
    {
        if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
            return 0; // Return 0 if a non-alphabetic character is found
        str++;
    }
    
    return 1; // Return 1 if all characters are alphabetic
}
/*
int main(void)
{
    char *c = "hfdjsk";
    char *c1 = "·$&&/& 798";
    char *c2 = "lkjfs kfkdsjf";
    char *c4 = "";

printf("Test 1: %d\n", ft_str_is_alpha(c));  
printf("Test 2: %d\n", ft_str_is_alpha(c1)); 
    printf("Test 3: %d\n", ft_str_is_alpha(c2));
    printf("Test 4: %d\n", ft_str_is_alpha(c4));

    return 0;
}
*/