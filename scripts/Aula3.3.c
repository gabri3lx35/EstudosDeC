#include <stdio.h>

int main(){

    int dado = 10;
    printf("Dado antes do incremento: %d. \n ", dado);

    dado ++;
    printf("Dado depois do incremento: %d. \n", dado);

    dado --;
    printf("Dado depois do decremento %d. \n", dado);

    dado += 3;
    printf("Dado depois do incremento de 3 unidades: %d. \n", dado);

    dado -= 2;
    printf("Dado depois do decremento de 2 unidades: %d. \n", dado);

    dado *= 10;
    printf("Dado depois de ser multiplicado por 10: %d. \n", dado);
    
    dado /= 10;
    printf("Dado Depois de ser dividido por 10:  %d. \n", dado);

}