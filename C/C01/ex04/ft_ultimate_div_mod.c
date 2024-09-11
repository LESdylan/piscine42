/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:24:34 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/04 13:55:22 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int     main(void)
{
		int x = 10;
		int y = 5;
	   int *a = &x;
	   int *b =&y;
	   ft_ultimate_div_mod(a, b);
	   printf("a = %d \n b = %d \n", *a, *b);
}
*/