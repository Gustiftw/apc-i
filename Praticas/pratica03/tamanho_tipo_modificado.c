#include <stdio.h> 
int main(){
    printf("O tipo 'short int' ocupa %iu byte(s) na memoria.\n", sizeof(short int));
    printf("O tipo 'long int'  ocupa %iu byte(s) na memoria.\n", sizeof(long int));
    printf("O tipo 'long long int' %iu byte(s) na memoria.\n", sizeof(long long int));
    printf("O tipo 'long double' ocupa %1u byte(s) na memoria.\n", sizeof(long double));

    return 0;
}