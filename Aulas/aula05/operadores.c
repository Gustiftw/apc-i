#include <stdio.h>
#include <math.h> //biblioteca de matematica
int main(){

    int numero1 = 10;
    int numero2 = 20;

    //operadores lógicos
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = numero1 / (numero2 * 1.0);
    int resto_da_divisao = numero1 % numero2;
    
    printf("A soma de %i com %i eh %i\n", numero1, numero2, soma);
    printf("A subtracao de %i por %i eh %i\n", numero1, numero2, subtracao);
    printf("A multiplicacao de %i com %i eh %i\n", numero1, numero2, multiplicacao);
    printf("A divisao de %i por %i eh %i\n", numero1, numero2, divisao);
    printf("O resto da divisao de %i por %i eh %i\n", numero1, numero2, resto_da_divisao);

    //operadores incremento e decremento
    int incremento = numero1;
    int decremento = numero2;
    incremento++; //numero1 = numero1 + 1;
    decremento--; //numero1 = numero1 - 1;
    int pre_incremento = numero1;
    int pos_incremento = numero1;

    printf("O incremento de %i eh %i\n", numero1, incremento);
    printf("O decremento de %i eh %i\n", numero1, decremento);
    printf("O pos_incremento de %i eh %i\n", numero1, pos_incremento++);
    printf("O pos_incremento agora eh %i\n", pos_incremento);

    //operadores relacionais
    int menor_que = numero1 < numero2;
    int menor_ou_igual = numero1 <= numero2;
    int maior_que = numero1 > numero2;
    int maior_ou_igual = numero1 >= numero2;
    int igual = numero1 = numero2;
    int diferente = numero1 != numero2;

    // 0 - falso, 1 - verdadeiro
    printf("O numero %i eh menor que %i? %i\n", numero1, numero2, menor_que);
    printf("O numero %i eh menor ou igual a %i? %i\n", numero1, numero2, menor_ou_igual);
    printf("O numero %i eh maior que %i? %i\n", numero1, numero2, maior_que);
    printf("O numero %i eh diferente de %i? %i\n", numero1, numero2, diferente);

    float media = 4.9f;
    float falta = 0.25f;
    int operador_E = media >= 5.0f && falta <= 0.25f;
    printf("Passei? %i\n", operador_E);
    int operador_OU = media = 5.0f || falta <= 0.25f;
    printf("Passei? %i\n", operador_OU);
    int operador_NAO = ! (media >= 5.0f);
    printf("Passei? %i\n", operador_NAO);

    // 0 < numero < 10 na metmatica
    // 0 < numero && numero < 10 na programacao
    // Falso e Qualquer coisa é falso 
    // Verdadeiro OU Qualquer coisa é verdadeiro

    // Funções da Matematica
    // Raiz quadrada, Potencia, Logaritmo, Exponecial,
    //Tangente, Seno, Coseno

    // #include <math.h> biblioteca de matematica

    double PI = 3.1415;
    double raiz_quadrada_de_2 = sqrt(2);
    double potencia_de_3 = pow(2, 3);
    double logaritmo_base10 = log10(2);
    double exponencial = exp(2);
    double cosseno_90 = cos(90 * (PI / 180)); // converter p/ radiano

    printf("A raiz quadrada de 2 = %.2f\n", raiz_quadrada_de_2);
    printf("A potencia de 2 elevado a 3 = %.0f\n", potencia_de_3);
    printf("O logartimo de 2 na base 10 = %.2f\n", logaritmo_base10);
    printf("A exponencial de 2 = %.2f\n", exponencial);
    printf("O cosseno de 90 = %.2f\n", cosseno_90);

    //Precedencia
    // 0. ()
    // 1. * / %
    // 2. + -
    int expressao1 = 2 - 5 / 3 * 4 + 1;
    // 5 / 3 = 1, 2 - 1 * 4 + 1
    // 1 * 4 = 4, 2 - 4 + 1
    // 2 - 4 = -2 + 1
    // 2 - 4 = -2 + 1
    // -1
    int expressao2 = 2 - 5 / (3 * 4) + 1;
    // (3 * 4) = 12, 2-5 / 12 + 1
    // 5 / 12 = 0, 2 - 0 + 1
    // 2 - 0 = 2, 2 + 1
    // 2 + 1 = 3
    printf("A expressao 2 - 5 / 3 * 4 + 1 = %i\n", expressao1);
    printf("A expressao 2 - 5 / (3 * 4) + 1 = %i\n", expressao2);


 

    return 0;
}