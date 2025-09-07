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

   
    for (int i = 0; i < 5; i++) {
        prinft("Direita\n");
    }

      for (int i = 0; i < 5; i++){
    printf("Cima\n"); 
    printf("Baixo\n"); 
    printf("Esquerda\n");
    printf("Direita\n");
    printf("Cima Esquerda\n"); 
    printf("Direita\n");
}


   

    for (int i = 0; i < 8; i++){
    printf("Esquerda\n");
}


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int movimentoCompleto = 1;

   while(movimentoCompleto--) {
      for(int i = 0; i < 4; i++) {
        printf("Baixo\n"); 
      }
      printf("Esquerda\n");
   }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    void moverTorre(int casas) {
      if(casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
      }
    }

    int main () {
       moverTorre(5);
       
       return 0;
    }



   void moverRainha (int casas) {
      if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
      }
   }

   int main () {
    moverRainha(8);

   }
}

void moverBispo(int casas) {
  if(casas > 0) {
    printf("Direita\n");
    printf(" Pra Cima\n");
    moverBispo(casas - 1);
  }
}

int main () {
  moverBispo(5);
   
   return 0;
}

void moverCavalo(int casas) {
  if(casas > 0) {
    printf("Pra cima\n");
    printf("Direita\n");
    moverCavalo(casas - 1);
  }
}

int main () {
  moverCavalo(5);
   
   return 0;
}
