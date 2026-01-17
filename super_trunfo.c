#include <stdio.h>

/* Remove o ENTER do fgets */
void limparEnter(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {

    /* ===== CARTA 1 ===== */
    char pais1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    float densidade1;

    /* ===== CARTA 2 ===== */
    char pais2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    float densidade2;

    int opcao;

    /* ===== ENTRADA CARTA 1 ===== */
    printf("Digite o nome do Pais da Carta 1: ");
    fgets(pais1, sizeof(pais1), stdin);
    limparEnter(pais1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;

    getchar(); // limpa buffer

    /* ===== ENTRADA CARTA 2 ===== */
    printf("\nDigite o nome do Pais da Carta 2: ");
    fgets(pais2, sizeof(pais2), stdin);
    limparEnter(pais2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;

    /* ===== MENU ===== */
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");
    printf("%s VS %s\n", pais1, pais2);

    switch (opcao) {

        case 1:
            printf("Atributo: Populacao\n");
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("(Menor densidade vence)\n");
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", pais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
