#include <stdio.h>

// Função para calcular a densidade populacional
float calcularDensidade(int populacao, float area) {
    return (area > 0) ? populacao / area : 0;
}

// Função para calcular o PIB per capita
double calcularPibPerCapita(double pib, int populacao) {
    return (populacao > 0) ? pib / populacao : 0;
}

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1[30], estado2[30];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira cidade: ");
    scanf("%s", estado1);
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib1);
    pib1 *= 1e9;  // Convertendo para valor real
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("\nDigite o estado da segunda cidade: ");
    scanf("%s", estado2);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib2);
    pib2 *= 1e9;  // Convertendo para valor real
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos valores
    float densidade1 = calcularDensidade(populacao1, area1);
    float densidade2 = calcularDensidade(populacao2, area2);
    double pibPerCapita1 = calcularPibPerCapita(pib1, populacao1);
    double pibPerCapita2 = calcularPibPerCapita(pib2, populacao2);

    // Menu interativo para escolher o primeiro atributo
    int escolha1;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // Menu interativo para escolher o segundo atributo (não pode ser o mesmo)
    int escolha2;
    do {
        printf("\nEscolha o segundo atributo para comparação (não pode ser o mesmo que o primeiro):\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha2);
    } while (escolha1 == escolha2);  // Garante que os atributos não sejam os mesmos

    // Comparação e cálculo da soma
    float soma1 = 0, soma2 = 0;
    char *atributo1, *atributo2;
    float valor1, valor2;
    
    // Comparação do primeiro atributo
    switch (escolha1) {
        case 1: // População
            atributo1 = "População";
            valor1 = populacao1;
            valor2 = populacao2;
            break;
        case 2: // Área
            atributo1 = "Área";
            valor1 = area1;
            valor2 = area2;
            break;
        case 3: // PIB
            atributo1 = "PIB";
            valor1 = pib1 / 1e9;  // Convertendo para bilhões
            valor2 = pib2 / 1e9;  // Convertendo para bilhões
            break;
        case 4: // Pontos turísticos
            atributo1 = "Pontos Turísticos";
            valor1 = pontosTuristicos1;
            valor2 = pontosTuristicos2;
            break;
        case 5: // Densidade Demográfica
            atributo1 = "Densidade Demográfica";
            valor1 = densidade1;
            valor2 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }
    soma1 += valor1;
    soma2 += valor2;

    // Comparação do segundo atributo
    switch (escolha2) {
        case 1: // População
            atributo2 = "População";
            valor1 = populacao1;
            valor2 = populacao2;
            break;
        case 2: // Área
            atributo2 = "Área";
            valor1 = area1;
            valor2 = area2;
            break;
        case 3: // PIB
            atributo2 = "PIB";
            valor1 = pib1 / 1e9;  // Convertendo para bilhões
            valor2 = pib2 / 1e9;  // Convertendo para bilhões
            break;
        case 4: // Pontos turísticos
            atributo2 = "Pontos Turísticos";
            valor1 = pontosTuristicos1;
            valor2 = pontosTuristicos2;
            break;
        case 5: // Densidade Demográfica
            atributo2 = "Densidade Demográfica";
            valor1 = densidade1;
            valor2 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }
    soma1 += valor1;
    soma2 += valor2;

    // Exibição dos resultados
    printf("\nComparação de cartas:\n");
    printf("%s (%s): %.2f\n", cidade1, estado1, soma1);
    printf("%s (%s): %.2f\n", cidade2, estado2, soma2);

    // Resultado da comparação final
    if (soma1 > soma2) {
        printf("Resultado: %s venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Resultado: %s venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
