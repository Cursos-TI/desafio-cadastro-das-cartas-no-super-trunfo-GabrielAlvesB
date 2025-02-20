#include <stdio.h>
#include <locale.h> // Para suporte a acentos

// Função para calcular o "Super Poder" de uma cidade
double calcularSuperPoder(int populacao, float area, double pib, int pontos_turisticos) {
    return populacao + (1000 * area) + (1000000 * pib) + (500 * pontos_turisticos);
}

int main() {
    // Configurar localidade para português
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variáveis para duas cidades
    int codigo1, codigo2;
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    float densidade1, densidade2;
    double pib_per_capita1, pib_per_capita2;
    double super_poder1, super_poder2;

    // Mensagem inicial
    printf("=== 🏙️ Cadastro e Comparação de Cidades - Nível Mestre ===\n\n");

    // Entrada de dados da primeira cidade
    printf("📌 Cadastro da primeira cidade:\n");
    printf("Código: ");
    scanf("%d", &codigo1);
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%lf", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da segunda cidade
    printf("\n📌 Cadastro da segunda cidade:\n");
    printf("Código: ");
    scanf("%d", &codigo2);
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%lf", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;
    super_poder1 = calcularSuperPoder(populacao1, area1, pib1, pontos_turisticos1);
    super_poder2 = calcularSuperPoder(populacao2, area2, pib2, pontos_turisticos2);

    // Exibição dos dados cadastrados
    printf("\n✅ Comparação das Cidades:\n");
    printf("------------------------------------------------------\n");
    printf("🏙️ %s (Código %d)  VS  🏙️ %s (Código %d)\n", nome1, codigo1, nome2, codigo2);
    printf("------------------------------------------------------\n");

    // Comparação de cada atributo
    printf("👥 População: %d vs %d | 🏆 %s\n", populacao1, populacao2, populacao1 > populacao2 ? nome1 : nome2);
    printf("📏 Área: %.2f km² vs %.2f km² | 🏆 %s\n", area1, area2, area1 > area2 ? nome1 : nome2);
    printf("💰 PIB: %.2lf bi vs %.2lf bi | 🏆 %s\n", pib1, pib2, pib1 > pib2 ? nome1 : nome2);
    printf("🗺️ Pontos turísticos: %d vs %d | 🏆 %s\n", pontos_turisticos1, pontos_turisticos2, pontos_turisticos1 > pontos_turisticos2 ? nome1 : nome2);
    
    // Densidade (menor vence)
    printf("📊 Densidade Populacional: %.2f vs %.2f | 🏆 %s\n", densidade1, densidade2, densidade1 < densidade2 ? nome1 : nome2);

    // PIB per capita (maior vence)
    printf("💵 PIB per Capita: R$ %.2lf vs R$ %.2lf | 🏆 %s\n", pib_per_capita1, pib_per_capita2, pib_per_capita1 > pib_per_capita2 ? nome1 : nome2);

    // Comparação do "Super Poder"
    printf("\n⚡ SUPER PODER ⚡\n");
    printf("🔥 %s: %.0lf vs %.0lf :%s🔥\n", nome1, super_poder1, super_poder2, super_poder1 > super_poder2 ? nome1 : nome2);

    printf("\n🏆 Parabéns à cidade vencedora! 🚀\n");

    return 0;
}
