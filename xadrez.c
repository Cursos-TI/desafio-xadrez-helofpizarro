#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

   
    int linha = 4, coluna = 4;

    // Movimentação do Bispo (diagonal para cima e direita)
    printf("Bispo:\n");
    for (int i = 1; i < 8; i++) {
        if (linha - i >= 0 && coluna + i < 8)
            printf("(%d, %d)\n", linha - i, coluna + i);
    }

    // Movimentação da Torre (para a direita)
    printf("\nTorre:\n");
    for (int j = coluna + 1; j < 8; j++) {
        printf("(%d, %d)\n", linha, j);
    }

    // Movimentação da Rainha (para a esquerda)
    printf("\nRainha:\n");
    for (int j = coluna - 1; j >= 0; j--) {
        printf("(%d, %d)\n", linha, j);
    }

   


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
