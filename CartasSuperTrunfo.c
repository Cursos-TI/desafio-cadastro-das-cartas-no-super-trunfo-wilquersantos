#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char letra_estado1;
    char codigo1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float tamanho1;
    float pib1;
    int pontos_tur1;
    float densidade1;
    float pib_por_pessoa1;
    float superpoder1;

    // Variáveis para a segunda carta
    char letra_estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float tamanho2;
    float pib2;
    int pontos_tur2;
    float densidade2;
    float pib_por_pessoa2;
    float superpoder2;


    // Cadastro da primeira cidade
    printf("Cadastro da Cidade 1:\n");
    
    // Lê os dados um por um
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &letra_estado1);
    
    printf("Codigo (3 letras/numeros): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);  // Lê nome com espaço
    
    printf("Numero da população: ");
    scanf("%lu", &populacao1);
    
    printf("Tamanho (km²): ");
    scanf("%f", &tamanho1);
    
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_tur1);
    
    // Calcula a densidade 
    densidade1 = populacao1 / tamanho1;
    
    // Calcula PIB por pessoa (converte bilhões para reais)
    pib_por_pessoa1 = (pib1 * 1000000000) / populacao1;

    // Cadastro da segunda cidade
    printf("\nCadastro da Cidade 2:\n");
    
    printf("Letra do Estado (A-H): ");
    scanf(" %c", &letra_estado2);
    
    printf("Codigo (3 letras/numeros): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Numero da população: ");
    scanf("%lu", &populacao2);
    
    printf("Tamanho (km²): ");
    scanf("%f", &tamanho2);
    
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_tur2);
    
    // Cálculos para a segunda cidade
    densidade2 = populacao2 / tamanho2;
    pib_por_pessoa2 = (pib2 * 1000000000) / populacao2;

                 //super poder carta 1
    superpoder1 = populacao1 + tamanho1 + pib1 + pontos_tur1 + pib_por_pessoa1 + (1/densidade1);

                //super poder carta 2
    superpoder2 = populacao2 + tamanho2 + pib2 + pontos_tur2 + pib_por_pessoa2 + (1/densidade2);

    // Mostra os resultados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", letra_estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f km²\n", tamanho1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_tur1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB por pessoa: %.2f reais\n", pib_por_pessoa1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Mostra os resultados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", letra_estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f km²\n", tamanho2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_tur2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB por pessoa: %.2f reais\n", pib_por_pessoa2);
    printf("Super Poder: %.2f\n", superpoder2);


    printf("Carta 1: %.2f\n", superpoder1);
    printf("Carta 2: %.2f\n", superpoder2);



    // COMPARAÇÃO DAS CARTAS
    printf("\nComparação de Cartas:\n");
    
    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n", 
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2) ? 1 : 0);
    
    // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n", 
           (tamanho1 > tamanho2) ? 1 : 2,
           (tamanho1 > tamanho2) ? 1 : 0);
    
    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", 
           (pib1 > pib2) ? 1 : 2,
           (pib1 > pib2) ? 1 : 0);
    
    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (pontos_tur1 > pontos_tur2) ? 1 : 2,
           (pontos_tur1 > pontos_tur2) ? 1 : 0);
    
    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (densidade1 < densidade2) ? 1 : 2,
           (densidade1 < densidade2) ? 1 : 0);
    
    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (pib_por_pessoa1 > pib_por_pessoa2) ? 1 : 2,
           (pib_por_pessoa1 > pib_por_pessoa2) ? 1 : 0);
    
    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (superpoder1 > superpoder2) ? 1 : 2,
           (superpoder1 > superpoder2) ? 1 : 0);


    return 0;
}