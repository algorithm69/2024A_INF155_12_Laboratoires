#include <stdio.h>
#include <malloc.h>

void min_max(int a, int b, int *ptr_min, int *ptr_max) {
    if (a < b) {
        *ptr_min = a;
        *ptr_max = b;
    } else {
        *ptr_min = b;
        *ptr_max = a;
    }
}

int main(void) {
    int tableau[10] = {};

    printf("%p\n", tableau);
    printf("%p\n", &tableau);
    printf("%p\n", &tableau[0]);
    printf("%p\n", &tableau[1]);


    short n;
    int taille_n = sizeof(n);
    printf("Sizeof(n) = %d\n", taille_n);
    printf("Sizeof(int) = %lu\n", sizeof(int));


    int m; //un entier
    int *m_ptr = &m; //un pointeur qui adresse m
    printf("beta  = %p\n", &m_ptr);
    printf("alpha = %p\n", m_ptr);


    int a = 214, b = 2435;
    int min, max;

    min_max(a, b, &min, &max);

    printf("min = %d\n", min);
    printf("max = %d\n", max);

    return 0;
}
