#include <stdio.h>

int main() {
    char estado, codigo[5], nomeCidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    // Carta 1
    printf("Digite os dados para a Carta 1:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado);  

    printf("Código da Carta (ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade);

    printf("População da Cidade: ");
    scanf("%d", &populacao);

    printf("Área da Cidade (em km²): ");
    scanf("%f", &area);

    printf("PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibir dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // Carta 2
    printf("\nDigite os dados para a Carta 2:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado);  

    printf("Código da Carta (ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade);

    printf("População da Cidade: ");
    scanf("%d", &populacao);

    printf("Área da Cidade (em km²): ");
    scanf("%f", &area);

    printf("PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibir dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}