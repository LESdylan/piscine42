/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 02:11:48 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/10 16:34:51 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
    char alpha = 'A';
    int x; 
    char *pa;
    pa = &alpha;

    x = -1;
    while(++x < 26)
        putchar((*pa)++);
    putchar('\n');
    return 0;
}
/*
int	main(void)
{
	ft_print_alphabet();
	return 1;
}
*/