/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert2decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:41:42 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/06 17:39:14 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int convert_decimal(char *str, unsigned int n)
{
    char *pointer_end = str + (n - 1);
    int num = 0;
    int p2 = 1;
    while(pointer_end >= str)
    {
        if(*pointer_end == '1')
            num += p2;
        p2 *= 2;
        pointer_end--;
    }
    return num;
}

int main(void)
{
    char *str = "1101";
    unsigned int length = 4;
    printf("%d\n", convert_decimal(str, length));
    return 0;
}