#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    char boardLines[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int board[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    // Calcula o tamanho do tabuleiro: 400 bytes (total) / 40 bytes (uma linha) = 10 linhas
    int sizeBoard = sizeof(board) / sizeof(board[0]);

    printf("TABULIERO BATALHA NAVAL\n");                // Imprime um "Título" para o tabuleiro
    printf("   ");                                      // Imprime 3 espaços vázios para alinhar as letras(cabeçalho) das colunas

    // Imprime as letras(cabeçalho) das colunas
    for (int i = 0; i < 10; i++) {
        printf("%c ", boardLines[i]);
    }

    printf("\n");                                       // Imprime uma nova linha para separar o cabeçalho do tabuleiro
    
    // imprime o tabuleiro
    for (int line = 0; line < sizeBoard; line++) {
        printf("%.2i", line + 1);                       // Imprime os números das linhas, formatados para ter 2 dígitos (ex: 01, 02, ..., 10)
        printf(" ");                                    // Imprime um espaço para separar os números das linhas do tabuleiro

        for (int column = 0; column < sizeBoard; column++) {
            if (line == 3 && column <= 2) {             // Imprime um "3" para representar um navio de 3 posições na linha 4 (índice 3) e colunas 1, 2 e 3 (índices 0, 1 e 2)
                printf("%i ", 3);
            } else if (line >= 7 && column == 7) {      // Imprime um "3" para representar um navio de 3 posições na coluna 8 (índice 7) e linhas 8, 9 e 10 (índices 7, 8 e 9)
                printf("%i ", 3);
            } else {                                    // Imprime "0" para representar as posições vazias do tabuleiro
                printf("%i ", board[line][column]);
            }
            
        }
        printf("\n");                                   // Imprime uma nova linha para separar as linhas do tabuleiro
    }
    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
