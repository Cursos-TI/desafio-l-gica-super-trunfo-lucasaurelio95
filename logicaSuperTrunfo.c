#include <stdio.h>
#include <string.h> // Necessário para a função strcpy

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Definimos as variáveis para a primeira cidade (carta 1)
    char nome_cidade1[50];
    long populacao1;
    double area1;

    // Definimos as variáveis para a segunda cidade (carta 2)
    char nome_cidade2[50];
    long populacao2;
    double area2;

    // ---
    
    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome_cidade1);
    printf("Digite a populacao da primeira cidade: ");
    scanf("%ld", &populacao1);
    printf("Digite a area (em km²) da primeira cidade: ");
    scanf("%lf", &area1);

    // ---

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nome_cidade2);
    printf("Digite a populacao da segunda cidade: ");
    scanf("%ld", &populacao2);
    printf("Digite a area (em km²) da segunda cidade: ");
    scanf("%lf", &area2);
    
    // ---

    // Comparação de Cartas:
    printf("\n--- Comparacao --- \n");
    // Vamos comparar a população como exemplo.
    // Você pode adicionar mais 'if... else' para comparar outros atributos, como área, PIB, etc.
    if (populacao1 > populacao2) {
        printf("%s tem maior populacao.\n", nome_cidade1);
        printf("A cidade vencedora e: %s\n", nome_cidade1);
    } else if (populacao2 > populacao1) {
        printf("%s tem maior populacao.\n", nome_cidade2);
        printf("A cidade vencedora e: %s\n", nome_cidade2);
    } else {
        printf("As duas cidades tem a mesma populacao.\n");
        printf("Empate!\n");
    }

    return 0;
}
