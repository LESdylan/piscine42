/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:01:16 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/16 01:24:49 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*str == '\r' || *str == '\f' || *str == '\n'
		|| *str == '\t' || *str == '\v' || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 +(*str - '0');
		str++;
	}
	if (sign % 2 != 0)
		res = -res;
	return (res);
}

/*
int main(void)
{
	char *str = "          +-+---+--12345-6545";
	printf("the number is : %d", ft_atoi(str));
}
*/