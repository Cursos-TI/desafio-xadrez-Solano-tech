#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Rainha: 8 casas para a esquerda

    // Declaração de variáveis
    int casaTorre = 5;
    int casaBispo = 5;
    int casaRainha = 8;
    int i = 1;
    int opcao;
    
    // Escolher a peça que será movimentada
    printf("*** Movimentar peças de Xadrez ***\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Selecione a peça a ser movimentada: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            // Implementação de Movimentação do Bispo
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.  
            printf("Peça escolhida: BISPO - Mover 5 casas diagonal superior direita\n");
            while (i <= casaBispo)
            {
                printf("%d- Superior e Direita\n", i);
                //printf("Direita\n");
                //printf("%d\n", i);
                i++;
            }             
        break;

        case 2:
            // Implementação de Movimentação da Torre
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
            printf("Peça escolhida: TORRE - Mover 5 casas para direita\n");
            do
            {
                printf("%d- Direita\n", i);
                i++;
            } while (i <= casaTorre);
                       
        break;
        
        case 3:
            // Implementação de Movimentação da Rainha
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
            // 
        break;

        default:
            printf("Opção inválida!\n");
        break;
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
