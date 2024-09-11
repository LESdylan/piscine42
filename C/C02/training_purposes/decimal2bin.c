/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal2bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:24:48 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/06 16:41:10 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);   
}

void ft_putnbr_binary(int n)
{
    if (n > 1)
        ft_putnbr_binary(n / 2);  // Recursively call with n / 2
    ft_putchar((n % 2) + '0');     // Print the last binary digit (either 0 or 1)
}

int main(void)
{
    int n = 13;
    ft_putnbr_binary(n);
    ft_putchar('\n'); // Add a newline for clarity
    return 0;
}
