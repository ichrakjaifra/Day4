#include <stdio.h>

void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// Algorithme de tri à bulles
void triBulles(int tableau[], int taille) {
    int temp;
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[] = {64, 34, 25, 12, 22, 11, 90};
    int taille = 7;

    printf("Tableau avant tri :\n");
    afficherTableau(tableau, taille);

    triBulles(tableau, taille);

    printf("Tableau apres tri :\n");
    afficherTableau(tableau, taille);

    return 0;
}