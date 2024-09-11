/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:20:12 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/05 14:00:52 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * pointer arithmetic
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while(*src)
        *(dest + i++) = *src++;
    *(dest + i) = '\0';
    return (dest);   
}

#define BUF_SIZE 100

int main(void)
{
    char    srcBuffer[256];
    char    destBuffer[BUF_SIZE];
    char    c;
    int     i;
    
    i = 0;
    
    for(int j=0; j<10; j++)
    {
        //Create a random string in srcBuffer
        while((c = rand()%27+97)!=123)
            srcBuffer[i++] = c;
        //My final sentinel
        srcBuffer[i] = 0;
        //Refresh i for next iteration
        i = 0;
        
        //Check if algo correct
        puts("RANDOM STRING SOURCE");
        //Ternary operator
        (*srcBuffer) ? printf("%s SIZE -> %lu\n", srcBuffer, strlen(srcBuffer)) : puts("empty string");
        
        // I can feed directly the function to printf, cause return value is dest
        printf("DEST BUFFER SIZE -> %d\n", BUF_SIZE);
        printf("\nFrom the original function ->                        DEST = %s\n", strcpy(destBuffer, srcBuffer));
        
        //clean the buffer
        for(int i = 0; i<BUF_SIZE; ++i)destBuffer[i] = 0;
        printf("From my function->                                     DEST = %s\n\n\n", ft_strcpy(destBuffer, srcBuffer));
        printf("-------------------------------------------\n\n");
    }
}