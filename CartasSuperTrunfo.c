#include <stdio.h>

int main(){
    // Variavies da carta 1
    char estado;
    char codigoDaCarta[4];
    char nomeDaCidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos;
    float densidadePopulacional;
    float pibperCapita;
    float superpoder;
    // Variaveis da carta 2
    char estado2;
    char codigoDaCarta2[4];
    char nomeDaCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;
    float densidadePopulacional2;
    float pibperCapita2;
    float superpoder2;
    // Solicita para o usuario as informações da carta 1
    
    printf("Digite os dados da Carta 1: \n");

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf("%3s", &codigoDaCarta);

    printf("Nome da Cidade: ");
    scanf("%19s", &nomeDaCidade);

    printf("População: ");
    scanf("%lu", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos);

    densidadePopulacional = populacao / area;
    pibperCapita = pib / populacao;

    float superPoder = (float)populacao + area + pib + (float)numeroDePontosTuristicos + pibperCapita + (1.0f / densidadePopulacional);


    // Solicita para o usuario as informações da carta 2
    printf("\n -------------------------------------------------------- \n");
    printf("Digite os dados da Carta 2: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%3s", &codigoDaCarta2);

    printf("Nome da Cidade: ");
    scanf("%19s", &nomeDaCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;
    
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)numeroDePontosTuristicos2 + pibperCapita2 + (1.0f / densidadePopulacional2);


    // Imprime no terminal as informações das cartas 1 e 2 fornecidas pelo usuario
    printf("--------------------------------------------------\n");
    printf("\nResultados: \n");

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %.3s\n", codigoDaCarta);
    printf("Nome da Cidade: %19s\n", nomeDaCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turisticos: %d\n", numeroDePontosTuristicos);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.3f reais\n", pibperCapita);

    printf("\n\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %.3s\n", codigoDaCarta2);
    printf("Nome da Cidade: %19s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", numeroDePontosTuristicos2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.3f reais\n", pibperCapita2);


    // Comparações
    printf("\n--------------------------------------------------\n");
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numeroDePontosTuristicos > numeroDePontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibperCapita > pibperCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder > superPoder2);
    printf("\n");

    return 0;

}