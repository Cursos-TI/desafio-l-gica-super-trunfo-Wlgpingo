#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
#include <stdio.h>
#include <string.h>

// Estrutura representando uma carta do Super Trunfo
struct Carta {
    char estado[30];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

// Função para calcular densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per capita
float calcularPIBPerCapita(float pib, int populacao) {
    return pib / populacao;
}
int main() {
    // Cadastro de duas cartas manualmente
    struct Carta carta1 = {
        "São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 230000000000.0, 20
    };

    struct Carta carta2 = {
        "Rio de Janeiro", "RJ01", "Rio de Janeiro", 6700000, 1200.27, 150000000000.0, 15
    };

    // Cálculo da densidade populacional e PIB per capita para cada carta
    carta1.densidadePopulacional = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    carta1.pibPerCapita = calcularPIBPerCapita(carta1.pib, carta1.populacao);

    carta2.densidadePopulacional = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    carta2.pibPerCapita = calcularPIBPerCapita(carta2.pib, carta2.populacao);

    // Escolha do atributo de comparação
    // Neste exemplo, vamos comparar o PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
    printf("Carta 2 - %s (%s): R$ %.2f\n\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);

    // Comparação usando estrutura if-else
    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

