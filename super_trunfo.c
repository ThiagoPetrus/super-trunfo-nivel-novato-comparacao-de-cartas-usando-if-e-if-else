#include <stdio.h>
/*
 Programa Super Trunfo - Nível Novato
 Compara duas cartas pré-definidas usando um único atributo numérico.
 Utiliza estruturas condicionais if e if-else.
*/

int main() {

    /* =========================
       DADOS DA CARTA 1
       ========================= */

    char cidade1[] = "Sao Paulo";
    char estado1[] = "SP";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    /* Calculos da carta 1 */
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    /* =========================
       DADOS DA CARTA 2
       ========================= */

    char cidade2[] = "Rio de Janeiro";
    char estado2[] = "RJ";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;

    /* Calculos da carta 2 */
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

  /* Comparação das cartas
   Para este desafio, o atributo escolhido foi POPULAÇÃO.
   A carta com maior população vence.
*/


    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    /* Estrutura de decisao */
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
