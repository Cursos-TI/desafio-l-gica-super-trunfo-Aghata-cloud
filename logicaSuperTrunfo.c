#include <stdio.h>

// Função fora do main
float pegarValor(int atributo, int isA, int populacaoA, int populacaoB, float areaA, float areaB,
                 float pibA, float pibB, int pontosA, int pontosB, float densidadeA, float densidadeB) {
    switch (atributo) {
        case 1: return isA ? populacaoA : populacaoB;
        case 2: return isA ? areaA : areaB;
        case 3: return isA ? pibA : pibB;
        case 4: return isA ? pontosA : pontosB;
        case 5: return isA ? densidadeA : densidadeB;
    }
    return 0;
}

int main() {
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB, pontosA, pontosB;
    float areaA, areaB, pibA, pibB, densidadeA, densidadeB;

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

    int atributo1, atributo2;
    printf("\n=== Escolha de Dois Atributos ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    printf("\nAgora escolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Escolha: ");
    scanf("%d", &atributo2);

    float valorA1 = pegarValor(atributo1, 1, populacaoA, populacaoB, areaA, areaB, pibA, pibB, pontosA, pontosB, densidadeA, densidadeB);
    float valorB1 = pegarValor(atributo1, 0, populacaoA, populacaoB, areaA, areaB, pibA, pibB, pontosA, pontosB, densidadeA, densidadeB);
    float valorA2 = pegarValor(atributo2, 1, populacaoA, populacaoB, areaA, areaB, pibA, pibB, pontosA, pontosB, densidadeA, densidadeB);
    float valorB2 = pegarValor(atributo2, 0, populacaoA, populacaoB, areaA, areaB, pibA, pibB, pontosA, pontosB, densidadeA, densidadeB);

    int pontosCartaA = 0, pontosCartaB = 0;

    if (atributo1 == 5)
        (valorA1 < valorB1) ? pontosCartaA++ : (valorB1 < valorA1 ? pontosCartaB++ : 0);
    else
        (valorA1 > valorB1) ? pontosCartaA++ : (valorB1 > valorA1 ? pontosCartaB++ : 0);

    if (atributo2 == 5)
        (valorA2 < valorB2) ? pontosCartaA++ : (valorB2 < valorA2 ? pontosCartaB++ : 0);
    else
        (valorA2 > valorB2) ? pontosCartaA++ : (valorB2 > valorA2 ? pontosCartaB++ : 0);

    float somaA = valorA1 + valorA2;
    float somaB = valorB1 + valorB2;

    printf("\n=== RESULTADO FINAL ===\n");
    printf("País A: %s | Soma dos atributos: %.2f\n", nomeA, somaA);
    printf("País B: %s | Soma dos atributos: %.2f\n", nomeB, somaB);

    if (somaA > somaB)
        printf("\nVencedor: %s\n", nomeA);
    else if (somaB > somaA)
        printf("\nVencedor: %s\n", nomeB);
    else
        printf("\nEmpate!\n");

    return 0;
}
