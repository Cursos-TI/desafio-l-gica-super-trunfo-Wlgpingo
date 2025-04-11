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

    #include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

void compararCartas(Carta c1, Carta c2, int escolha) {
    printf("\nComparando:\n%s VS %s\n", c1.nome, c2.nome);

    switch (escolha) {
        case 1: // População
            printf("\nAtributo escolhido: População\n");
            printf("%s: %d habitantes\n", c1.nome, c1.populacao);
            printf("%s: %d habitantes\n", c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.populacao > c1.populacao) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

            case 2: // Área
            printf("\nAtributo escolhido: Área\n");
            printf("%s: %.2f km²\n", c1.nome, c1.area);
            printf("%s: %.2f km²\n", c2.nome, c2.area);
            if (c1.area > c2.area) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.area > c1.area) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nAtributo escolhido: PIB\n");
            printf("%s: %.2f trilhões USD\n", c1.nome, c1.pib);
            printf("%s: %.2f trilhões USD\n", c2.nome, c2.pib);
            if (c1.pib > c2.pib) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.pib > c1.pib) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("\nAtributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", c1.nome, c1.pontosTuristicos);
            printf("%s: %d pontos turísticos\n", c2.nome, c2.pontosTuristicos);
            if (c1.pontosTuristicos > c2.pontosTuristicos) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.pontosTuristicos > c1.pontosTuristicos) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (MENOR valor vence)
            printf("\nAtributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", c1.nome, c1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", c2.nome, c2.densidadeDemografica);
            if (c1.densidadeDemografica < c2.densidadeDemografica) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.densidadeDemografica < c1.densidadeDemografica) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida. Por favor, escolha um número de 1 a 5.\n");
    }
}

int main() {
    Carta carta1 = {"Brasil", 213000000, 8515767.0, 2.05, 20, 25.0};
    Carta carta2 = {"Alemanha", 83100000, 357022.0, 4.2, 30, 232.7};

    int opcao;

    printf("=== Super Trunfo: Cartas de Países ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção (1 a 5): ");
    scanf("%d", &opcao);

    compararCartas(carta1, carta2, opcao);

    return 0;
}



