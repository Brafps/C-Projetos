#include <stdio.h>
#include<stdlib.h>
int main(){
    double altura;
    double pesoideal;
    printf("Digite sua altura: ");
    scanf("%lf", &altura);
    pesoideal = 72.7*altura - 58;
    printf("Seu peso ideal: %.lf\n", pesoideal);
    system("pause");
    return 0;
}