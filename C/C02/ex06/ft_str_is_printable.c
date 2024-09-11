/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:11:19 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 15:53:49 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    while (*str != '\0')
    {
        if (!(*str >= 33 && *str <= 126))
            return 0;
        str++;
    }
    return 1;
}
/*
int main(void)
{
    char *c = "56540";
    char *c1 = ".&&&";
    char *c2 = "DFSRRGJUKUYG";
    char *c3 = "";

    printf("Test 1: %d\n", ft_str_is_printable(c));  
    printf("Test 2: %d\n", ft_str_is_printable(c1)); 
    printf("Test 3: %d\n", ft_str_is_printable(c2));
    printf("Test 4: %d\n", ft_str_is_printable(c3));

    return 0;
}
*/