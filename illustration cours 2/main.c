#include <stdio.h>
#include <time.h>

void exercice8() {
    //Écrivez un programme qui saisit deux nombres entiers
    // au clavier et qui affiche le plus grand de ces deux nombres.

    //  Delcaration des variables dans lesquelles on placera les
    //  2 nombres saisis au clavier
    int nombre1, nombre2;
    int plus_grand = 666; //  contiendra la maximum des 2 nombres

    //  Saisie des 2 nombres
    printf("Entrez le premier nombre ? ");
    scanf("%d", &nombre1);

    printf("Entrez le second nombre ? ");
    scanf("%d", &nombre2);

    //  Calcul du plus grand
    if (nombre1 > nombre2) {
        plus_grand = nombre1;
    }
    else if (nombre2 > nombre1){
        plus_grand = nombre2;
    };

    //  Afficher la plus grand
    printf("max(%d, %d) = %d\n", nombre1, nombre2, plus_grand);
}


int main(void) {
    exercice8();

    return 0;
}
