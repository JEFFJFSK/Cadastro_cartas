#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  //--Variáveis Carta 1--
  char estado1;
  char codigo1[5];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float PIB1;
  int Npontos1;

  //--Variáveis Carta 2--
  char estado2;
  char codigo2[5];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int Npontos2;

  //------------------------------
  // Entrada de dados da Carta 1
  //------------------------------
  printf ("CADASTRO DA CARTA 1\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o novo código (exemplo: A01): ");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade1);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a área  (em km²): ");
  scanf("%f", &area1);  

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &PIB1);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &Npontos1);
  
  printf ("\nCarta 1 cadastrada com sucesso!\n");

  //------------------------------
  // Entrada de dados da Carta 2
  //------------------------------
  printf ("CADASTRO DA CARTA 2\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o novo código (exemplo: A01): ");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade2);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a área  (em km²): ");
  scanf("%f", &area2);  

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &PIB2);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &Npontos2);
  
  printf ("\nCarta 2 cadastrada com sucesso!\n");  

  //-----------------------------
  // Exibição dados da Carta 1
  //-----------------------------
  printf("--DADOS CADASTRADOS PARA CARTA 1--\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);  
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f\n", PIB1);
  printf("Número de pontos Turísticos: %d\n", Npontos1);
  
  //-----------------------------
  // Exibição dados da Carta 2
  //-----------------------------
  printf("--DADOS CADASTRADOS PARA CARTA 2--\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);  
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f\n", PIB2);
  printf("Número de pontos Turísticos: %d\n", Npontos2);
  
  printf ("--FIM DO PROGRAMA--\n");  

return 0;
} 
