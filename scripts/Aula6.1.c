#include <stdio.h>

int main(){
    int v[5];

    float m;

    v[0] = 10;
    v[1] = 30;
    v[2] = 50;
    v[3] = 20;
    v[4] = 70;

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("%.2f", m);
}