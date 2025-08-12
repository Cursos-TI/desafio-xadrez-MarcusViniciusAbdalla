#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    // --- Simulação do Movimento da TORRE ---
    // A Torre move-se em linha reta horizontalmente ou verticalmente.
    // Simulação: 5 casas para a direita usando um loop 'for'.
    printf("--- Movimento da TORRE ---\n");
    printf("A Torre se movera 5 casas para a direita.\n");

    int casas_torre = 5; // Número de casas que a Torre vai se mover
    int i;               // Variável de controle do loop 'for'

    for (i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i); // Imprime a direção a cada casa percorrida
    }
    printf("Torre parou.\n\n");

    // --- Simulação do Movimento do BISPO ---
    // O Bispo move-se na diagonal.
    // Simulação: 5 casas na diagonal para cima e à direita usando um loop 'while'.
    printf("--- Movimento do BISPO ---\n");
    printf("O Bispo se movera 5 casas na diagonal (cima e direita).\n");

    int casas_bispo = 5; // Número de casas que o Bispo vai se mover
    int contador_bispo = 1; // Variável de controle do loop 'while'

    while (contador_bispo <= casas_bispo) {
        // Para a diagonal, imprimimos a combinação de duas direções.
        printf("Casa %d: Cima, Direita\n", contador_bispo);
        contador_bispo++; // Incrementa o contador
    }
    printf("Bispo parou.\n\n");

    // --- Simulação do Movimento da RAINHA ---
    // A Rainha move-se em todas as direções.
    // Simulação: 8 casas para a esquerda usando um loop 'do-while'.
    printf("--- Movimento da RAINHA ---\n");
    printf("A Rainha se movera 8 casas para a esquerda.\n");

    int casas_rainha = 8; // Número de casas que a Rainha vai se mover
    int contador_rainha = 1; // Variável de controle do loop 'do-while'

    do {
        printf("Casa %d: Esquerda\n", contador_rainha);
        contador_rainha++; // Incrementa o contador
    } while (contador_rainha <= casas_rainha);
    printf("Rainha parou.\n\n");

    // --- Simulação do Movimento do CAVALO ---
    // O Cavalo move-se em "L": 2 casas em uma direção e 1 casa perpendicularmente.
    // Simulação: 2 casas para baixo e 1 casa para a esquerda, usando loops aninhados.
    // Será utilizado um loop 'for' para o movimento vertical (2 casas para baixo)
    // e um loop 'while' para o movimento horizontal (1 casa para a esquerda).
    printf("--- Movimento do CAVALO ---\n");
    printf("O Cavalo se movera em 'L': 2 casas para baixo e 1 casa para a esquerda.\n");

    int casas_verticais_cavalo = 2; // Duas casas na direção vertical
    int casas_horizontais_cavalo = 1; // Uma casa na direção horizontal

    // Loop externo (for) para simular as 2 casas para baixo
    for (int j = 1; j <= casas_verticais_cavalo; j++) {
        printf("Passo %d do Cavalo: Baixo\n", j);
    }

    // Loop interno (while) para simular a 1 casa perpendicular (esquerda)
    int k = 1;
    while (k <= casas_horizontais_cavalo) {
        printf("Passo %d do Cavalo: Esquerda\n", casas_verticais_cavalo + k); // Ajuste no número do passo
        k++;
    }
    printf("Cavalo parou.\n\n");


    return 0; // Indica que o programa terminou com sucesso
}

