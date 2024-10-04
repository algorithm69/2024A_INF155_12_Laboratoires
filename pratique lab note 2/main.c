#include <stdio.h>

int main(void) {
    int n;
    double min, max, somme = 0;
    double x;

    //  Saisie du nombre de nombres
    printf("Entrer un entier ? ");
    scanf(" %d", &n);

    //  Saisie des n nombres reels
    for (int i = 0; i < n; i++) {
        printf("  Un nombre reel ? ");
        scanf(" %lf", &x);

        //  mise a jour des extrema
        if (i == 0) {
            min = x;
            max = x;
        } else {
            if (x < min) {
                min = x;
            }
            if (x > max) {
                max = x;
            }
        }

        //  accumulation dans la somme
        somme += x;
    }

    // Affichage des resultats
    printf("Le plus petit est : %lf\n", min);
    printf("Le plus grand est : %lf\n", max);
    printf("La moyenne est : %lf\n", somme / n);

    return 0;
}
