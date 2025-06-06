#include <stdio.h>

int main() {
    
    int i;
    printf("Movimento da TORRE (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    
    int j = 1;
    printf("Movimento do BISPO (5 casas na diagonal para cima e à direita):\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

  
    int k = 1;
    printf("Movimento da RAINHA (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
