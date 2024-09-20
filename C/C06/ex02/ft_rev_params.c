/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 00:08:31 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/20 00:39:51 by dylan-soul       ###   ########.fr       */
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
    i = argc - 1;
    while(i > 0)
    {
        x = 0;
        while(argv[i][x] != '\0')
        {
            ft_putchar(argv[i][x]);
            x++;
        }
        if(i > 1)
            ft_putchar(' ');
        
        i--;
    }
    
    ft_putchar('\n');
    return 0;
}