#include <stdio.h>

int main(){

   float m;

   printf("Insira sua nota:  \n");
   scanf("%f",&m);

   if(m >= 7){
    printf("Aprovado \n");
   }else{
    printf("Reprovado \n");
    printf("%.2f \n", &m);
   }
}

