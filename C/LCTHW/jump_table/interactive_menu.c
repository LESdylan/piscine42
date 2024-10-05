#include <stdio.h>
#include <stdlib.h>

// function prototypes for each state
void    action_1();
void    action_2();
void    action_quit();
void    historical(int number_saved);
void    display_historical();

// Variable globale pour l'historique
int historic[50] = {0};  // Tableau pour stocker l'historique des sommes
int i = 0;               // Compteur pour le nombre d'éléments dans l'historique

int main(void)
{
    // Tableau de pointeurs de fonctions
    void(*menu_actions[4])() = {action_1, action_2, action_quit, display_historical};
    int input;

    while(1)
    {
        printf("Menu:\n");
        printf("1. Afficher un message\n");
        printf("2. Calculer la somme de deux nombres\n");
        printf("3. Quitter\n");
        printf("4. Afficher l'historique\n");
        printf("Choisissez une option [1-4]: ");
        scanf("%d", &input);

        if(input < 1 || input > 4)
        {
            printf("Choix invalide, veuillez réessayer.\n");
            continue;
        }

        // Appel de la fonction correspondante au choix
        menu_actions[input - 1]();

        // Quitter si l'utilisateur choisit 3
        if(input == 3)
            break;
    }
    return 0;
}

void action_1(void)
{
    printf("Welcome to the menu\n");
}

void action_2() {
    int number, number2, result_number;
    int result;

    printf("Donnez deux nombres (entre 0 et 255) : ");

    // Utilisation de scanf et vérification du nombre de valeurs correctement lues
    result = scanf("%d %d", &number, &number2);

    // Si scanf ne retourne pas 2, cela signifie qu'une mauvaise entrée a été saisie
    if (result != 2) {
        // Vider le buffer d'entrée pour éviter un comportement indéfini lors de la prochaine lecture
        while (getchar() != '\n');  // On nettoie le buffer
        printf("Erreur : vous devez entrer des nombres valides.\n");
        return;  // Sortir de la fonction
    }

    // Vérifier si les nombres sont dans la plage 0-255
    if ((number < 0 || number > 255) || (number2 < 0 || number2 > 255)) {
        printf("Erreur : les deux nombres doivent être compris entre 0 et 255.\n");
    }
    else
    {
        result_number = number + number2;
        printf("La somme de %d et %d est %d\n", number, number2, result_number);
        historical(result_number);  // Ajouter la somme à l'historique
    }
}

void action_quit()
{
    printf("Au revoir !\n");
    exit(0); // sort de la boucle while(1)
}

void historical(int number_saved)
{
    // Ajout d'un nombre dans l'historique
    if(i < 50) {
        historic[i++] = number_saved;
        printf("Nombre %d ajouté à l'historique.\n", number_saved);
    } else {
        printf("Historique plein, impossible d'ajouter %d.\n", number_saved);
    }
}

void display_historical() {
    // Affichage de l'historique
    if (i == 0) {
        printf("L'historique est vide.\n");
    } else {
        printf("Historique :\n");
        for (int j = 0; j < i; j++) {
            printf("%d ", historic[j]);
        }
        printf("\n");
    }
}

