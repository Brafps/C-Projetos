#include<stdio.h>
int main(){
    printf("Contador sem incremento.\n");
    int contador;
    contador=0;
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);
    contador=contador+1;
    printf("%d\n", contador);

    printf("\n Contador com incremento.\n");
    contador=1;
    printf("%d\n", contador++);// observe que aqui o contador primeiro envia o valor acumulado e depois ele incrementa
    printf("%d\n", contador++);
    printf("%d\n", contador++);
    printf("%d\n", contador++);
    printf("%d\n", contador++);
    printf("%d\n", contador++);
    printf("%d\n", contador++);
    printf("%d\n", contador++);
    printf("%d\n", contador++);
    printf("%d\n", contador++);

    printf("\n Para pular de 2 em dois.\n");
    contador=0;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);
    contador=contador+2;
    printf("%d\n", contador);

    printf("\n Agora o pulo de dois em dois com incremento.\n");
    contador=0;
    printf("%d\n", contador);
    printf("%d\n", contador+=2);// o += é um pulo imediato
    printf("%d\n", contador+=2);
    printf("%d\n", contador+=2);
    printf("%d\n", contador+=2);
    printf("%d\n", contador+=2);
    printf("%d\n", contador+=2);
    printf("%d\n", contador+=2);
    printf("%d\n", contador+=2);
    printf("%d\n", contador+=2);
    printf("%d\n", contador+=2);
    return 0;
}