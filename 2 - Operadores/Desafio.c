#include<stdio.h>
#include<stdlib.h>
int main(){
    int numero, antecessor, sucessor, contador, produto, a, b, c;

//cabeçalho//
    printf("\n----------------------------------------------------\n");
    printf("-                Jogo de Matematica                -\n");
    printf("-                  Primeira Etapa                  -\n");
    printf("----------------------------------------------------\n\n");
    
/*Primeira parte do comando, entrada do valor*/
    printf("\nPara comecar, digite um numero positivo maior que 1:\n");
    scanf("%d", &numero);
    
    antecessor=numero-1;
    sucessor=numero+1;
    printf("\n\n----------------------------------------------------\n");
    printf("O numero %d tem como antecessor o numero %d e tem como\n sucessor o numero %d\n", numero, antecessor, sucessor);

/* Nessa parte vamos fazer a tabuada do número de entrada*/
    printf("----------Abaixo temos a tabuada do numero %d----------\n\n", numero);
    contador=1;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);
    contador++;
    produto=contador*numero;
    printf("%dx%d = %d\n", numero, contador, produto);


/*Para finalizar, vamos fazer os números contados de dois em dois*/
    a=numero+2;
    b=a+2;
    c=b+2;
    printf("\n\n----------------------------------------------------\n");
    printf("Contando de dois em dois, os proximos tres\n numeros sao: %d, %d, %d\n", a, b, c);
    printf("----------------------------------------------------\n");
    system("pause");
    return 0;
}