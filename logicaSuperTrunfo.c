#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
     // Variáveis da Carta 1
    char estado1[50], codigo1[10], nome1[100];
    int populacao1, pontos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[10], nome2[100];
    int populacao2, pontos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
     // Entrada de dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Calculando atributos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    // Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Calculando atributos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    // Exibindo atributos calculados
    printf("\n=== Dados Calculados ===\n");
    printf("Carta 1 - %s (%s)\n", nome1, estado1);
    printf("Pop: %d | Area: %.2f | PIB: %.2f | Pontos: %d | Densidade: %.2f | PIB/capita: %.6f\n\n",
           populacao1, area1, pib1, pontos1, densidade1, pib_per_capita1);

    printf("Carta 2 - %s (%s)\n", nome2, estado2);
    printf("Pop: %d | Area: %.2f | PIB: %.2f | Pontos: %d | Densidade: %.2f | PIB/capita: %.6f\n",
           populacao2, area2, pib2, pontos2, densidade2, pib_per_capita2);

    // ==========================
    // Escolha dos atributos
    // ==========================
    int atributo1, atributo2;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per Capita\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) { // não mostra o atributo já escolhido
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Densidade Populacional\n"); break;
                case 5: printf("5 - PIB per Capita\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    // ==========================
    // Função auxiliar com switch
    // ==========================
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    // Primeiro atributo
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 5: valor1_carta1 = pib_per_capita1; valor1_carta2 = pib_per_capita2; break;
        default: printf("Atributo invalido!\n"); return 0;
    }

    // Segundo atributo
    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 5: valor2_carta1 = pib_per_capita1; valor2_carta2 = pib_per_capita2; break;
        default: printf("Atributo invalido!\n"); return 0;
    }

    // ==========================
    // Comparação e Soma
    // ==========================
    printf("\n=== Comparacao de Cartas ===\n");

    // Primeiro atributo
    printf("\nAtributo 1: Carta 1 = %.2f | Carta 2 = %.2f\n", valor1_carta1, valor1_carta2);
    int vencedor1 = (atributo1 == 4) ?
        (valor1_carta1 < valor1_carta2 ? 1 : (valor1_carta2 < valor1_carta1 ? 2 : 0)) :
        (valor1_carta1 > valor1_carta2 ? 1 : (valor1_carta2 > valor1_carta1 ? 2 : 0));

    // Segundo atributo
    printf("Atributo 2: Carta 1 = %.2f | Carta 2 = %.2f\n", valor2_carta1, valor2_carta2);
    int vencedor2 = (atributo2 == 4) ?
        (valor2_carta1 < valor2_carta2 ? 1 : (valor2_carta2 < valor2_carta1 ? 2 : 0)) :
        (valor2_carta1 > valor2_carta2 ? 1 : (valor2_carta2 > valor2_carta1 ? 2 : 0));

    // Soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", nome1, soma1);
    printf("Carta 2 (%s): %.2f\n", nome2, soma2);


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    // Resultado final
    if (soma1 > soma2) {
        printf("\nResultado final: Carta 1 (%s) venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("\nResultado final: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("\nResultado final: Empate!\n");
    }
    return 0;
}
