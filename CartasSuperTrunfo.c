#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    

    // Declaração de variáveis para armazenar os dados da carta

    // Para a carta 1
    char estado1;
    char codigoDaCarta1[20];
    char nomeDaCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Identificação da primeira carta
    printf("-----Esta é a carta 1-------\n");

    // Coleta de informações da carta 1
    printf("-----------ESTADO-----------\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%c", &estado1);

    printf("------CÓDIGO DA CARTA-------\n");
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:AO1, B03): ");
    scanf("%s", codigoDaCarta1);

    printf("-------NOME DA CIDADE-------\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade1);

    printf("---------POPULAÇÃO----------\n");
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("-------ÁREA (em km²)--------\n");
    printf("Digite a área da cidae em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("-------------PIB------------\n");
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("NÚMERO DE PONTOS TURÍSTICOS.\n");
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Exibição dos dados inseridos para a carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);



    // Declaração de variáveis para armazenar os dados da carta

    // Para a carta 2
    char estado2;
    char codigoDaCarta2[20];
    char nomeDaCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Identificação da segunda carta
    printf("-----Esta é a carta 2-------\n");

    // Coleta de informações da carta 2
    printf("-----------ESTADO-----------\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2); // Adiciona espaço antes para consumir o \n pendente

    printf("------CÓDIGO DA CARTA-------\n");
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:AO1, B03): ");
    scanf("%s", codigoDaCarta2);

    printf("-------NOME DA CIDADE-------\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade2);

    printf("---------POPULAÇÃO----------\n");
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("-------ÁREA (em km²)--------\n");
    printf("Digite a área da cidae em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("-------------PIB------------\n");
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("NÚMERO DE PONTOS TURÍSTICOS.\n");
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados inseridos para a carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
