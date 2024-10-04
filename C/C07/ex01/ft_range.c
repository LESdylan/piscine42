/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:02:59 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/21 20:07:08 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> // For malloc

int ft_iterative_power(int nb, int power)
{
    int i; 
    i = 1;
    int pow = 1;
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    while (i <= power)
    {
        pow = pow * nb;
        i++; 
    }
    return pow;
}

int *ft_range(int min, int max)
{
    if (min >= max)
        return NULL;

    // Allocate memory for the range [min, max)
    int *range = (int *) malloc((max - min) * sizeof(int));
    if (range == NULL)
        return NULL; // Check for allocation failure

    int i = 0;
    while (min < max)
    {
        range[i] = min; // Store the value
        min++;
        i++;
    }
    return range;
}

int main(void)
{
    int min = -10;
    int max = 10;
    int *result = ft_range(min, max);

    if (result == NULL)
    {
        printf("Memory allocation failed or invalid range.\n");
        return 1;
    }

    // Print the array values
    for (int i = 0; i < (max - min); i++)
    {
        printf("result[%d] = %d\n", i, result[i]);
    }

    free(result);
    return 0;
}
