#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Variáveis das cartas
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontosA, pontosB;
    float densidadeA, densidadeB;

    // Cadastro das cartas
    printf("=== Cadastro das Cartas ===\n");

    printf("\nDigite o nome do primeiro país: ");
    scanf("%s", nomeA);
    printf("População (em milhões): ");
    scanf("%d", &populacaoA);
    printf("Área (em km²): ");
    scanf("%f", &areaA);
    printf("PIB (em trilhões): ");
    scanf("%f", &pibA);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosA);
    densidadeA = populacaoA / areaA;

    printf("\nDigite o nome do segundo país: ");
    scanf("%s", nomeB);
    printf("População (em milhões): ");
    scanf("%d", &populacaoB);
    printf("Área (em km²): ");
    scanf("%f", &areaB);
    printf("PIB (em trilhões): ");
    scanf("%f", &pibB);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosB);
    densidadeB = populacaoB / areaB;

    // Menu para escolher o atributo de comparação
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o número do atributo: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");

    // Comparação usando switch
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d milhões\n", nomeA, populacaoA);
            printf("%s: %d milhões\n", nomeB, populacaoB);

            if (populacaoA > populacaoB) {
                printf("Vencedor: %s\n", nomeA);
            } else if (populacaoB > populacaoA) {
                printf("Vencedor: %s\n", nomeB);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeA, areaA);
            printf("%s: %.2f km²\n", nomeB, areaB);

            if (areaA > areaB) {
                printf("Vencedor: %s\n", nomeA);
            } else if (areaB > areaA) {
                printf("Vencedor: %s\n", nomeB);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", nomeA, pibA);
            printf("%s: %.2f trilhões\n", nomeB, pibB);

            // Exemplo de comparação com if aninhado
            if (pibA > pibB) {
                if (pibA - pibB < 0.5) {
                    printf("Vencedor: %s (diferença pequena)\n", nomeA);
                } else {
                    printf("Vencedor: %s\n", nomeA);
                }
            } else if (pibB > pibA) {
                if (pibB - pibA < 0.5) {
                    printf("Vencedor: %s (diferença pequena)\n", nomeB);
                } else {
                    printf("Vencedor: %s\n", nomeB);
                }
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nomeA, pontosA);
            printf("%s: %d\n", nomeB, pontosB);

            if (pontosA > pontosB) {
                printf("Vencedor: %s\n", nomeA);
            } else if (pontosB > pontosA) {
                printf("Vencedor: %s\n", nomeB);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.6f hab/km²\n", nomeA, densidadeA);
            printf("%s: %.6f hab/km²\n", nomeB, densidadeB);

            // Aqui o menor valor vence
            if (densidadeA < densidadeB) {
                printf("Vencedor: %s\n", nomeA);
            } else if (densidadeB < densidadeA) {
                printf("Vencedor: %s\n", nomeB);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
