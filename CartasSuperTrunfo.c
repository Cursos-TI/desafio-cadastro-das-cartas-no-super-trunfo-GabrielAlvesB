#include <stdio.h>
#include <locale.h> // Para suporte a acentos

int main() {
    // Configurar localidade para português
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int codigo;
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade;
    double pib_per_capita;

    // Mensagem inicial
    printf("=== 🏙️ Cadastro de Cidades - Nível Aventureiro ===\n");

    // Entrada de dados
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Agora, informe o nome da cidade: ");
    scanf(" %[^\n]", nome);
    
    printf("Quantas pessoas vivem nessa cidade? ");
    scanf("%d", &populacao);
    
    printf("Qual a área total da cidade (em km²)? ");
    scanf("%f", &area);
    
    printf("Qual o PIB da cidade (em bilhões)? ");
    scanf("%lf", &pib);
    
    printf("Quantos pontos turísticos ela possui? ");
    scanf("%d", &pontos_turisticos);

    // Cálculo das novas propriedades
    densidade = populacao / area;
    pib_per_capita = pib / populacao;

    // Exibição dos dados cadastrados
    printf("\n✅ Cadastro concluído! Aqui estão os detalhes da cidade:\n");
    printf("------------------------------------------------------\n");
    printf("📌 Código: %d\n", codigo);
    printf("🏙️ Nome: %s\n", nome);
    printf("👥 População: %d habitantes\n", populacao);
    printf("📏 Área: %.2f km²\n", area);
    printf("💰 PIB: %.2lf bilhões\n", pib);
    printf("🗺️ Pontos turísticos: %d\n", pontos_turisticos);
    printf("📊 Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("💵 PIB per Capita: R$ %.2lf\n", pib_per_capita);
    printf("------------------------------------------------------\n");

    printf("\n🎉 Obrigado por cadastrar a cidade! Continue explorando. 🚀\n");

    return 0;
}
