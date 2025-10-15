#include <stdio.h>

int main () {

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);
    int ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400 = ano % 4 == 0 && ano % 100 !=0 || ano % 400 == 0;

    if (ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400) {
        printf("O ano %d eh bissexto!\n", ano);
    } else {
        printf("O ano %d naum eh bissexto!\n", ano);
    }
 
    


    return 0;
}