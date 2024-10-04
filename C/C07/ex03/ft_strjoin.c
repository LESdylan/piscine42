/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:39:00 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/21 21:16:31 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char **strs, int size)
{
    int i = 0, j = 0, x = 0;
    int total_len = 0;

    // Calculer la taille totale nécessaire pour stocker la chaîne concaténée
    for (i = 0; i < size; i++)
    {
        for (j = 0; strs[i][j]; j++)
        {
            total_len++;
        }
    }

    // Allouer de la mémoire pour la nouvelle chaîne (total_len + 1 pour '\0')
    char *new_str = (char *)malloc((total_len + 1) * sizeof(char));
    if (!new_str)
        return NULL; // Retourner NULL en cas d'échec d'allocation

    i = 0;
    x = 0;

    // Copier les chaînes dans la nouvelle chaîne
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            new_str[x] = strs[i][j];
            j++;
            x++;
        }
        i++;
    }
    new_str[x] = '\0'; // Ajouter le caractère de fin de chaîne

    return new_str;
}

int main(void)
{
    // Déclaration correcte d'un tableau de chaînes
    char *strs[] = {"hello", " ", "world"};
    int size = 3;

    char *result = ft_strjoin(strs, size);
    if (result)
    {
        printf("The concatenated string is: %s\n", result);
        free(result); // Libérer la mémoire allouée
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
