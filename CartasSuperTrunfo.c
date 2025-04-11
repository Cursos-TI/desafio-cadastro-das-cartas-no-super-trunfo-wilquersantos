#include <stdio.h>

int main() {
    // Variáveis para a primeira cidade
    char letra_estado1;
    char codigo1[4];
    char nome_cidade1[50];
    int habitantes1;
    float tamanho1;
    float pib1;
    int pontos_tur1;
    float densidade1;
    float pib_por_pessoa1;

    // Variáveis para a segunda cidade
    char letra_estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int habitantes2;
    float tamanho2;
    float pib2;
    int pontos_tur2;
    float densidade2;
    float pib_por_pessoa2;

    // Cadastro da primeira cidade
    printf("Cadastro da Cidade 1:\n");
    
    // Lê os dados um por um
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &letra_estado1);
    
    printf("Codigo (3 letras/numeros): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);  // Lê nome com espaço
    
    printf("Numero de Habitantes: ");
    scanf("%d", &habitantes1);
    
    printf("Tamanho (km²): ");
    scanf("%f", &tamanho1);
    
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_tur1);
    
    // Calcula a densidade (habitantes por km²)
    densidade1 = habitantes1 / tamanho1;
    
    // Calcula PIB por pessoa (converte bilhões para reais)
    pib_por_pessoa1 = (pib1 * 1000000000) / habitantes1;

    // Cadastro da segunda cidade (igual ao primeiro)
    printf("\nCadastro da Cidade 2:\n");
    
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &letra_estado2);
    
    printf("Codigo (3 letras/numeros): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Numero de Habitantes: ");
    scanf("%d", &habitantes2);
    
    printf("Tamanho (km²): ");
    scanf("%f", &tamanho2);
    
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_tur2);
    
    // Cálculos para a segunda cidade
    densidade2 = habitantes2 / tamanho2;
    pib_por_pessoa2 = (pib2 * 1000000000) / habitantes2;

    // Mostra os resultados da primeira cidade
    printf("\nCidade 1:\n");
    printf("Estado: %c\n", letra_estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome_cidade1);
    printf("Habitantes: %d\n", habitantes1);
    printf("Area: %.2f km²\n", tamanho1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_tur1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB por pessoa: %.2f reais\n", pib_por_pessoa1);

    // Mostra os resultados da segunda cidade
    printf("\nCidade 2:\n");
    printf("Estado: %c\n", letra_estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome_cidade2);
    printf("Habitantes: %d\n", habitantes2);
    printf("Area: %.2f km²\n", tamanho2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_tur2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB por pessoa: %.2f reais\n", pib_por_pessoa2);

    return 0;
}