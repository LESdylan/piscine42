/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:21:13 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/21 14:02:03 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char    *ft_strdup(const char *src)
{
    int i;
    char *str = (char *) malloc((strlen(src)+1)*sizeof(char));
    i = 0;
    if(!str)
    {
        return (0);
    }
    while(*(src + i) != '\0'){
        *(str + i) = *(src + i);nb
        i++;
    }
    *(str + i) = '\0';
    return str;
}


int main(void)
{
    const char *src = "hello world";
    char *duplicate = ft_strdup(src);
    if(duplicate)
        printf("here is the result duplicated : %s", duplicate);
    else
        puts("Memory allocation failed\n");
    free(duplicate);

    return 0;
}

