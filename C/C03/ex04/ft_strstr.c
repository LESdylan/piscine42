/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:36:22 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/10 18:16:54 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// version 3 
char * ft_strstr(char *str, char *to_find)
{
    while(*str != '\0' && *str == *to_find)
    {
        char *start = str;
        char *substring = to_find;
        while(*substring && *str == *substring)
        {
            str++; 
            substring++;
        }
        if(*substring == '\0')
            return start;
            
        str = start;
        
        str++;
    }
    return NULL;
}



// version 2
/*
char    *ft_strstr(char *str, char *to_find)
{
    while(*str != '\0')
    {
        if(*str == *to_find)
        {
            char *start = str;
            char *substring = to_find;
        
        
        while(*substring && *str == *substring )
        {
            str++;
            substring++;
        }
        if(*substring == '\0')
            return start;
        str = start;
        }
        
        str++;
    }
    return NULL;
}

*/











/*1st version */
/*
char    *ft_strstr(char *str, char *to_find)
{
    int i, j;
    i = 0;
    while(str[i] !='\0')
    {
        if(str[i] == to_find[0])
        {
            j = 0;
            while (to_find[j] != '\0' && str[i + j] == to_find[j])
                j++;
            if(to_find[j] == '\0')
                return &str[i];
        }
        
        i++;
    }
    return NULL;
}
*/
int main() {
    // Test cases
    char *haystack = "Hello, world!";
    char *needle = "wo";

    char *result = ft_strstr(haystack, needle);

    if (result != NULL) {
        printf("Found: '%s'\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}
