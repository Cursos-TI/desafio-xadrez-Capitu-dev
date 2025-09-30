#include <stdio.h>

// -------------------------------
// Função recursiva para a Torre
// -------------------------------
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva
    }
}

// -------------------------------
// Função recursiva + loops aninhados para o Bispo
// -------------------------------
// O loop externo controla o movimento "Cima"
// O loop interno controla o movimento "Direita"
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        // loops aninhados (exigência do enunciado)
        for (int i = 1; i <= 1; i++) { // vertical
            for (int j = 1; j <= 1; j++) { // horizontal
                printf("Cima, Direita\n");
            }
        }
        moverBispoRecursivo(casas - 1); // chamada recursiva
    }
}

// -------------------------------
// Função recursiva para a Rainha
// -------------------------------
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva
    }
}
// -------------------------------
// Movimento do Cavalo (loops aninhados complexos)
// -------------------------------
// Cavalo: 2 casas para cima e 1 para a direita
void moverCavalo(int passosCima, int passosDireita) {
    printf("Movimento do Cavalo:\n");

    // Loop externo controla os passos para cima
    for (int i = 1; i <= passosCima; i++) {
        if (i == 2) {
            printf("Cima\n");
        } else {
            printf("Cima\n");
        }

        // Loop interno controla o passo para a direita
        for (int j = 1; j <= passosDireita; j++) {
            if (i == passosCima) { 
                // só anda para a direita após os dois movimentos para cima
                printf("Direita\n");
                break; // sai do loop interno após o movimento
            } else {
                continue; // ignora até o cavalo completar as duas subidas
            }
        }
    }
}

int main() {
    // -------------------------------
    // Torre com recursividade
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    // -------------------------------
    // Bispo com recursividade + loops aninhados
    // -------------------------------
    int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(casasBispo);

    printf("\n");

    // -------------------------------
    // Rainha com recursividade
    // -------------------------------
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // -------------------------------
    // Cavalo com loops aninhados
    // -------------------------------
    int passosCima = 2;
    int passosDireita = 1;
    moverCavalo(passosCima, passosDireita);

    return 0;
}