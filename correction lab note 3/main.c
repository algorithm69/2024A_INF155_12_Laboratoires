#include <stdio.h>
#include <math.h>

double my_log_with_pow(double x, int n);    //  utilisation de la fonction pow de math.h
double my_log_without_pow(double x, int n); //  sans utilisation de la fonction pow

int main() {
    printf("%d\n", '\n');

    double x;
    int n;

    scanf("%lf", &x);
    scanf("%d", &n);

    printf("%.5lf\n", my_log_with_pow(x, n));
    printf("%.5lf\n", my_log_without_pow(x, n));

    return 0;
}

 double my_log_with_pow(double x, int n) {
     double somme = 0;

     for(int k=1; k<=n; k++) {
         double terme = pow(-1, k+1) * pow(x, k)/k;
         somme += terme;
     }

     return somme;
 }

double my_log_without_pow(double x, int n) {
    double somme = 0;

    double signe = +1;
    double puiss_x = x;
    for(int k=1; k<=n; k++) {
        double terme = signe * puiss_x/k;
        somme += terme;


        signe *= -1;
        puiss_x *= x;
    }

    return somme;
}
