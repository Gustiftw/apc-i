#include <stdio.h>
int main () {
    char matricula [] = "0000000";
    int idade = 99;
    double altura = 9.9;
    double peso = 999.0;
    char sexo =  'F';

    printf("Matricula: %s\n", matricula);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("Sexo: %c\n", sexo);



    return 0;
}