/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 08:44:34 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/16 12:51:18 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_factorial(int nb)
{
    if(nb == 0)
            return 1;
    else
        return ft_recursive_factorial(nb - 1) * nb ;
}

/*
int main(void)
{
    int money = 3;
    printf("%d",ft_recursive_factorial(money));
    return 0;
}
*/