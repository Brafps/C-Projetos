#include<stdio.h>
int main(){
    int numero, resto;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    resto=numero%2;
    printf("Resto da divisao por 2 é: %d\n", resto);
    return 0;
}