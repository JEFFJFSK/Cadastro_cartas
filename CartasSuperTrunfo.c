#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  
  //--Variáveis Carta 1--
  char estado1;
  char codigo1[5];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1, PIB1;
  int Npontos1;
  float densidade1, pibPerCapita1, superPoder1;

  //--Variáveis Carta 2--
  char estado2;
  char codigo2[5];
  char nomeCidade2[50];
  unsigned long int populacao2;
  float area2, PIB2;
  int Npontos2;
  float densidade2, pibPerCapita2, superPoder2;

  //------------------------------
  // Entrada de dados da Carta 1
  //------------------------------
  printf ("** CADASTRO DA CARTA 1 **\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o novo código (exemplo: A01): ");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade1);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%lu", &populacao1);

  printf("Digite a área  (em km²): ");
  scanf("%f", &area1);  

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &PIB1);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &Npontos1);

  //Cálculo carta 1  
  densidade1 = populacao1 / area1; 
  pibPerCapita1 = PIB1 / populacao1;

    //Super Poder carta 1
  superPoder1 = (float)populacao1 + area1 + PIB1 + 
                (float)Npontos1 + pibPerCapita1 +
                (1.0f / densidade1);  

  printf ("** Carta 1 cadastrada com sucesso! **\n");

  //------------------------------
  // Entrada de dados da Carta 2
  //------------------------------
  printf ("\n** CADASTRO DA CARTA 2 **\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o novo código (exemplo: A01): ");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade2);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%lu", &populacao2);

  printf("Digite a área  (em km²): ");
  scanf("%f", &area2);  

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &PIB2);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &Npontos2);

  //Cálculo carta 2
  densidade2 = populacao2 / area2; 
  pibPerCapita2 = PIB2 / populacao2;

    //Super Poder carta 2
  superPoder2 = (float)populacao2 + area2 + PIB2 + 
                (float)Npontos2 + pibPerCapita2 +
                (1.0f / densidade2);    
  
  printf ("** Carta 2 cadastrada com sucesso! **\n"); 
  
  //-----------------------------
  // Exibição dados da Carta 1
  //-----------------------------
  printf("\n\n** DADOS CADASTRADOS PARA CARTA 1 **\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);  
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f\n", PIB1);
  printf("PIB per Capita: %.2f\n", pibPerCapita1);
  printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);   
  printf("Número de pontos Turísticos: %d\n", Npontos1);
    
  //-----------------------------
  // Exibição dados da Carta 2
  //-----------------------------
  printf("\n\n** DADOS CADASTRADOS PARA CARTA 2 **\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);  
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f\n", PIB2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);
  printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);   
  printf("Número de pontos Turísticos: %d\n", Npontos2);
  
  //-----------------------------
  // Comparações
  //-----------------------------  
    int r_populacao    = populacao1 > populacao2;
    int r_area         = area1 > area2;
    int r_PIB          = PIB1 > PIB2;
    int r_pontos       = Npontos1 > Npontos2;
    int r_densidade    = densidade1 < densidade2; 
    int r_pibPerCapita = pibPerCapita1 > pibPerCapita2;
    int r_superPoder   = superPoder1 > superPoder2;  
  
  printf("\n\n** COMPARAÇÃO DE CARTAS **\n");
  printf("(1) = Carta 1 venceu | (0) = Carta 2 venceu\n\n");  

  printf("População: Carta 1 venceu (%d)\n", r_populacao);
  printf("Área: Carta 1 venceu (%d)\n", r_area);
  printf("PIB: Carta 1 venceu (%d)\n", r_PIB); 
  printf("PIB per Capita: Carta 1 venceu (%d)\n", r_pibPerCapita);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", r_densidade);  
  printf("Número de pontos Turísticos: Carta 1 venceu (%d)\n", r_pontos);
  printf("Super Poder: Carta 1 venceu (%d)\n", r_superPoder);

  printf ("\n** FIM DO PROGRAMA **\n");  

return 0;
} 