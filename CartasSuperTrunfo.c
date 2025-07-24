#include <stdio.h>

int main() {
    char estado;
    char codigoDaCarta[3];
    char nomeDaCidade[20];
    int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos;

    printf("Digite os dados da Carta 1: \n");
    printf("Estado:\n");
    scanf("%c", &estado);
    printf("Código: \n");
    scanf("%s", &codigoDaCarta);
    printf("Nome da Cidade:\n");
    scanf("%s", &nomeDaCidade);
    printf("Área:\n");
    scanf("%.2f", &area);
    printf("PIB:\n");
    scanf("%.2f", &pib);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &numeroDePontosTuristicos);
    






    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
