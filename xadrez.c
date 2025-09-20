#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Declaração de variáveis
    int casaTorre = 5;
    int casaBispo = 5;
    int casaRainha = 8;
    int casaCavalo = 1;
    int i, j = 1;
    int opcao;
    
    // Escolher a peça que será movimentada
    printf("*** Movimentar peças de Xadrez ***\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Selecione a peça a ser movimentada: ");
    scanf("%d", &opcao);
    
    switch(opcao)
    {
        case 1:
            // Implementação de Movimentação do Bispo
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.  
            printf("Peça escolhida:\n");
            printf("BISPO - Mover %d casas na diagonal superior direita\n", casaBispo);
            while (i <= casaBispo)
            {
                printf("Cima e Direita\n");
                //printf("Direita\n");
                //printf("%d\n", i);
                i++;
            }             
        break;

        case 2:
            // Implementação de Movimentação da Torre
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
            printf("Peça escolhida:\n");
            printf("TORRE - Mover %d casas para direita\n", casaTorre);
            do
            {
                printf("Direita\n");
                i++;
            } while (i <= casaTorre);
                       
        break;
        
        case 3:
            // Implementação de Movimentação da Rainha
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
            printf("Peça escolhida:\n");
            printf("RAINHA - Mover %d casas para esquerda\n", casaRainha);
            for (i = 1; i <= casaRainha; i++)
            {
                printf("Esquerda\n");
            }
            
        break;

        case 4:
            // Implementação de Movimentação do Cavalo
            // Sugestão: Utilize uma estrutura de repetição aninhada para simular a movimentação do cavalo.
            printf("Peça escolhida:\n");
            printf("CAVALO - Fazer o movimento em L\n", casaCavalo);
            while (casaCavalo--)
            {
                for (i = 1; i <= 2; i++)
                {
                    printf("Cima\n");
                }
            printf("Direita\n");
            }
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
