#include <stdio.h>

    // movimentação da torre
void movimento_torre (int casas){
    if (casas > 0){
        printf("Torre - Direita\n");
        movimento_torre(casas - 1);
    }
}

    // movimentação do bispo
void movimento_bispo (int casas){
    if (casas > 0){
        printf("Bispo - Cima, Direita\n");
        movimento_bispo(casas - 1);
    }
}

    // movimentação da rainha
void movimento_rainha (int casas){
    if (casas > 0){
        printf("Rainha - Esquerda\n");
        movimento_rainha(casas - 1);
    }
}

    // movimentação do cavalo
void movimento_cavalo (int casas){
    while (casas--){
        for (int i = 0; i < 2; i++){
            printf("Cavalo - Cima\n");
        }
        printf("Cavalo - Direita\n");
    }
}


int main(){

    // exibição das mensagens de movimento
    printf("\n");
    movimento_torre(5);
    printf("\n");
    movimento_bispo(5);
    printf("\n");
    movimento_rainha(8);
    printf("\n");
    movimento_cavalo(1);

    return 0;
}