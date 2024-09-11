/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:24:28 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/04 13:53:04 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int a = 25;
	int b = 50;
	int *x = &a;
	int *y = &b;
	printf("the value of x is : %d\t the value of y is : %d\n", *x, *y);
	ft_swap(x, y);
	printf("the value of x is : %d\t the value of y is : %d\n", *x, *y);
	return 0;
}
*/