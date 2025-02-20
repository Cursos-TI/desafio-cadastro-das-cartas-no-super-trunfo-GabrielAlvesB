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

    // Comparação de cartas
    printf("\nComparação de cartas (Atributo: População)\n");
    printf("%s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("%s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    // Determinação do vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: %s venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: %s venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
