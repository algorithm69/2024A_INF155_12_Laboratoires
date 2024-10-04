#include <stdio.h>

//  Declarations des fonctions autres que le main
int fois(int facteur1, int facteur2);

void pile(int n);

//  Definition de la fonction main
int main(void) {
    int a = 4, b = 6;

    printf("%d x %d = %d\n", a, b, fois(a, b));

    pile(235);
    
    return 0;
}

//  Definitions des fonctions autres que le main
int fois(int facteur1, int facteur2) {
    return facteur1 * facteur2;
}

void pile(int n) {
    pile(87);
}

