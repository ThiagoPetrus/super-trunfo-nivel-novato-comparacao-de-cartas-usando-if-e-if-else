#include <stdio.h>

/*
 Super Trunfo - Nivel Mestre
 Comparacao avancada de cartas utilizando dois atributos escolhidos pelo usuario.
 O sistema utiliza menus dinamicos, switch, if-else e operador ternario.
 Regra especial: para densidade demografica, o MENOR valor vence.
*/

/* ===============================
   FUNCAO PRINCIPAL
   =============================== */
int main() {

    /* ===== CARTAS PRE-CADASTRADAS ===== */
    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    unsigned long int populacao1 = 214000000;
    unsigned long int populacao2 = 46000000;

    float area1 = 8515767.0;
    float area2 = 2780400.0;

    float pib1 = 1900.0;
    float pib2 = 630.0;

    int pontos1 = 20;
    int pontos2 = 15;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    /* ===== ESCOLHA DOS ATRIBUTOS ===== */
    int atributo1, atributo2;

    /* ===== VALORES DOS ATRIBUTOS ===== */
    float v1_attr1, v2_attr1;
    float v1_attr2, v2_attr2;

    float soma1, soma2;

    /* ===============================
       MENU - PRIMEIRO ATRIBUTO
       =============================== */
    printf("\n=== SUPER TRUNFO - NIVEL MESTRE ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    /* ===============================
       MENU DINAMICO - SEGUNDO ATRIBUTO
       =============================== */
    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    /* ===== VALIDACAO ===== */
    if (atributo1 == atributo2) {
        printf("\nErro: nao e permitido escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    /* ===============================
       ATRIBUTO 1 -> VALORES
       =============================== */
    switch (atributo1) {
        case 1: v1_attr1 = populacao1; v2_attr1 = populacao2; break;
        case 2: v1_attr1 = area1;       v2_attr1 = area2;       break;
        case 3: v1_attr1 = pib1;        v2_attr1 = pib2;        break;
        case 4: v1_attr1 = pontos1;     v2_attr1 = pontos2;     break;
        case 5: v1_attr1 = densidade1;  v2_attr1 = densidade2;  break;
        default:
            printf("Atributo invalido.\n");
            return 1;
    }

    /* ===============================
       ATRIBUTO 2 -> VALORES
       =============================== */
    switch (atributo2) {
        case 1: v1_attr2 = populacao1; v2_attr2 = populacao2; break;
        case 2: v1_attr2 = area1;       v2_attr2 = area2;       break;
        case 3: v1_attr2 = pib1;        v2_attr2 = pib2;        break;
        case 4: v1_attr2 = pontos1;     v2_attr2 = pontos2;     break;
        case 5: v1_attr2 = densidade1;  v2_attr2 = densidade2;  break;
        default:
            printf("Atributo invalido.\n");
            return 1;
    }

    /* ===============================
       SOMA DOS ATRIBUTOS
       =============================== */
    soma1 = v1_attr1 + v1_attr2;
    soma2 = v2_attr1 + v2_attr2;

    /* ===============================
       EXIBICAO DO RESULTADO
       =============================== */
    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s vs %s\n", pais1, pais2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    printf("\nVencedor: ");
    if (soma1 > soma2)
        printf("%s\n", pais1);
    else if (soma2 > soma1)
        printf("%s\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}
