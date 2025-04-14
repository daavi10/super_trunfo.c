#include <stdio.h>

int main(){


  // INFORMACOES GERAIS

  printf ("Bem vindos ao Super Trunfo! Aqui vai algumas informacoes importantes sobre o preenchimento das cartas: \n\n");
  printf ("1- Caso o nome da cidade tenha mais de uma palavra, por favor, separe-as por um '_'. Exemplo: Santa_Catarina\n");
  printf("2- Caso precise utilizar um numero decimal, por favor, separe-o por um ponto. Exemplo: 10.5\n");
  
  // INPUT INFOS DA CARTA 1

  int populacao1, npt1;
  float area1, PIB1;
  char estado1[30], cidade1[30], codigo1[30];

  printf ("\n\nCarta 1: \n\n");
  
  printf ("Insira o nome do estado: ");
  scanf("%s", &estado1); 

  printf ("Insira o codigo da carta: ");
  scanf("%s", &codigo1);

  printf ("Insira o nome da cidade: ");
  scanf("%s", &cidade1);

  printf ("Insira a populacao da cidade: ");
  scanf("%d", &populacao1);

  printf ("Insira a area (em km2): ");
  scanf("%f", &area1);

  printf ("Insira o PIB(em bilhoes de reais): ");
  scanf("%f", &PIB1);

  printf ("Insira o numero de pontos turisticos da cidade: ");
  scanf("%d", &npt1);

  // INPUT INFOS DA CARTA 2

  int populacao2, npt2;
  float area2, PIB2;
  char estado2[30], cidade2[30], codigo2[30];

  printf ("\n\n\nCarta 2: \n\n");

  printf ("Insira o nome do estado: ");
  scanf("%s", &estado2); 

  printf ("Insira o codigo da carta: ");
  scanf("%s", &codigo2);

  printf ("Insira o nome da cidade: ");
  scanf("%s", &cidade2);

  printf ("Insira a populacao da cidade: ");
  scanf("%d", &populacao2);

  printf ("Insira a area (em km2): ");
  scanf("%f", &area2);

  printf ("Insira o PIB(em bilhoes de reais): ");
  scanf("%f", &PIB2);

  printf ("Insira o numero de pontos turisticos da cidade: ");
  scanf("%d", &npt2);

  // MOSTRAR INFOS DAS CARTAS PRO USUARIO 


  printf ("\n\nCarta 1: \n\n");
  printf ("Estado: %s\n", estado1);
  printf ("Codigo da carta: %s\n", codigo1);
  printf ("Cidade: %s\n", cidade1);
  printf ("Populacao: %d\n", populacao1);
  printf ("Area: %.2f km2\n", area1);
  printf ("PIB: %.2f bilhoes de reais\n", PIB1);
  printf ("Numero de pontos turisticos: %d\n", npt1);
  
  
  printf ("\n\nCarta 2: \n\n");
  printf ("Estado: %s\n", estado2);
  printf ("Codigo da carta: %s\n", codigo2);
  printf ("Cidade: %s\n", cidade2);
  printf ("Populacao: %d\n", populacao2);
  printf ("Area: %.2f km2\n", area2);
  printf ("PIB: %.2f bilhoes de reais\n", PIB2);
  printf ("Numero de pontos turisticos: %d\n", npt2);
  
  
  
  
  return 0;

}
 
