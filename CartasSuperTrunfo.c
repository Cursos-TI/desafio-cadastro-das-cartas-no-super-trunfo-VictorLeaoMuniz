#include <stdio.h>

int main() {
    // Atributos das duas cartas
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Entrada de dados da primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a população da cidade %s: ", codigo1);
    scanf("%d", &populacao1);

    printf("Digite a área da cidade %s (em km²): ", codigo1);
    scanf("%f", &area1);

    printf("Digite o PIB da cidade %s (em bilhões): ", codigo1);
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade %s: ", codigo1);
    scanf("%d", &pontos1);

    // Entrada de dados da segunda carta
    printf("\nDigite o código da segunda carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a população da cidade %s: ", codigo2);
    scanf("%d", &populacao2);

    printf("Digite a área da cidade %s (em km²): ", codigo2);
    scanf("%f", &area2);

    printf("Digite o PIB da cidade %s (em bilhões): ", codigo2);
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade %s: ", codigo2);
    scanf("%d", &pontos2);

    // Saída dos dados cadastrados
    printf("\n--- Dados da Carta 1 (%s) ---\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n--- Dados da Carta 2 (%s) ---\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
