#include <stdio.h>
#include<stdlib.h>

int main(){
    int idade;
    int anoAtual;
    int anoNascimento;
    printf("Digite sua idade ao fim desse ano: ");
    scanf("%d",&idade);
    printf("Digite o ano atual: ");
    scanf("%d",&anoAtual);
    anoNascimento=anoAtual-idade;
    printf("Oi, voce nasceu em %d\n",anoNascimento);
    system("pause");
    return 0;
}