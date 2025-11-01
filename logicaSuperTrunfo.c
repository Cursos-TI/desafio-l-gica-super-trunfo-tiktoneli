#include <stdio.h>
#include <windows.h>

// Constantes
#define TAMANHO_NOME_PAIS 50

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    // Variáveis - Carta 1
    char pais1[TAMANHO_NOME_PAIS];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Variáveis - Carta 2
    char pais2[TAMANHO_NOME_PAIS];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Leitura dos dados - Carta 1
    printf("==== CARTA 1 ====\n");
    printf("Digite o nome do pais: ");
    scanf(" %[^\n]", pais1);
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Leitura dos dados - Carta 2
    printf("\n==== CARTA 2 ====\n");
    printf("Digite o nome do pais: ");
    scanf(" %[^\n]", pais2);
    
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
    
    // Cálculos - Carta 2
    float densidade2 = (float)populacao2 / area2;
    
    // Exibição dos dados - Carta 1
    printf("\n=== CARTA 1 ===\n");
    printf("Pais: %s\n", pais1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade1);
    
    // Exibição dos dados - Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Pais: %s\n", pais2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade2);
    
    // Menu interativo para escolha do atributo de comparação
    int opcao;
    printf("\n========================================\n");
    printf("       MENU DE COMPARACAO\n");
    printf("========================================\n");
    printf("Escolha o atributo para comparar as cartas:\n\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("========================================\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &opcao);
    
    // Variáveis para armazenar os valores a serem comparados
    float valor1, valor2;
    int regraInvertida = 0; // 0 = maior vence, 1 = menor vence
    
    // Switch para definir o atributo escolhido e aplicar a lógica de comparação
    switch(opcao) {
        case 1:
            valor1 = (float)populacao1;
            valor2 = (float)populacao2;
            regraInvertida = 0;
            break;
            
        case 2:
            valor1 = area1;
            valor2 = area2;
            regraInvertida = 0;
            break;
            
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            regraInvertida = 0;
            break;
            
        case 4:
            valor1 = (float)pontosTuristicos1;
            valor2 = (float)pontosTuristicos2;
            regraInvertida = 0;
            break;
            
        case 5:
            //(regra invertida - menor vence)
            valor1 = densidade1;
            valor2 = densidade2;
            regraInvertida = 1;
            break;
            
        default:
            printf("\nERRO: Opcao invalida! Escolha uma opcao entre 1 e 5.\n");
            return 1;
    }
    
    printf("\n========================================\n");
    printf("       RESULTADO DA COMPARACAO\n");
    printf("========================================\n");
    
    // Exibir o atributo escolhido e os valores
    if (opcao == 1) {
        printf("Atributo escolhido: Populacao\n\n");
        printf("Pais 1 (%s): %lu habitantes\n", pais1, populacao1);
        printf("Pais 2 (%s): %lu habitantes\n", pais2, populacao2);
    } else if (opcao == 2) {
        printf("Atributo escolhido: Area\n\n");
        printf("Pais 1 (%s): %.2f km²\n", pais1, area1);
        printf("Pais 2 (%s): %.2f km²\n", pais2, area2);
    } else if (opcao == 3) {
        printf("Atributo escolhido: PIB\n\n");
        printf("Pais 1 (%s): %.2f bilhoes de reais\n", pais1, pib1);
        printf("Pais 2 (%s): %.2f bilhoes de reais\n", pais2, pib2);
    } else if (opcao == 4) {
        printf("Atributo escolhido: Numero de Pontos Turisticos\n\n");
        printf("Pais 1 (%s): %d pontos turisticos\n", pais1, pontosTuristicos1);
        printf("Pais 2 (%s): %d pontos turisticos\n", pais2, pontosTuristicos2);
    } else {
        printf("Atributo escolhido: Densidade Demografica\n\n");
        printf("Pais 1 (%s): %.2f hab/km²\n", pais1, densidade1);
        printf("Pais 2 (%s): %.2f hab/km²\n", pais2, densidade2);
    }
    
    printf("\n");
    
    // Lógica de comparação com if-else aninhados
    if (regraInvertida == 0) {
        // Regra padrão: maior valor vence
        if (valor1 > valor2) {
            printf("VENCEDOR: Carta 1 - %s\n", pais1);
            if (opcao == 1) {
                printf("A carta de %s venceu com %lu de Populacao!\n", pais1, populacao1);
            } else if (opcao == 2) {
                printf("A carta de %s venceu com %.2f de Area!\n", pais1, area1);
            } else if (opcao == 3) {
                printf("A carta de %s venceu com %.2f de PIB!\n", pais1, pib1);
            } else {
                printf("A carta de %s venceu com %d de Pontos Turisticos!\n", pais1, pontosTuristicos1);
            }
        } else {
            // Verificação de empate aninhada
            if (valor1 == valor2) {
                printf("EMPATE!\n");
                if (opcao == 1) {
                    printf("As duas cartas tem o mesmo valor de Populacao: %lu\n", populacao1);
                } else if (opcao == 2) {
                    printf("As duas cartas tem o mesmo valor de Area: %.2f\n", area1);
                } else if (opcao == 3) {
                    printf("As duas cartas tem o mesmo valor de PIB: %.2f\n", pib1);
                } else {
                    printf("As duas cartas tem o mesmo valor de Pontos Turisticos: %d\n", pontosTuristicos1);
                }
            } else {
                printf("VENCEDOR: Carta 2 - %s\n", pais2);
                if (opcao == 1) {
                    printf("A carta de %s venceu com %lu de Populacao!\n", pais2, populacao2);
                } else if (opcao == 2) {
                    printf("A carta de %s venceu com %.2f de Area!\n", pais2, area2);
                } else if (opcao == 3) {
                    printf("A carta de %s venceu com %.2f de PIB!\n", pais2, pib2);
                } else {
                    printf("A carta de %s venceu com %d de Pontos Turisticos!\n", pais2, pontosTuristicos2);
                }
            }
        }
    } else {
        // Regra invertida: menor valor vence (para Densidade Demográfica)
        if (valor1 < valor2) {
            printf("VENCEDOR: Carta 1 - %s\n", pais1);
            printf("A carta de %s venceu com %.2f de Densidade Demografica!\n", 
                   pais1, densidade1);
            printf("(Menor densidade vence)\n");
        } else {
            // Verificação de empate aninhada
            if (valor1 == valor2) {
                printf("EMPATE!\n");
                printf("As duas cartas tem o mesmo valor de Densidade Demografica: %.2f\n", 
                       densidade1);
            } else {
                printf("VENCEDOR: Carta 2 - %s\n", pais2);
                printf("A carta de %s venceu com %.2f de Densidade Demografica!\n", 
                       pais2, densidade2);
                printf("(Menor densidade vence)\n");
            }
        }
    }
    
    printf("========================================\n");
    
    return 0;
}
