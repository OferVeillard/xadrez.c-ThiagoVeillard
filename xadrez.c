#include <stdio.h>

// O Tabuleiro possui uma dimensão padrão de 8x8
// Simulação de movimento das peças de xadrez


/*
========== Torre (FOR) ========

*/
int main() {
    int TorresCasa = 5;

    printf("Movimento Torre:\n");

    for (int i = 1; i <= TorresCasa; i++) {
        printf("Torre moveu-se %d para Direita\n", i);
    }

    return 0;
}