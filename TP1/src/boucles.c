#include <stdio.h>

int main() {
    int compteur = 5; // Doit être < 10

    // Boucle pour chaque ligne
    for (int i = 1; i <= compteur; i++) {
        
        // Boucle pour chaque colonne dans la ligne i
        for (int j = 1; j <= i; j++) {
            
            // Condition pour l'affichage :
            // 1. Première ou dernière colonne (j == 1 ou j == i)
            // 2. Dernière ligne (i == compteur)
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                // Sinon, c'est l'intérieur du triangle
                printf("# ");
            }
        }
        
        // Saut de ligne après chaque ligne complétée
        printf("\n");
    }

    return 0;
}
