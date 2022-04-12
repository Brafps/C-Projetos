#include<stdio.h>
int main(){
    int idade = 35; //aqui declaramos a variável idade e colcoamos nela o valor 34
    int anoAtual = 2022; //aqui declaramos a variável anoAtual e colcoamos nela o valor 2022
    int anoNascimento; //aqui declaramos a variável anoNasciemnto, mas não aribuimos nenhum valor a ela ainda
    anoNascimento = anoAtual - idade; //aqui estamos atribuindo um valor a variável anoNascimento por meio de um operador matemático
    printf("Oi, voce nasceu em %d\n", anoNascimento); //aqui a mensagem que o programa irá mostrar na tela do usuário.
    return 0;
}