#include <stdio.h>
#include <windows.h>

// Constantes
#define BILHAO 1000000000.0
#define TAMANHO_NOME_CIDADE 50
#define TAMANHO_CODIGO 5

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    // Variáveis - Carta 1
    char estado1;
    char codigo1[TAMANHO_CODIGO];
    char cidade1[TAMANHO_NOME_CIDADE];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Variáveis - Carta 2
    char estado2;
    char codigo2[TAMANHO_CODIGO];
    char cidade2[TAMANHO_NOME_CIDADE];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Leitura dos dados - Carta 1
    printf("CARTA 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    while(getchar() != '\n');
    printf("Digite o código da carta: ");
    scanf(" %s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Leitura dos dados - Carta 2
    printf("\nCARTA 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    while(getchar() != '\n');
    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Cálculos - Carta 1
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * BILHAO) / (float)populacao1; // Convertendo bilhões para unidades
    
    // Cálculos - Carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * BILHAO) / (float)populacao2; // Convertendo bilhões para unidades
    
    // Cálculo do Super Poder - Carta 1
    float inversoDensidade1 = 1.0 / densidade1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;
    
    // Cálculo do Super Poder - Carta 2
    float inversoDensidade2 = 1.0 / densidade2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;
    
    // Exibição dos dados - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    // Exibição dos dados - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }
    
    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }
    
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }
    
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }
    
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }
    
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    
    return 0;
}
