#include <stdio.h>
 
 int main(){
    int x, y, soma, subtr, mult, divis;

    printf("Informe o primeiro valor: \n");
    scanf("%d", &x);
    
    printf("Informe o segundo valor: \n");
    scanf("%d", &y);

    soma = x + y;
    subtr = x - y;
    mult = x * y;
    divis = x / y;

    printf("Resultados:\n");
    printf("A soma de %d e %d é igual a %d \n", x, y, soma);
    printf("A subtração de %d e %d é igual a %d \n", x, y, subtr);
    printf("A multiplicação de %d e %d é igual a %d \n", x, y, mult);
    printf("A divisão de %d por %d é igual a %d \n", x, y, divis);
 }