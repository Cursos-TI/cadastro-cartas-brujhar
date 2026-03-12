#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char nome_cidade1[100], nome_cidade2[100];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos_turisticos1, pontos_turisticos2;
 
  // Área para entrada de dados
  // Coleta das Informações da primeira carta
  
  printf("\nDigite as informações da primeira carta:\n\n");
    
  printf("Digite o estado (use uma letra de A a H): ");
  scanf(" %c", &estado1);
    
  printf("Digite o código (use um numero de 01 a 04): ");
  scanf(" %s", codigo1);
    
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome_cidade1);
   
  printf("Digite a população: ");
  scanf(" %d", &populacao1);
    
  printf("Digite a área: ");
  scanf(" %f", &area1);
    
  printf("Digite o PIB: ");
  scanf(" %f", &pib1);
    
  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &pontos_turisticos1);

  // Coleta das Informações da segunda carta

  printf("\nDigite as informações da segunda carta:\n\n");

  printf("Digite o estado (use uma letra de A a H): ");
  scanf(" %c", &estado2);
    
  printf("Digite o código (use um numero de 01 a 04): ");
  scanf(" %s", codigo2);
    
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome_cidade2);
    
  printf("Digite a população: ");
  scanf(" %d", &populacao2);
    
  printf("Digite a área: ");
  scanf(" %f", &area2);
  
  printf("Digite o PIB: ");
  scanf(" %f", &pib2);
    
  printf("Digite o número de pontos turísticos: ");
  scanf(" %d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  //Impressão dos dados das cartas
    
 printf("\nCarta1:\n");
 printf("Estado: %c\n", estado1);
 printf("Código: %c%s\n", estado1, codigo1);
 printf("Nome da Cidade: %s\n", nome_cidade1);
 printf("População: %d\n", populacao1);
 printf("Área: %.2f km²\n", area1);
 printf("PIB: %.2f bilhões de reais\n", pib1);
 printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

 printf("\nCarta2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %c%s\n", estado2, codigo2);
 printf("Nome da Cidade: %s\n", nome_cidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

return 0;
} 
