/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:59:52 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/10 11:35:24 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/**
 * @brief Appends up to `nb` characters from `src` to `dest`.
 * 
 * This function appends at most `nb` characters from `src` to the end of `dest`.
 * It ensures that the final result is null-terminated, assuming `dest` has enough space.
 *
 * @param dest The destination string with enough space for appending.
 * @param src The source string to append from.
 * @param nb The maximum number of characters to append from `src`.
 * @return A pointer to the destination string `dest`, which will be null-terminated.
 * 
 * @note
 * this function is similar to `ft_strcat`, it just append at most n bytes from src.
 */
#include <stdio.h>

char *ft_strncat(char *dest, const char *src, unsigned int nb)
{
    char *save = dest;

    while (*dest)
        dest++;
        
    while (nb-- && *src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return save;
}

int main(void)
{
    char str[30] = "Hello";  // Ensured enough space for concatenation
    char str2[15] = " world";
    unsigned int size = 3;   // Append only 3 characters

    printf("%s\n", ft_strncat(str, str2, size));  // Output: "Hello wo"
    return 0;
}