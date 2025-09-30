#include <stdio.h>

int main() {
    
    // Movimento da Torre (for)
    
    // A torre se move em linha reta (horizontal ou vertical).
    // simular 5 movimentos para a direita.
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // apenas separador visual

    
    // Movimento do Bispo (while)
    
    // O bispo se move em diagonais.
    // simular 5 movimentos para cima e à direita.
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    
    // Movimento da Rainha (do...while)
    
    // A rainha pode se mover em todas as direções.
    // simular 8 movimentos para a esquerda.
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}