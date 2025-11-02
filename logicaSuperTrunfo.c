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
    
    // Menu para escolher modo de cadastro
    int modo_teste;
    printf("========================================\n");
    printf("     SUPER TRUNFO - PAISES\n");
    printf("========================================\n");
    printf("Escolha o modo de cadastro:\n\n");
    printf("1 - Cadastrar manualmente\n");
    printf("2 - Usar dados de teste\n");
    printf("========================================\n");
    printf("Digite sua escolha (1-2): ");
    scanf("%d", &modo_teste);
    
    if (modo_teste == 2) {
        // Modo de teste: usar dados pré-definidos
        printf("\n=== MODO DE TESTE ATIVADO ===\n");
        printf("Usando dados de exemplo para teste...\n\n");
        
        // Dados de teste - Carta 1 (Brasil)
        // Copiar o nome "Brasil" para a variável pais1
        pais1[0] = 'B'; pais1[1] = 'r'; pais1[2] = 'a'; pais1[3] = 's'; 
        pais1[4] = 'i'; pais1[5] = 'l'; pais1[6] = '\0';
        populacao1 = 214000000;
        area1 = 8517000.0;
        pib1 = 2000.18;
        pontosTuristicos1 = 12;
        
        // Dados de teste - Carta 2 (Argentina)
        // Copiar o nome "Argentina" para a variável pais2
        pais2[0] = 'A'; pais2[1] = 'r'; pais2[2] = 'g'; pais2[3] = 'e';
        pais2[4] = 'n'; pais2[5] = 't'; pais2[6] = 'i'; pais2[7] = 'n';
        pais2[8] = 'a'; pais2[9] = '\0';
        populacao2 = 45000000;
        area2 = 2770000.0;
        pib2 = 633.03;
        pontosTuristicos2 = 8;
        
        printf("Cartas cadastradas automaticamente:\n");
        printf("- Carta 1: %s\n", pais1);
        printf("- Carta 2: %s\n\n", pais2);
    } else if (modo_teste == 1) {
        // Modo manual: ler dados do usuário
        // Leitura dos dados - Carta 1
        printf("\n==== CARTA 1 ====\n");
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
    } else {
        printf("\nERRO: Opcao invalida! Use 1 para modo manual ou 2 para modo de teste.\n");
        return 1;
    }
    
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
    
    // Menu dinâmico para escolha dos atributos
    int opcao1, opcao2;
    float valor1_1, valor2_1, valor1_2, valor2_2;
    int regraInvertida1 = 0, regraInvertida2 = 0;
    
    printf("\n========================================\n");
    printf("       MENU DE COMPARACAO\n");
    printf("========================================\n");
    printf("Escolha o PRIMEIRO atributo:\n\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("========================================\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &opcao1);
    
    // Obter valores do primeiro atributo
    switch(opcao1) {
        case 1:
            valor1_1 = (float)populacao1;
            valor2_1 = (float)populacao2;
            regraInvertida1 = 0;
            break;
        case 2:
            valor1_1 = area1;
            valor2_1 = area2;
            regraInvertida1 = 0;
            break;
        case 3:
            valor1_1 = pib1;
            valor2_1 = pib2;
            regraInvertida1 = 0;
            break;
        case 4:
            valor1_1 = (float)pontosTuristicos1;
            valor2_1 = (float)pontosTuristicos2;
            regraInvertida1 = 0;
            break;
        case 5:
            valor1_1 = densidade1;
            valor2_1 = densidade2;
            regraInvertida1 = 1;
            break;
        default:
            printf("\nERRO: Opcao invalida! Escolha uma opcao entre 1 e 5.\n");
            return 1;
    }
    
    // Menu dinâmico para escolha do segundo atributo
    printf("\n========================================\n");
    printf("Escolha o SEGUNDO atributo (diferente do primeiro):\n\n");
    
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Numero de Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica\n");
    
    printf("========================================\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao2);
    
    // Validar segunda opção
    if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5) {
        printf("\nERRO: Opcao invalida ou igual ao primeiro atributo!\n");
        return 1;
    }
    
    // Obter valores do segundo atributo
    switch(opcao2) {
        case 1:
            valor1_2 = (float)populacao1;
            valor2_2 = (float)populacao2;
            regraInvertida2 = 0;
            break;
        case 2:
            valor1_2 = area1;
            valor2_2 = area2;
            regraInvertida2 = 0;
            break;
        case 3:
            valor1_2 = pib1;
            valor2_2 = pib2;
            regraInvertida2 = 0;
            break;
        case 4:
            valor1_2 = (float)pontosTuristicos1;
            valor2_2 = (float)pontosTuristicos2;
            regraInvertida2 = 0;
            break;
        case 5:
            valor1_2 = densidade1;
            valor2_2 = densidade2;
            regraInvertida2 = 1;
            break;
        default:
            printf("\nERRO: Opcao invalida!\n");
            return 1;
    }
    
    // Comparar atributos (1 = carta 1 vence, 2 = carta 2 vence, 0 = empate)
    int vencedor_atributo1;
    if (regraInvertida1 == 0) {
        if (valor1_1 > valor2_1) vencedor_atributo1 = 1;
        else if (valor1_1 < valor2_1) vencedor_atributo1 = 2;
        else vencedor_atributo1 = 0;
    } else {
        if (valor1_1 < valor2_1) vencedor_atributo1 = 1;
        else if (valor1_1 > valor2_1) vencedor_atributo1 = 2;
        else vencedor_atributo1 = 0;
    }
    
    int vencedor_atributo2;
    if (regraInvertida2 == 0) {
        if (valor1_2 > valor2_2) vencedor_atributo2 = 1;
        else if (valor1_2 < valor2_2) vencedor_atributo2 = 2;
        else vencedor_atributo2 = 0;
    } else {
        if (valor1_2 < valor2_2) vencedor_atributo2 = 1;
        else if (valor1_2 > valor2_2) vencedor_atributo2 = 2;
        else vencedor_atributo2 = 0;
    }
    
    // Calcular valores normalizados para soma (usar inverso se densidade)
    float valor_soma1_1 = (opcao1 == 5) ? (1.0 / densidade1) : valor1_1;
    float valor_soma2_1 = (opcao1 == 5) ? (1.0 / densidade2) : valor2_1;
    float valor_soma1_2 = (opcao2 == 5) ? (1.0 / densidade1) : valor1_2;
    float valor_soma2_2 = (opcao2 == 5) ? (1.0 / densidade2) : valor2_2;
    
    float soma1 = valor_soma1_1 + valor_soma1_2;
    float soma2 = valor_soma2_1 + valor_soma2_2;
    
    // Rodada 3: Comparar soma dos atributos
    int vencedor_soma = (soma1 > soma2) ? 1 : ((soma1 < soma2) ? 2 : 0);
    
    // Contar vitórias de cada país
    int vitorias_pais1 = 0, vitorias_pais2 = 0;
    if (vencedor_atributo1 == 1) vitorias_pais1++;
    else if (vencedor_atributo1 == 2) vitorias_pais2++;
    if (vencedor_atributo2 == 1) vitorias_pais1++;
    else if (vencedor_atributo2 == 2) vitorias_pais2++;
    if (vencedor_soma == 1) vitorias_pais1++;
    else if (vencedor_soma == 2) vitorias_pais2++;
    
    // Determinar vencedor final (maioria de vitórias)
    int vencedor_final = (vitorias_pais1 > vitorias_pais2) ? 1 : 
                        ((vitorias_pais2 > vitorias_pais1) ? 2 : 0);
    
    // Exibição dos resultados
    printf("\n========================================\n");
    printf("       RESULTADO DA COMPARACAO\n");
    printf("========================================\n");
    printf("Atributos escolhidos:\n");
    printf("  1. ");
    if (opcao1 == 1) printf("Populacao\n");
    else if (opcao1 == 2) printf("Area\n");
    else if (opcao1 == 3) printf("PIB\n");
    else if (opcao1 == 4) printf("Numero de Pontos Turisticos\n");
    else printf("Densidade Demografica\n");
    
    printf("  2. ");
    if (opcao2 == 1) printf("Populacao\n");
    else if (opcao2 == 2) printf("Area\n");
    else if (opcao2 == 3) printf("PIB\n");
    else if (opcao2 == 4) printf("Numero de Pontos Turisticos\n");
    else printf("Densidade Demografica\n");
    
    printf("\n");
    printf("========================================\n");
    printf("RODADA 1: PRIMEIRO ATRIBUTO\n");
    printf("========================================\n");
    
    // Rodada 1: Exibir comparação do primeiro atributo
    printf("Atributo: ");
    if (opcao1 == 1) printf("Populacao\n");
    else if (opcao1 == 2) printf("Area\n");
    else if (opcao1 == 3) printf("PIB\n");
    else if (opcao1 == 4) printf("Pontos Turisticos\n");
    else printf("Densidade Demografica\n");
    
    printf("  %s: ", pais1);
    if (opcao1 == 1) printf("%lu habitantes\n", populacao1);
    else if (opcao1 == 2) printf("%.2f km²\n", area1);
    else if (opcao1 == 3) printf("%.2f bilhoes\n", pib1);
    else if (opcao1 == 4) printf("%d pontos\n", pontosTuristicos1);
    else printf("%.2f hab/km²\n", densidade1);
    
    printf("  %s: ", pais2);
    if (opcao1 == 1) printf("%lu habitantes\n", populacao2);
    else if (opcao1 == 2) printf("%.2f km²\n", area2);
    else if (opcao1 == 3) printf("%.2f bilhoes\n", pib2);
    else if (opcao1 == 4) printf("%d pontos\n", pontosTuristicos2);
    else printf("%.2f hab/km²\n", densidade2);
    
    printf("Vencedor da rodada 1: ");
    if (vencedor_atributo1 == 0) printf("EMPATE\n");
    else if (vencedor_atributo1 == 1) printf("%s\n", pais1);
    else printf("%s\n", pais2);
    
    // Rodada 2: Exibir comparação do segundo atributo
    printf("\n========================================\n");
    printf("RODADA 2: SEGUNDO ATRIBUTO\n");
    printf("========================================\n");
    printf("Atributo: ");
    if (opcao2 == 1) printf("Populacao\n");
    else if (opcao2 == 2) printf("Area\n");
    else if (opcao2 == 3) printf("PIB\n");
    else if (opcao2 == 4) printf("Pontos Turisticos\n");
    else printf("Densidade Demografica\n");
    
    printf("  %s: ", pais1);
    if (opcao2 == 1) printf("%lu habitantes\n", populacao1);
    else if (opcao2 == 2) printf("%.2f km²\n", area1);
    else if (opcao2 == 3) printf("%.2f bilhoes\n", pib1);
    else if (opcao2 == 4) printf("%d pontos\n", pontosTuristicos1);
    else printf("%.2f hab/km²\n", densidade1);
    
    printf("  %s: ", pais2);
    if (opcao2 == 1) printf("%lu habitantes\n", populacao2);
    else if (opcao2 == 2) printf("%.2f km²\n", area2);
    else if (opcao2 == 3) printf("%.2f bilhoes\n", pib2);
    else if (opcao2 == 4) printf("%d pontos\n", pontosTuristicos2);
    else printf("%.2f hab/km²\n", densidade2);
    
    printf("Vencedor da rodada 2: ");
    if (vencedor_atributo2 == 0) printf("EMPATE\n");
    else if (vencedor_atributo2 == 1) printf("%s\n", pais1);
    else printf("%s\n", pais2);
    
    // Rodada 3: Exibir soma dos atributos
    printf("\n========================================\n");
    printf("RODADA 3: SOMA DOS ATRIBUTOS\n");
    printf("========================================\n");
    printf("%s: %.2f + %.2f = %.2f\n", pais1, valor_soma1_1, valor_soma1_2, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", pais2, valor_soma2_1, valor_soma2_2, soma2);
    printf("Vencedor da rodada 3: ");
    if (vencedor_soma == 0) printf("EMPATE\n");
    else if (vencedor_soma == 1) printf("%s\n", pais1);
    else printf("%s\n", pais2);
    
    // Resultado final: maioria de vitórias
    printf("\n========================================\n");
    printf("RESULTADO FINAL (MAIORIA DE VITORIAS):\n");
    printf("========================================\n");
    printf("%s ganhou %d rodada(s)\n", pais1, vitorias_pais1);
    printf("%s ganhou %d rodada(s)\n\n", pais2, vitorias_pais2);
    
    if (vencedor_final == 0) {
        printf("EMPATE!\n");
        printf("As duas cartas empataram nas rodadas\n");
    } else {
        printf("VENCEDOR: Carta %d - %s (%d de 3 rodadas)\n", 
               vencedor_final, vencedor_final == 1 ? pais1 : pais2,
               vencedor_final == 1 ? vitorias_pais1 : vitorias_pais2);
    }
    
    printf("========================================\n");
    
    return 0;
}
