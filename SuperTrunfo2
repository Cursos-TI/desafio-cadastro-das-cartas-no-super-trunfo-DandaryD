#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
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


// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     printf("Digite a letra do estado (A-H): ");
         scanf(" %s", letra_cod1);

     printf("Digite o numero (01 a 04): ");
         scanf(" %s", numero_cod1);
 
     printf("Digite o nome da Cidade: ");
         scanf("%s", nome_cidade1); 

     printf("Digite o numero de habitantes da cidade: ");
         scanf("%d", &populacao1); // & = operador de endereço do scanf

     printf("Digite a area da Cidade em Km2: ");
         scanf("%f", &area_cidade1); //no scanf, usando o float n preciso dizer o numero de casas decimais apenas %f

     printf("Digite o PIB da Cidade: ");
         scanf("%f", &PIB1);

     printf("Digite o numero de pontos turisticos da cidade: ");
         scanf("%d", &pontos_turisticos1);

      printf("\n========================================================\n");

    // Cadastro da carta 2
    
     printf("Digite a letra do estado (A - H): ");
         scanf(" %s", letra_cod2);

     printf("Digite o numero (01 a 04): ");
         scanf(" %s", numero_cod2);

     printf("Digite o nome da Cidade: ");
         scanf(" %s", nome_cidade2); 

     printf("Digite o numero de habitantes da cidade: ");
         scanf(" %d", &populacao2); // & = operador de endereço do scanf

     printf("Digite a area da Cidade em Km2: ");
         scanf("%f", &area_cidade2); //no scanf, usando o float n preciso dizer o numero de casas decimais apenas %f

     printf("Digite o PIB da Cidade: ");
         scanf("%f", &PIB2);

     printf("Digite o numero de pontos turisticos da cidade: \n");
         scanf("%d", &pontos_turisticos2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Formar os códigos das cartas
     snprintf(codigo1, sizeof(codigo1), "%s%s", letra_cod1, numero_cod1);
     snprintf(codigo2, sizeof(codigo2), "%s%s", letra_cod2, numero_cod2);

    // Exibir as cartas

     printf("\n Cartas cadastrdas: \n");
     printf("\n====== CARTA 1 ======\n");
     printf("Codigo: %s\n", codigo1);
     printf("Nome da cidade: %s\n", nome_cidade1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %.2f km2\n", area_cidade1);
     printf("PIB: %.2f Bilhoes\n", PIB1);
     printf("Pontos Turisticos: %d\n", pontos_turisticos1);

     printf("\n====== CARTA 2 ======\n");
     printf("Codigo: %s\n", codigo2);
     printf("Nome da cidade: %s\n", nome_cidade2);
     printf("Populacao: %d\n", populacao2);
     printf("Area: %.2f km2\n", area_cidade2);
     printf("PIB: %.2f Bilhoes\n", PIB2);
     printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}

