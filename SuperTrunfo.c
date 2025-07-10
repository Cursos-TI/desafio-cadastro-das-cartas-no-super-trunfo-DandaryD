#include <stdio.h>
#include <string.h>

int main() {
    // cidade 1
    char letra_cod1[2];
    char numero_cod1[3];
    char codigo1[5];
    char nome_cidade1[100];
    int populacao1;
    float area_cidade1;
    float PIB1;
    int pontos_turisticos1;

    // cidade 2
    char letra_cod2[2];
    char numero_cod2[3];
    char codigo2[5];
    char nome_cidade2[100];
    int populacao2;
    float area_cidade2;
    float PIB2;
    int pontos_turisticos2;

    // Cadastro da carta 1
    printf("Digite a letra do estado (A-H): ");
    scanf(" %1s", letra_cod1);

    printf("Digite o numero (01 a 04): ");
    scanf(" %2s", numero_cod1);

    getchar();  // limpa o '\n' deixado no buffer

    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; // remove o \n

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da Cidade em Km2: ");
    scanf("%f", &area_cidade1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da carta 2
    printf("Digite a letra do estado (A-H): ");
    scanf(" %1s", letra_cod2);

    printf("Digite o numero (01 a 04): ");
    scanf(" %2s", numero_cod2);

    getchar();  // limpa o '\n' do buffer

    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // remove o \n

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da Cidade em Km2: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Formar os códigos das cartas
    snprintf(codigo1, sizeof(codigo1), "%s%s", letra_cod1, numero_cod1);
    snprintf(codigo2, sizeof(codigo2), "%s%s", letra_cod2, numero_cod2);

    // Exibir as cartas
    printf("\n====== CARTA 1 ======\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area_cidade1);
    printf("PIB: %.2f Bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n====== CARTA 2 ======\n");
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area_cidade2);
    printf("PIB: %.2f Bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
