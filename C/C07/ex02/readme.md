Il y a plusieurs erreurs dans ton code concernant la gestion des pointeurs, la syntaxe et la manière dont la mémoire est allouée dans la fonction ft_ultimate_range.

Voici les problèmes principaux et ce qu'il faut corriger :

Problèmes dans ft_ultimate_range :
Allocation incorrecte de la mémoire :

Dans la ligne suivante :

c
Copiar código
**range = (int **)malloc((max - min) * sizeof(int));
Il y a une erreur de syntaxe et de logique. Ce que tu veux faire, c'est allouer de la mémoire pour un tableau d'entiers, et non pour un tableau de pointeurs sur pointeurs.

La bonne allocation serait :

c
Copiar código
*range = (int *)malloc((max - min) * sizeof(int));
Retour de la taille :

Le code return sizeof(range); retourne la taille du pointeur, et non la taille du tableau alloué. Ce que tu veux, c'est retourner la taille réelle, qui est simplement max - min.
Déréférencement incorrect dans la boucle :

La ligne **(range + i++) = min++; est incorrecte, car range est un double pointeur, et tu devrais utiliser (*range)[i] pour accéder aux éléments du tableau.
Cas où min >= max :

Si min >= max, tu devrais retourner 0, et non NULL, pour indiquer qu'il n'y a pas de valeurs dans la plage.
Correction de ft_ultimate_range :
Voici une version corrigée de la fonction ft_ultimate_range :

c
Copiar código
#include <stdlib.h>

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
Explication des changements :
Allocation de mémoire correcte :

*range = (int *)malloc((max - min) * sizeof(int)); alloue correctement un tableau d'entiers.
Vérification de min >= max :

Si min >= max, on assigne NULL à *range et on retourne 0, car il n'y a pas de plage valide.
Remplissage correct du tableau :

La boucle remplit le tableau avec les valeurs comprises entre min et max.
Retour de la taille :

La fonction retourne la taille du tableau (le nombre d'éléments), soit max - min.
Mise à jour de la fonction main :
c
Copiar código
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
Explication de main :
Appel à ft_ultimate_range :

Nous passons l'adresse de result à la fonction.
Gestion de l'erreur d'allocation :

Si ft_ultimate_range retourne -1, on sait que l'allocation mémoire a échoué.
Affichage du tableau :

Nous affichons les valeurs stockées dans le tableau alloué par ft_ultimate_range.
Libération de la mémoire :

Il est important de libérer la mémoire après l'utilisation du tableau.
Avec ces corrections, ton programme devrait correctement allouer et remplir un tableau d'entiers entre min et max, tout en respectant les conditions de l'exercice.