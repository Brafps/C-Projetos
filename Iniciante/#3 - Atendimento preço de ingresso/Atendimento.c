#include<stdio.h>
#include<stdlib.h>
int main(){

    printf("\n----------------------------------------------------\n");
    printf("-                     Cinema                       -\n");
    printf("----------------------------------------------------\n\n");
    int filme, qtd;
    double ValorTotal, ValorDoIngresso = 12.50;
    printf("Ola, Escolha abaixo o numero referente ao seu filme.\n O ingresso custa R$ %.2f\n", ValorDoIngresso);
    printf("1 - Vingadores 4 - da Marvel\n");
    printf("2 - Como treinar o Seu Dragao 3\n");
    printf("3 - Dumbo\n");
    printf("4 - Shazam!\n");
    printf("Qual o numero do filme que deseja assistir?\n");
    scanf("%d", &filme);
    printf("Quantos ingressos voce deseja?\n");
    scanf("%d", &qtd);
    ValorTotal = qtd*ValorDoIngresso;
    printf("\n----------------------------------------------------\n");
    printf("Voce comprou %d ingressos para o filme %d,\n total a pagar: R$ %.2f\n", qtd, filme, ValorTotal);
    printf("----------------------------------------------------\n\n");
    system("pause");
    return 0;
}
