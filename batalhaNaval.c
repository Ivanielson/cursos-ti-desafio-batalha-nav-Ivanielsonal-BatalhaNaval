#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define LINES 10
#define COLUMNS 10

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    
    char boardLines[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int board[LINES][COLUMNS];

    // Atribui o valor "0" para cada posição do tabuleiro
    for (int i = 0; i < LINES; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            board[i][j] = 0;
        }
    }

    // Imprime um 3 para representar um navio de 3 posições na diagonal principal do tabuleiro nas linhas 3, 4 e 5 (índices 2, 3 e 4) e colunas 3, 4 e 5 (índices 2, 3 e 4)
    for (int i = 2; i < 5; i++) {
        board[i][i] = 3;
    }

    // Imprime um 3 para representar um navio de 3 posições na diagonal secundária do tabuleiro nas linhas 2, 3 e 4 (índices 1, 2 e 3) e colunas 7, 8 e 9 (índices 6, 7 e 8)
    for (int i = 1; i < 4; i++) {
        board[i][COLUMNS - 1 - i] = 3;
    }

    // Imprime um 3 para representar um navio de 3 posições nas linhas 7, 8 e 9 (índices 6, 7 e 8) e coluna 10 (índice 9)
    for (int i = 6; i < 9; i++) {
        board[i][COLUMNS - 1] = 3;
    }

    // Imprime um 3 para representar um navio de 3 posições na linha 6 (índice 5) e colunas 1, 2 e 3 (índices 0, 1 e 2)
    for (int i = 0; i < 3; i++) {
        board[LINES - 5][i] = 3;
    }

    printf("TABULIERO BATALHA NAVAL\n");                // Imprime um "Título" para o tabuleiro
    printf("   ");                                      // Imprime 3 espaços vázios para alinhar as letras(cabeçalho) das colunas

    // Imprime as letras(cabeçalho) das colunas
    for (int i = 0; i < 10; i++) {
        printf("%c ", boardLines[i]);
    }

    printf("\n");                                       // Imprime uma nova linha para separar o cabeçalho do tabuleiro
    for (int i = 0; i < LINES; i++) {
        printf("%.2i", i + 1);                          // Imprime os números das linhas, formatados para ter 2 dígitos (ex: 01, 02, ..., 10)
        printf(" "); 
        for (int j = 0; j < COLUMNS; j++) {
            printf("%i ", board[i][j]);
        }
        printf("\n");
    }

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