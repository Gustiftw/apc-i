#include <stdio.h>

int main(){
    // + soma
    // - subtracao
    // * multiplicacao
    // / divisao
    // % resto da divisao

    int numero1 = 10;
    int numero2 = 20;
    int soma = numero1 + numero2;
    printf("a soma de %i e %i = %i\n", numero1, numero2, soma);

    int subtracao = numero1 - numero2;
    printf("a subtracao de %i e %i = %i\n", numero1, numero2, subtracao);

    int multiplicacao = numero1 * numero2;
    printf("a multiplicacao de %i e %i =%i\n", numero1, numero2, multiplicacao);

    float divisao = numero1 * 1.0f / numero2;
    printf ("a divisao de %i e %i =%.if\n", numero1, numero2, divisao);


    int resto = numero1 % numero2; 
    printf("a resto de %i e %i = %i\n", numero1, numero2, resto);

    printf("incremento = %i\n", ++numero);
    printf("decremento = %i\n", --numero);
    printf("pos-incremento = %i\n", numero++);
    printf("pos-decremento =  %i\n", numero--);
        printf("o numero %i eh menor que %i? %i\n",numero1, numero2, menor_que);
            prinf("o numero %i eh menor que %i? %i\n", numero1, numero2, menor_ou_igual);
                printf("o numero %i eh menor que %i? %i\n", numero1, numero2, maior_que);
                    printf("o numero %i eh menor que %i? %i\n", numero1, numero2, igual);
                        printf("o numero %i eh menor que %i? %i\n", numero1, numero2, diferente);
                        
    return 0;
}