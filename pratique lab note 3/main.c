#include <stdio.h>
#include <math.h>

//  Declaration des fonctions autres que le main
double f(double x);

double integrale(double a, double b, int n);

//  Definition de la fonction main
int main(void) {
    double a = 0;
    double b = M_PI;
    double n = 100000;

    printf("integrale = %lf\n", integrale(a, b, n));

    return 0;
}

//  definition des fonctions autres que le main
double f(double x) {
//    return x * x;
    return sin(x);
}

double integrale(double a, double b, int n) {
    double aire = 0;

    //  parcours des n bandes
    for (int i = 0; i < n; i++) {
        //  ajout de la surface de la xi_eme bande
        double x = a + i * (b - a) / n;
        aire += f(x) * (b - a) / n;
    }

    return aire;
}

