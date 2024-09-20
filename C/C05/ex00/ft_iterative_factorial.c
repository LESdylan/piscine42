/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 08:14:56 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/16 08:43:47 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 0;
	fact = 1;
	while (++i <= nb)
		fact = fact * i;
	return (fact);
}
/*
int main(void)
{
	int nb = 12;
	printf("%d", ft_iterative_factorial(nb));   
}
*/