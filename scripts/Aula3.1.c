#include <stdio.h>

int main (){
    printf("Seja Bem vindo ao menu de cadastro \n");
    
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Qual é a sua altura: \n");
    scanf("%f",&altura);

    printf("Olá %s , Você tem %d anos, e a sua altura atual é de %.2f \n", nome , idade, altura);
   
}