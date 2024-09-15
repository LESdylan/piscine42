/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:42:46 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/15 19:59:50 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	divider;

	divider = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (nb / divider > 9)
		divider *= 10;
	while (divider)
	{
		ft_putchar((nb / divider) % 10 + '0');
		divider /= 10;
	}
}
/*
int main()
{
	//ft_putnbr(111);
	//ft_putnbr(225);
	ft_putnbr(548);
	return 0;
}
*/