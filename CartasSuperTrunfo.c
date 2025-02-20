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

    // Menu interativo para escolher o atributo a ser comparado
    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:  // Comparação por População
            printf("\nComparação de cartas (Atributo: População)\n");
            printf("%s (%s): %d habitantes\n", cidade1, estado1, populacao1);
            printf("%s (%s): %d habitantes\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        
        case 2:  // Comparação por Área
            printf("\nComparação de cartas (Atributo: Área)\n");
            printf("%s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", cidade2, estado2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:  // Comparação por PIB
            printf("\nComparação de cartas (Atributo: PIB)\n");
            printf("%s (%s): %.2f bilhões\n", cidade1, estado1, pib1 / 1e9);
            printf("%s (%s): %.2f bilhões\n", cidade2, estado2, pib2 / 1e9);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:  // Comparação por número de pontos turísticos
            printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
            printf("%s (%s): %d pontos turísticos\n", cidade1, estado1, pontosTuristicos1);
            printf("%s (%s): %d pontos turísticos\n", cidade2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:  // Comparação por Densidade Demográfica
            printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
            printf("%s (%s): %.2f habitantes/km²\n", cidade1, estado1, densidade1);
            printf("%s (%s): %.2f habitantes/km²\n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2) {  // Menor densidade vence
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
