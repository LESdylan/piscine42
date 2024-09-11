/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 02:24:43 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/02 15:18:35 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	k;
	int	w;

	i = '0';
	while (i <= '7')
	{
		k = i + 1;
		while (k <= '8')
		{
			w = k + 1;
			while (w <= '9')
			{
				write(1, &i, 1);
				write(1, &k, 1);
				write(1, &w, 1);
				if (i != '7' || k != '8' || w != '9')
					write(1, ", ", 2);
				w++;
			}
			k++;
		}
		i++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return 0;
}*/