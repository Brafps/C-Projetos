#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    printf("\n----------------------------------------------------\n");
    printf("-          Conversor para compra de livro          -\n");
    printf("----------------------------------------------------\n\n");
    float taxa, livro, disponivel, convertido;
    bool resposta;
    printf("Qual o valor disponivel para compra em reais?\n");
    scanf("%f", &disponivel);
    printf("Qual o valor do livro em dolar?\n");
    scanf("%f", &livro);
    printf("Qual a taxa atual de conversao dolar/real?\n");
    scanf("%f", &taxa);

    convertido=taxa*livro;
    resposta=convertido<=disponivel;
     printf("\n----------------------------------------------------\n");
    printf("Valor do livro em dolar: %.2lf\n", livro);
    printf("Valor do livro em reais: %.2lf\n", convertido);
    printf("valor disponivel: %.2lf\n", disponivel);
     printf("----------------------------------------------------\n\n");
    printf("Se resposta 0, nao pode comprar.\n");
    printf("Se resposta 1, pode comprar.\n");
     printf("\n----------------------------------------------------\n");
    printf("Resposta: %d\n", resposta);
     printf("\n----------------------------------------------------\n");
    system("pause");
    return 0;
}