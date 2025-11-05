#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c;
    double delta, x1, x2;

    printf("Digite os valores de a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Lidos: a = %.2lf, b = %.2lf, c = %.2lf\n", a, b, c);


    delta = b*b - 4*a*c;
    printf("Delta = %.2lf\n", delta);

    if (delta < 0) {
        printf("A equaçao naum tem raizes reais\n");
    } 
    else if  (delta == 0) 
    { x1 = -b / (2 * a);
    printf("Existe uma raiz real : x = %.2lf\n", x1);
    } else {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As duas raizes reais sao:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } 


    




    return 0;
}