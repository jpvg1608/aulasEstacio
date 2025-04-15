#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis individuais
    char estado;
    char codigo[4];         // Ex: A01
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("=== Cadastro de Carta ===\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    int numero;
    printf("Digite o número da carta (01 a 04): ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 4) {
        printf("Número inválido! Use de 01 a 04.\n");
        return 1;
    }

    sprintf(codigo, "%c%02d", estado, numero);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibir os dados
    printf("\n=== Carta Cadastrada ===\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
