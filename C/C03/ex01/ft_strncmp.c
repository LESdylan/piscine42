/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:00:24 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/10 00:15:36 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * the strcnmp() works exactly like ft_strcmp(), 
 * however it compares only the first (at most) n bytes of s1 and s2
 * @param s1,s2 the two strings to be compared.
 * @return the same as the strcmp.
 */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    i = 0;
    while(*(s1 + i) != '\0' && *(s2 + i) != '\0' && i < n)
    {
        if(*(s1 + i) != *(s2 + i))
            return *(s1 + i) - *(s2 + i);
        i++;
    }
    return 0;
}
/*
int main(void)
{
    char *str1 = "hello world";
    char *str2 = "hedlo world";
    int size = 5;
    printf("%d\n", ft_strncmp(str1, str2, size));
    return 0;
}
*/