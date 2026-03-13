#include <stdio.h>

int main(){

//Declaração de variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome_cidade1[100], nome_cidade2[100];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2, resultado;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;
    
    // Coleta das Informações da primeira carta
    printf("\nDigite as informações da primeira carta:\n\n");
    
    printf("Digite o estado (use uma letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código (use um numero de 01 a 04): ");
    scanf(" %s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Digite a população: ");
    scanf(" %lu", &populacao1);
    
    printf("Digite a área: ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
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
    scanf(" %lu", &populacao2);
    
    printf("Digite a área: ");
    scanf(" %f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);
    
    //Calculos  
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;

    superpoder1 = ((float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibpercapita1 + (1.0f / densidade1));
    superpoder2 = ((float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibpercapita2 + (1.0f / densidade2));

    //Impressão dos dados das cartas
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder da Carta1: %.2f\n", superpoder1);

    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder da Carta2: %.2f\n", superpoder2);
    
    printf("\nComparação das Cartas:\n");
    printf("População: Carta %d venceu\n", resultado = (populacao1 > populacao2));
    printf("Área: Carta %d venceu\n", resultado = (area1 > area2));
    printf("PIB: Carta %d venceu\n", resultado = (pib1 > pib2));
    printf("Número de Pontos Turísticos: Carta %d venceu\n", resultado = (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu\n", resultado = (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu\n", resultado = (pibpercapita1 > pibpercapita2));
    printf("Super Poder: Carta %d venceu\n", resultado = (superpoder1 > superpoder2));

    return 0;
}