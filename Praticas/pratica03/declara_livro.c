#include <stdio.h>
int main (){
    char isbn [] = "0000000000000";
    char num_paginas [] = "000";
    double preco = 0000.00;
    char publicado [] = "0000";

    printf("ISBN: %s\n", isbn);
    printf("Num.Paginas: %s\n", num_paginas);
    printf("Preco: R$ %07.2f\n", preco);
    printf("Publicado em: %s\n", publicado);


    return 0;
}