#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densisadepopulacional1;
    float pibpercapital1;
    float superpoder1;

    // Variáveis Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibpercapital2;
    float superpoder2;

    // cadastro da Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê string com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //calculo de densidade populacional e PIB per capita carta 1
    densisadepopulacional1=populacao1/area1;
    pibpercapital1=(pib1*1000000000)/populacao1;

    //Cálculo do Super Poder da Carta1
    superpoder1=(float)populacao1+area1+pib1+(float)pontosTuristicos1+pibpercapital1+(1.0f/densisadepopulacional1);

    // Cadastro da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê string com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculo da densidade populacional e PIB per capita para carta 2
    densidadepopulacional2=populacao2/area2;
    pibpercapital2=(pib2*1000000000)/populacao2;

    //Cálculo do super poder da crta2
    superpoder2=(float)populacao2+area2+pib2+(float)pontosTuristicos2+pibpercapital2+ (1.0f/densidadepopulacional2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("densidade Populacional:%.2f hab/km²\n",densisadepopulacional1);
    printf("PIB per capita:%.2f reias\n", pibpercapital1);
    printf("super Poder:%.2f\n",superpoder1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("densidade populacional:%2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita:%.2f reais\n", pibpercapital2);
    printf("Super Poder:%.2f\n",superpoder2);

     // ---------------------------------------------------
    // Comparação de Cartas (usando apenas um atributo)
    // ---------------------------------------------------
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n\n");

    // Mostro o valor de cada carta antes da decisão
    printf("Carta 1 - %s (%c): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nomeCidade2, estado2, populacao2);

    // Aqui comparo a população das duas cartas usando if e else
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu com maior população!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu com maior população!\n", nomeCidade2);
    } else {
        printf("\nResultado: As duas cartas empataram em população!\n");
    }

    return 0;
}

