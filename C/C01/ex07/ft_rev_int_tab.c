/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:24:41 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/04 15:38:22 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int *ptr_start;
    int *ptr_end;
    int temp;

    ptr_start = tab;
    ptr_end = tab + (size - 1);
    // I need to compare the pointer themselves
    while (ptr_start < ptr_end)
    {
        temp = *ptr_start;
        *ptr_start = *ptr_end;
        *ptr_end = temp;
        ptr_start++;
        ptr_end--;
    }
}
/*
int main(void)
{
    int size = 6;
    int tab[6] = {1,2,3,4,5,6};
    
    int i =0;
    while(i < size)
    {
        printf("%d\t", tab[i]);
        i++;
    }
    printf("\n");
    i = 0;
    ft_rev_int_tab(tab, size);
    while(i < size)
    {
        printf("%d\t", tab[i]);
        i++;
    }
    printf("\n");
    return 0;
}
*/