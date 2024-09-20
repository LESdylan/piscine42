/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 23:55:27 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/20 00:06:34 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);   
}
int main(int argc, char **argv)
{
    int i;
    int x;
    i = 1;
    while(i < argc)
    {
        x = 0;
        while(argv[i][x] != '\0')
        {
            ft_putchar(argv[i][x]);
            x++; 
        }
        ft_putchar('\n');
        i++;
    }
}