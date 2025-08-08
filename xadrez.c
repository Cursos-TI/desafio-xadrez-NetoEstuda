#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int t = 0; // Variavel para a movimentação da Torre
    int b = 0; // Variavel para movimentação do Bispo
    int r = 0; // Varíavel para movimentação da Raínha
    int c = 0; // Variavel para movimentação do Cavalo
    //Movimentação da Torre:
    printf("Movimento da Torre\n");
    for (t = 0; t < 5; t++){
        printf("Direita\n");
    }

    //Movimentação do Bispo
    printf("Movimento do Bispo\n");
    while (b < 5){
        printf("Cima, Direita\n");
        b++;
    }

    //Movimentação da Rainha
    printf("Movimento da Rainha\n");
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    printf("Movimento do Cavalo\n");

    for (c = 0; c < 1; c++){
        printf("Direita\n");
        for (c = 0; c < 2; c++){
            printf("Baixo\n");
        }
    }



    return 0;
}
