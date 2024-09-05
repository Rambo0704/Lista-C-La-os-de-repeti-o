#include <stdio.h>

int main() {
    float valor_mercadoria, total=0,media;
    int num_mercadorias= 0;
    char maismercadorias;

    do {
        printf("Informe o valor da mercadoria: ");
        scanf("%f", &valor_mercadoria);
        total += valor_mercadoria;
        num_mercadorias++;

        printf("Mais mercadorias (S/N)? \n");
        scanf(" %c", &maismercadorias);
    } while (maismercadorias == 'S' || maismercadorias == 's');

    if (num_mercadorias > 0) {
        media = total / num_mercadorias;
        printf("Valor total em estoque: %.2f\n", total);
        printf("Media de valor das mercadorias: %.2f\n", media);
    } else {
        printf("Nenhuma mercadoria foi registrada.\n");
    }

    return 0;
}

