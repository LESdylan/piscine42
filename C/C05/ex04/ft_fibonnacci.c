/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnacci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:21:42 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/16 18:49:59 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;
    else if(index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
     
}
/*
int main(void)
{
    int index = 6;
    printf("the value fibonnacci is : %d", ft_fibonacci(index));
    return 0;
}
*/