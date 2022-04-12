#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    bool p=false, t=true;
    printf("a: %d b: %d\n", p, t); // a é falso tem valor 0, b verdadeiro tem valor 1.
    printf("a && b: %d\n", p&&t);
    printf("a||b: %d\n", p||t);
    printf("!a: %d\n", !p);
}