#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void exemple_decalage_bit_a_bit() {
    char n = 52;

    printf("n << 2 = %d\n", n << 2);

    char m = n << 2;
    printf("m = %d\n", m);
}

void exemple_boucle_do_while() {
    char choix;
    int choix_correct;

    do {
        printf("Votre choix (A ou B ou C) ? ");
        scanf(" %c", &choix);

        choix_correct = choix == 'A' || choix == 'B' || choix == 'C';
        if (!choix_correct) {
            printf("Votre choix doit etre l'une des lettres A, B ou C.\n");
        }
    } while (!choix_correct);


    printf("Vous avez choisi %c !\n", choix);
}

void exemple_boucle_for() {
    int limite;
    printf("Limite ? ");
    scanf(" %d", &limite);

    printf("Je vais faire %d tours de boucle...\n", limite);

    for (int i = 0; i < limite; i++) {
        printf("Je suis tanant!\n");
    }
}

void exemple_factorielle() {
    int factorielle = 1;
    int nombre;

    printf("Saisir un nombre ? ");
    scanf(" %d", &nombre);

    for (int facteur = 2; facteur <= nombre; facteur++) {
        factorielle *= facteur;
        facteur = 100;
    }

    printf("%d! = %d\n", nombre, factorielle);
}

unsigned int f(unsigned int u_n) {
    return (1103515245 * u_n + 12345) % (RAND_MAX + 1);
}

int main(void) {
//    exemple_boucle_do_while();
//    exemple_boucle_for();
//    exemple_factorielle();

    unsigned int u = 0;
    for (int i = 0; i < 5; i++) {
        u = f(u);
        printf("%d\n", u);
    }
    printf("-----------------\n");

    srand(0);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }

    return 0;
}
