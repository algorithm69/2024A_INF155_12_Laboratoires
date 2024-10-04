#include <stdio.h>

int main() {
    //  Declaration des variables
    double somme = 0;
    int nb = 0;
    double prix;

    //  Saisie des prix des produits
    do {
        scanf("%lf", &prix);

        if (prix != 0) {
            somme += prix;
            nb++;
        }
    } while (prix != 0);

    //  Affichage des resultats
    if (nb == 0) {
        printf("Aucun article achete.\n");
    } else if (nb == 1) {
        printf("1 article achete pour un montant total de %.2lf$.", somme);
    } else {
        printf("%d articles achetes pour un montant total de %.2lf$.", nb, somme);
    }
}