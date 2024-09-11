/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:45:28 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/04 13:53:54 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a = 10;
	int b = 5;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("the pointer *div hold the value 
	 %d \n the pointer *mod hold the value %d\n", div, mod);
}
*/