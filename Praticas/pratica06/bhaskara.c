#include <stdio.h>
#include <math.h>

int main () {

    int a;
    int b;
    int c;

    printf("Insira o valor de a\n ", a);
    scanf("%d", &a);
    printf("Insira o valor de b\n ", b);
    scanf("%d", &b);
    printf("Insira o valor de c\n ", c);
    scanf("%d", &c);

    float delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("A equação naum tem raizes reais\n");
    } 
    else (delta > 0); 
    {
        float x1 = (-b + sqrt(delta)) / 2*a;
        float x2 = (-b - sqrt(delta)) / 2*a;
        printf("o valor da 1 raiz eh: %d\n", x1);
        printf("o valor da 2 raiz eh: %d\n", x2);
    } 


    




    return 0;
}