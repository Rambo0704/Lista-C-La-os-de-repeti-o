#include <stdio.h>

int main() {
    float n1, n2, media;
    char repetir;

    do {
        printf("Digite a primeira nota:\n");
        scanf("%f", &n1);

        printf("Digite a segunda nota:\n");
        scanf("%f", &n2);

        if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10) {
            printf("VALOR INVALIDO\n");
        } else {
            media = (n1 + n2) / 2;
            printf("Sua media: %.2f\n", media);
        }

        printf("Novo Calculo (S/N)?\n");
        scanf(" %c", &repetir);
    } while (repetir == 'S');

    return 0;
}
