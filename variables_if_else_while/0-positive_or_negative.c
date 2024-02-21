#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)  
{
    int n;
    srand(time(NULL)); // Initialise le générateur de nombres aléatoires avec le temps actuel
    n = rand() % RAND_MAX; // Génère un nombre aléatoire entre 0 et RAND_MAX

    printf("Le nombre est : %d\n", n); // Affiche le nombre généré

    // Vérifie si le nombre est positif, négatif ou zéro
    if (n > 0) {
        printf("Le nombre est positif\n");
    } else if (n == 0) {
        printf("Le nombre est zéro\n");
    } else {
        printf("Le nombre est négatif\n");
    }

    return 0;
}
