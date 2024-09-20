/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:51:51 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/16 14:19:58 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
    int i; 
    i = 0;
    int inf = nb;
    if(power < 0)
        return 0;
    if((power == 0 && nb == 0))
        return 1;
    if(power == 1)
        return nb;
    while(i < power)
    {
        inf = inf * nb;
        i++; 
    }
    return inf;
}

int main(void)
{
       int nb = 2;
       int power = 4;
       printf("%d\n",ft_iterative_power(2,5));
       return 0;
}