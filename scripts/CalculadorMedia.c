#include <stdio.h>

/*
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
    printf("Sua media é: %.2f \n", soma);
    if(soma >= 7.0){
        printf("Aprovado \n");
    }else{
        printf("Reprovado \n");
    }  
}
*/

void CalculadorM(float n1, float n2, float n3){
    float m;
    m = (n1 + n2 + n3) / 3;

    if(m <= 3){
        printf("Reprovado \n");
    }else if(m > 3 && m < 6 ){
        printf("Recuperação \n");
    }else if(m >= 7){
        printf("Aprovado \n");
    }else{
        printf("Eror");
    }
    

}

int main(){

    float n1, n2, n3;
    printf("Digite suas notas Abaixo \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    CalculadorM(n1, n2, n3);

}