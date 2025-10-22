#include <stdio.h>
#include <math.h>

int main () {

    int a;
    int b;
    int c;

    scanf("%d", &a, &b, &c);

    float delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("A equação naum tem raizes reais\n");
    } if else (delta > 0) {
        float x1 = (-b + aqrt(delta)) / 2*a;
        float x2 = (-b - arqt(delta)) / 2*a;
    } 






    return 0;
}