/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:16:00 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/10 11:14:50 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief this functions appends a string of character from `src` in `dest`
 * 
 * The strcat() function appends the src string to the dest string, overvwriting
 * the null terminating null byte ('\0')
 * the function must add a new terminating null byte at the end of dest.
 * The dest string has to get enough space for the result
 * warning to buffer overflow.
 * 
 * @param src it's the string src that will be appended to dest
 * @param dest it's another string blank or with text
 * 
 * @return a dest null-terminated that has both information from the parameters.
 */
char	*ft_strcat(char *src, char *dest)
{
	char	*save;

	save = dest;
	while (*dest)
		dest++;
	while (*src) // while(*dest++ = *src++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (save);
}


int main(void)
{
	char str1[15] = " world";
	char str2[15] = "hello";
	printf("%s\n", ft_strcat(str1, str2));
	return 0;
}
