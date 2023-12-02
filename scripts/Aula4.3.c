#include <stdio.h>

int main(){
    int m;

    printf("Digite um numero\n");
    scanf("%d", &m); /*Não pode escrever dentro da "" do scanf  |deu erro 3 vezes| |ANOTAR|*/

    switch(m){
    case 1:
        printf(">>> 1 \n");
        break;

    case 2:
        printf(">>> 2 \n");
        break;
    
    default:
        printf("nada \n");
        break;
    }

}