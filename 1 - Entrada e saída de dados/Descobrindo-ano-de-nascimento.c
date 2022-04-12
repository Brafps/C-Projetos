#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("--------------------------------------------\n");
    printf("-       Descobrindo ano de nascimento      -\n");
    printf("--------------------------------------------\n\n");
    int idade;
    int anoAtual;
    int anoNascimento;
    printf("Digite sua idade ao fim desde ano: ");
    scanf("%d",&idade);
    printf("Digite o ano atual: ");
    scanf("%d",&anoAtual);
    anoNascimento=anoAtual-idade;
    printf("\n--------------------------------------------\n");
    printf("Oi, voce nasceu em %d\n",anoNascimento);
    printf("--------------------------------------------\n");
    system("pause");
    return 0;
}