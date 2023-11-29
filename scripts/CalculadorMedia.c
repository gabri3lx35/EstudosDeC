#include <stdio.h>

int main(){
    printf("Digite suas Notas 1 2 e 3 \n");
    float n1, n2, n3, soma;
    printf("Primeira Nota: \n");
    scanf("%f", &n1);
    printf("Segunda Nota: \n");
    scanf("%f", &n2);
    printf("Terceira Nota \n");
    scanf("%f", &n3);
    soma = (n1 + n2 + n3) / 3;
    printf("CALCULANDO SUA MEDIA....... \n");
    printf("Sua media é %.2f \n", soma);
    if(soma >= 7.0){
        printf("Aprovado \n");
    }else{
        printf("Reprovado \n");
    }
    
    

}