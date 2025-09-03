#include <stdio.h>

int main()
{
    printf("==============================\n");
    printf("     N O T A    L E G A L\n");
    printf("==============================\n");
    printf("Produto      Qtd Valor Unit\n");
    printf("%-12s %03i %13.2f\n", "Camiseta" , 002 , 39.99);
    printf("%-12s %03i %13.2f\n", "Calça" , 001 , 89.90);
    printf("%-12s %03i %13.2f\n", "Meia Social" , 003 , 19.99);
    printf("==============================\n");
    printf("Total:                  229.85\n");
    return 0;
}