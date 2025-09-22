#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Criação do movimento da rainha com recursividade
void movimentoRainha (int casa)
{
    if (casa >0)
    {
        printf("Esquerda\n");
        movimentoRainha(casa -1); // chama a funçaõ repetindo até a condição nao for mais atendida
    }
}
// Criação do movimento da torre com recursividade
void movimentoTorre (int casa)
{
    if (casa >0)
    {
        printf("Direita\n");
        movimentoTorre(casa -1); // chama a funçaõ repetindo até a condição nao for mais atendida
    }
}

int main() {
    // Declaração de variáveis
    int casaTorre;
    int casaBispo;
    int casaRainha;
    int casaCavalo = 1;
    int i, j;
    int opcao, sair;
    
    do // loop criado para jogar até escolher a opção de saída
    {
        // Escolher a peça que será movimentada
        printf("\n");
        printf("*** Movimentar peças de Xadrez ***\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. SAIR\n");
        printf("Selecione uma opção acima: ");
        scanf("%d", &opcao);
        
        switch(opcao)
        {
            case 1:
                // Implementação de Movimentação do Bispo
                printf("Peça escolhida: BISPO\n");
                printf("Informe o número de casas para mover: ");
                scanf("%d", &casaBispo);

                if (casaBispo > 0 && casaBispo <= 8) // Verifica se o número de casas é válido para mover a peça
                {
                    for (i = 1, j = 1; i <= casaBispo && j <= casaBispo; i++, j++)
                    {
                        printf("Cima e Direita\n");
                    }
                } 
                else
                {
                    printf("Número de casas inválido\n");
                }
                /*
                while (i <= casaBispo)
                {
                    printf("Cima e Direita\n");
                    //printf("Direita\n");
                    //printf("%d\n", i);
                    i++;
                }
                */             
            break;

            case 2:
                // Implementação de Movimentação da Torre
                printf("Peça escolhida: TORRE\n");
                printf("Informe o número de casas para mover: ");
                scanf("%d", &casaTorre);

                if (casaTorre > 0 && casaTorre <= 8) // Verifica se o número de casas é válido para mover a peça
                {
                    movimentoTorre(casaTorre);
                }
                else
                {
                    printf("Número de casas inválido\n");
                }           
                /*
                do
                {
                    printf("Direita\n");
                    i++;
                } while (i <= casaTorre);
                */                      
            break;
            
            case 3:
                // Implementação de Movimentação da Rainha
                printf("Peça escolhida: RAINHA\n");
                printf("Informe o número de casas para mover: ");
                scanf("%d", &casaRainha);

                if (casaRainha > 0 && casaRainha <= 8) // Verifica se o número de casas é válido para mover a peça
                {
                    movimentoRainha(casaRainha);
                }
                else
                {
                    printf("Número de casas inválido\n");
                } 
                /*
                for (i = 1; i <= casaRainha; i++)
                {
                    printf("Esquerda\n");
                }
                */          
            break;

            case 4:
                // Implementação de Movimentação do Cavalo
                printf("Peça escolhida: CAVALO\n");
                printf("Fazer o movimento em L\n");
                while (casaCavalo--)
                {
                    for (i = 1; i <= 2; i++)
                    {
                        printf("Cima\n");
                    }
                printf("Direita\n");
                }
            break;

            case 5:
            // opção para sair do jogo
                sair = 1;
                printf("Você saiu do jogo!\n");
            break;

            default:
                printf("Opção inválida!\n");
            break;
        }
    } while (sair != 1);

    return 0;
}
