#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int mover){ //função para movimentação da torre

    if (mover == 0) return; //IF necessário para encerrar a recursão. Quando "mover" chegar a 0, a função para.
    printf("Direita\n"); // Cada vez que a função é chamada, a peça anda uma casa na respectiva direção
    moverTorre(mover-1); // Aqui eu chamo a função e subtraio até chegar a 0
}
    
void moverRainha(int mover){

    if (mover == 0) return;//IF necessário para encerrar a recursão. Quando "mover" chegar a 0, a função para.
    printf("Esquerda\n"); // Cada vez que a função é chamada, a peça anda uma casa na respectiva direção
    moverRainha(mover-1);// Aqui eu chamo a função e subtraio até chegar a 0
}   

void moverCavalo(){
    
    for (int i = 2; i > 0; i--){ //Condição para rodar duas vezes o movimento
        printf("Cima\n");
        for (int j = 1; j > 0; j--){ // Condição para rodar uma vez somente ao final do movimento anterior
            if(i==1){
                printf("Direita\n");
            }
        }
    }
}   

void moverBispo(int mover){
    
    if(mover == 0) return;//IF necessário para encerrar a recursão. Quando "mover" chegar a 0, a função para.
    for (int i = mover; i > mover - 1; i--){
        printf("Cima\n");// Cada vez que a função é chamada, entra nesse loop e a peça anda uma casa na respectiva direção
        for (int j = i; j > i-1; j--){
            printf("Direita\n");// Cada vez que entra no loop externo, entra nesse loop interno e a peça anda uma casa na respectiva direção
        }
    }
    moverBispo(mover-1);// Aqui eu chamo a função e subtraio até chegar a 0
}   


int main() {
    
    int mover = 5; //Uma variável para facilitar o uso
    printf("------------------------------------------------------\nMovimento da Torre!\n\n");
    moverTorre(mover);
    printf("------------------------------------------------------\nMovimento da Rainha!\n\n");
    moverRainha(mover+3); // Aqui eu somo conforme a necessidade. Nesse caso a Raínha anda 8 casas.
    printf("------------------------------------------------------\nMovimento do Cavalo!\n\n");
    moverCavalo(); // Cavalo possui um movimento único, não precisa de recursão
    printf("------------------------------------------------------\nMovimento do Bispo!\n\n");
    moverBispo(mover);


    return 0;
}
