#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int direita, esquerda, cima, movimento, i;
    direita = 1;
    esquerda = 1;
    cima = 1;
    movimento = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Bispo se movimenta - \n");

    for (i = 0; i < 5; i++)
    {
        printf("Cima, Direita\n");
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Torre se movimenta - \n");

    while (direita <= 5)
    {
        printf("%d Casa(s) a Direita\n", direita);
        direita++;
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha se movimenta - \n");

    do
    {
        printf("%d Casa(s) a Esquerda\n", esquerda);
        esquerda++;
        
    } while (esquerda <= 8);
    
    // Nível Aventureiro - Movimentação do Cavalo`
    //utilizei variavel while para o movimento do cavalo junto com o for.
    printf("Cavalo se Movimenta - \n");

    while (movimento--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("cima \n");
        }
        printf("direita \n");
        
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
