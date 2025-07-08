#include <stdio.h>

int main() {
    // Dados da carta 1
    int estado1, cidade1;
    char codigo1[4];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Dados da carta 2
    int estado2, cidade2;
    char codigo2[4];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Entrada dos dados da carta 1
    printf("Cadastro da carta 1\n");
    printf("Numero do estado (0 a 7): ");
    scanf("%d", &estado1);
    printf("Numero da cidade (1 a 4): ");
    scanf("%d", &cidade1);
    codigo1[0] = 'A' + estado1;
    sprintf(&codigo1[1], "%02d", cidade1);
    codigo1[3] = '\0';
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada dos dados da carta 2
    printf("Cadastro da carta 2\n");
    printf("Numero do estado (0 a 7): ");
    scanf("%d", &estado2);
    printf("Numero da cidade (1 a 4): ");
    scanf("%d", &cidade2);
    codigo2[0] = 'A' + estado2;
    sprintf(&codigo2[1], "%02d", cidade2);
    codigo2[3] = '\0';
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibicao final
    printf("\n===========================\n");
    printf("     CARTAS CADASTRADAS     \n");
    printf("===========================\n");

    // Carta 1
    printf("\n------ CARTA 1 ------\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f Bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);

    // Carta 2
    printf("\n------ CARTA 2 ------\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

    printf("\n===========================\n");

    return 0;
}
