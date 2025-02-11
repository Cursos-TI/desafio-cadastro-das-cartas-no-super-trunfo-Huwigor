#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


/* EU UTILIZEI O LOOP FOR PARA EVITAR QUE O CÓDIGO FICASSE MUITO EXTENSO, REPETINDO DIVERSAS 
   VEZES OS BLOCOS COM PRINTF E SCANF, O LOOP FOR IRÁ SE REPETIR POR 32 VEZES, GARANTINDO O 
   CADASTRO DAS 32 CARTAS, 4 CARTAS PARA CADA 8 ESTADOS..*/


#define TOTAL_CIDADES 32 // Define o número total de cidades.

// Estrutura para armazenar os dados de uma cidade.
typedef struct {
    char nome[50];          // Nome da cidade.
    char codigo[4];          // Código da cidade (ex: A01, B02).
    int populacao;           // População da cidade.
    float area;              // Área da cidade em km².
    double pib;              // PIB da cidade em bilhões.
    int pontos_turisticos;   // Número de pontos turísticos.
} Cidade;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
     Cidade cidades[TOTAL_CIDADES]; // Array para armazenar os dados das cidades.

    printf("\n--- Cadastro de Cidades ---\n");

    // Loop para cadastrar os dados das cidades.
    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("\nDigite os dados da cidade %d:\n", i + 1);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", cidades[i].nome); // Lê o nome da cidade (incluindo espaços).

        printf("Código da cidade (Ex: A01, B02 até H04): ");
        scanf("%s", cidades[i].codigo);

        printf("População: ");
        scanf("%d", &cidades[i].populacao);

        printf("Área (km²): ");
        scanf("%f", &cidades[i].area);

        printf("PIB (em bilhões): ");
        scanf("%lf", &cidades[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }

    printf("\n--- Cidades Cadastradas ---\n");

    // Loop para exibir os dados das cidades cadastradas.
    for (int i = 0; i < TOTAL_CIDADES; i++) {
        printf("\nNome: %s\n", cidades[i].nome);
        printf("Código: %s\n", cidades[i].codigo);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2lf bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    return 0; // Fim do programa.
    
}
