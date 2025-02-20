#include <stdio.h>
#include <locale.h> // Biblioteca para ajustar acentos

int main()
{
    // Configurar a localidade para português
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int codigo;
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;

    // Mensagem inicial
    printf("=== Cadastro de Cidades ===\n");

    // Entrada de dados com interação
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

    // Exibição dos dados cadastrados
    printf("\nCadastro concluído! Aqui estão os detalhes da cidade:\n");
    printf("----------------------------------------\n");
    printf("📌 Código: %d\n", codigo);
    printf("🏙️ Nome: %s\n", nome);
    printf("👥 População: %d habitantes\n", populacao);
    printf("📏 Área: %.2f km²\n", area);
    printf("💰 PIB: %.2lf bilhões\n", pib);
    printf("🗺️ Pontos turísticos: %d\n", pontos_turisticos);
    printf("----------------------------------------\n");

    printf("\nObrigado por cadastrar a cidade! 😊\n");

    return 0;
}
