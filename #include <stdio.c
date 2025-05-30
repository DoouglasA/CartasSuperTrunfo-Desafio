#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    // Campos calculados
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular métricas adicionais
void calcularMetricas(Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = (carta->pib * 1000000000) / carta->populacao; // Convertendo PIB para reais
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta, int numeroCarta) {
    printf("\nCarta %d:\n", numeroCarta);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per capita: R$ %.2f\n", carta.pibPerCapita);
}

// Função para ler os dados de uma carta
void lerCarta(Carta *carta) {
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &carta->estado);

    printf("Código da Carta (ex: A01, B02): ");
    scanf("%s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", carta->nomeCidade);

    printf("População da Cidade: ");
    scanf("%d", &carta->populacao);

    printf("Área da Cidade (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Calcular métricas adicionais
    calcularMetricas(carta);
}

// Função para comparar as cartas e determinar a vencedora
void compararCartas(Carta carta1, Carta carta2) {
    // Vamos usar a população como atributo de comparação
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s: %d habitantes\n", carta1.nomeCidade, carta1.populacao);
    printf("Carta 2 - %s: %d habitantes\n", carta2.nomeCidade, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate!\n");
    }
}

int main() {
    Carta carta1, carta2;

    // Leitura dos dados das cartas
    printf("Digite os dados para a Carta 1:\n");
    lerCarta(&carta1);

    printf("\nDigite os dados para a Carta 2:\n");
    lerCarta(&carta2);

    // Exibir dados das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    // Comparar as cartas
    compararCartas(carta1, carta2);

    return 0;
}