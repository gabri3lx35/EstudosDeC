#include <stdio.h>

int main(){

     int v[5];
     int i;

     printf("Insira os dados: \n");

     for(i=0; i < 5; i++){
        printf("%d° >>> ", i+1);
        scanf("%d", &v[i]);
     };

     for(i=0;i<5;i++){
        printf("%d° > %d \n", i+1, v[i]);
     };
}

