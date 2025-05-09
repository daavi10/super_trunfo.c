#include <stdio.h>
#include <stdlib.h>

int main(){


  // INFORMACOES GERAIS

  printf ("Bem vindos ao Super Trunfo! Aqui vai algumas informacoes importantes sobre o preenchimento das cartas: \n\n");
  printf ("1- Caso o nome da cidade tenha mais de uma palavra, por favor, separe-as por um '_'. Exemplo: Santa_Catarina\n");
  printf("2- Caso precise utilizar um numero decimal, por favor, separe-o por um ponto. Exemplo: 10.5\n");
  
  // INPUT INFOS DA CARTA 1

  int populacao1, npt1;
  float area1, PIB1;
  char estado1[30], cidade1[30], codigo1[30];

  printf ("Carta 1: \n\n");
  
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

  printf ("Insira o PIB: ");
  scanf("%f", &PIB1);

  printf ("Insira o numero de pontos turisticos da cidade: ");
  scanf("%d", &npt1);

  // INPUT INFOS DA CARTA 2

  int populacao2, npt2, escolha;
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

  printf ("Insira o PIB: ");
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
  printf ("Densidade populacional: %.2f \n", populacao1/area1);
  printf ("PIB per capita: %.2f \n", PIB1/populacao1);
  
  
  printf ("\n\nCarta 2: \n\n");
  printf ("Estado: %s\n", estado2);
  printf ("Codigo da carta: %s\n", codigo2);
  printf ("Cidade: %s\n", cidade2);
  printf ("Populacao: %d\n", populacao2);
  printf ("Area: %.2f km2\n", area2);
  printf ("PIB: %.2f bilhoes de reais\n", PIB2);
  printf ("Numero de pontos turisticos: %d\n", npt2);
  printf ("Densidade populacional: %.2f \n", populacao2/area2);
  printf ("PIB per capita: %.2f \n\n\n", PIB2/populacao2);


  printf ("Agora, vamos ao jogo!\n");
  printf ("Agora que temos todos os atributos disponíveis, escolha um deles para ser comparado e descobrir a carta vencedora!.\n\n");

  // COMPARACAO DE ATRIBUTOS

  printf ("Escolha um dos atributos para comparar: \n");
  printf ("1- Populacao\n");
  printf ("2- Area\n");
  printf ("3- PIB\n");
  printf ("4- Numero de pontos turisticos\n");
  printf ("5- Densidade populacional\n");
  printf ("6- PIB per capita\n\n");
  printf ("Digite a opcao desejada: ");
  scanf ("%d", &escolha);
  printf ("\n\n");

  switch (escolha) {
    case 1:
      printf ("O atributo escolhido foi populacao.\n\n");
      printf ("Cidade 1: %s\n", cidade1);
      printf ("Populacao 1: %d\n", populacao1);
      printf ("Cidade 2: %s\n", cidade2);
      printf ("Populacao 2: %d\n", populacao2);
      printf ("\n\n");
      if (populacao1 > populacao2) {
        printf ("A carta vencedora é a carta 1!\n");
      } else if (populacao1 < populacao2) {
        printf ("A carta vencedora é a carta 2!\n");
      } else {
        printf ("Empate!\n");
      }
      break;
    case 2:
      printf ("O atributo escolhido foi area.\n\n");
      printf ("Cidade 1: %s\n", cidade1);
      printf ("Area 1: %.2f\n", area1);
      printf ("Cidade 2: %s\n", cidade2);
      printf ("Area 2: %.2f\n", area2);
      printf ("\n\n");
      if (area1 > area2) {
        printf ("A carta vencedora é a carta 1!\n");
        } else if (area1 < area2) {
        printf ("A carta vencedora é a carta 2!\n");
      } else {
        printf ("Empate!\n");
      }
      break; 
    case 3:
      printf ("O atributo escolhido foi PIB.\n\n");
      printf ("Cidade 1: %s\n", cidade1);
      printf ("PIB 1: %.2f\n", PIB1);
      printf ("Cidade 2: %s\n", cidade2);
      printf ("PIB 2: %.2f\n", PIB2);
      printf ("\n\n");
      if (PIB1 > PIB2) {
        printf ("A carta vencedora é a carta 1!\n");
      } else if (PIB1 < PIB2) {
        printf ("A carta vencedora é a carta 2!\n");
      } else {
        printf ("Empate!\n");
      } 
      break;
    case 4:
      printf ("O atributo escolhido foi numero de pontos turisticos.\n\n");
      printf ("Cidade 1: %s\n", cidade1);
      printf ("Numero de pontos turisticos 1: %d\n", npt1);
      printf ("Cidade 2: %s\n", cidade2);
      printf ("Numero de pontos turisticos 2: %d\n", npt2);
      printf ("\n\n");
      if (npt1 > npt2) {
        printf ("A carta vencedora é a carta 1!\n");
      } else if (npt1 < npt2) {
        printf ("A carta vencedora é a carta 2!\n");
      } else {
        printf ("Empate!\n");
      }
      break;
    case 5:
      printf ("O atributo escolhido foi densidade populacional.\n\n");
      printf ("Cidade 1: %s\n", cidade1);
      printf ("Densidade populacional 1: %.2f\n", populacao1/area1);
      printf ("Cidade 2: %s\n", cidade2);
      printf ("Densidade populacional 2: %.2f\n", populacao2/area2);
      if (populacao1/area1 > populacao2/area2) {
        printf ("A carta vencedora é a carta 1!\n");
      } else if (populacao1/area1 < populacao2/area2) {
        printf ("A carta vencedora é a carta 2!\n");
      } else {
        printf ("Empate!\n");
      }
      break;
    case 6:
      printf ("O atributo escolhido foi PIB per capita.\n\n");
      printf ("Cidade 1: %s\n", cidade1);
      printf ("PIB per capita 1: %.2f\n", PIB1/populacao1);
      printf ("Cidade 2: %s\n", cidade2);
      printf ("PIB per capita 2: %.2f\n", PIB2/populacao2);
      printf ("\n\n");
      if (PIB1/populacao1 > PIB2/populacao2) {
        printf ("A carta vencedora é a carta 1!\n");
      } else if (PIB1/populacao1 < PIB2/populacao2) {
        printf ("A carta vencedora é a carta 2!\n");
      } else {
        printf ("Empate!\n");
      }
      break;
    default:
      printf ("Opcao invalida!\n");


    
  }
  
  
  
  return 0; 

}
 
