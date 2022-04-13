#include<stdio.h>
#include<stdlib.h>
int main(){
    float numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;

    printf("***Calculadora Modelo 1***\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    soma=numero1+numero2;
    subtracao=numero1-numero2;
    multiplicacao=numero1*numero2;
    divisao=numero1/numero2;

    printf("Numero 1: %.2f\n", numero1);
    printf("Numero 2: %.2f\n", numero2);
    printf("Soma: %.2f\n", soma);
    printf("Subtracao entre o numero 1 e o numero 2: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);
    printf("Divisao entre o numero 1 e o numero 2: %.2f\n", divisao);
    system("Pause");
    return 0;
}