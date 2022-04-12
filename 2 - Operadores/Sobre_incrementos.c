#include<stdio.h>

int main(){
    int i, i2;
    i=10;
    /* incremento */
    printf("Valor de i: %d\n", i);
    printf("Valor de i: pre incremento: %d\n", ++i);
    printf("Valor de i: pos incremento: %d\n", i++);
    printf("Valor de i: %d\n", i);
    /* decremento */
    i2=20;
    printf("Valor de i2: %d\n", i2);
    printf("Valor de i2: pre incremento: %d\n", --i2);
    printf("Valor de i2: pos incremento: %d\n", i2--);
    printf("Valor de i2: %d\n", i2);
    return 0;
}