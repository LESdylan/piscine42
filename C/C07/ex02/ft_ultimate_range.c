/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:07:53 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/21 20:37:59 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    if (min >= max)
    {
        *range = NULL;
        return 0;
    }

    *range = (int *)malloc((max - min) * sizeof(int));
    if (*range == NULL)
        return -1; // Indiquer une erreur si l'allocation échoue

    i = 0;
    while (min < max)
    {
        (*range)[i] = min; // Stocker la valeur dans le tableau
        min++;
        i++;
    }
    
    return i; // Retourner la taille du tableau, soit max - min
}

int main(void)
{
    int min = -10;
    int max = 10;
    int *result;
    int size;

    size = ft_ultimate_range(&result, min, max);

    if (size == -1)
    {
        // Gestion de l'erreur d'allocation
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Affichage du résultat
    for (int i = 0; i < size; i++)
    {
        printf("result[%d] = %d\n", i, result[i]);
    }

    // Libération de la mémoire allouée
    free(result);
    return 0;
}


/*
#include <stdlib.h>
int *ft_range(int min, int max)
{
    if (min >= max)
        return NULL;

    int *range = (int *) malloc((max - min) * sizeof(int));
    if (range == NULL)
        return NULL;

    int i = 0;
    while (min < max)
    {
        range[i] = min;
        min++;
        i++;
    }
    return range;
}

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    i = 0;
    if(min > max)
        return 0;
    **range = (int *)malloc((max - min) * sizeof(int)); // (int **) on ne veut pas allouer de lamémoire pour un tableau de pointeurs sur pointeurs
    if(range == NULL)
        return 0;
    while(min < max)
        (*range)[i] = min++; // range double pointer
    return (max - min);
}

int main(void)
{
    int min = -10;
    int max = 10;
    int *result = ft_range(min, max);
    int **result2 = &result;
    ft_ultimate_range(result2, min, max);
    
    return 0;
}
*/