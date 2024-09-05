#include <stdio.h>

int main() {
    int i, soma = 0, quant; 
     quant = 100 - 15 + 1;
    for (i = 15; i <= 100; i++) {
        soma += i; 
    }
    float media ;
    media = (float)soma / quant;
    printf("media: %.2f\n", media);
printf("soma :%d\n",soma);
    return 0;
}
