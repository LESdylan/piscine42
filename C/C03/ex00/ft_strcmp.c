/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:04:06 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/10 00:10:48 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * The strcmp() functions compares two strings case-sensitively
 * the comparison is doing unsigned characters
 * 
 * @param s1, s2 strings that are compared
 * 
 * @return 
 * 0, if the s1 and s2 are equal;
 * a negative value f s1 is less than s2;
 * a positive value if s1 is greater than s2.
 * 
 * @note
 * the string are compared using "ASCIIbetical" order, based on the ASCII values of their characters
 */
int ft_strcmp(char *s1, char *s2)
{
    int i; 
    i = 0;
    while(*(s1 + i) != '\0' && *(s2 + i) != '\0')
    {
        if(*(s1 + i) != *(s2 + i))
        {
            return *(s1 + i) - *(s2 + i);
        }
        i++;
    }
    return 0;
}
/*
int main(void)
{
    char *c = "hello";
    char *str = "helo";
    printf("%d",ft_strcmp(c, str));
    return 0;
}
*/