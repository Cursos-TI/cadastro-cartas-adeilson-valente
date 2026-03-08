#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variaveis da carta 1
  char carta1_estado;
  char carta1_codigo[4];
  char carta1_cidade[25];
  unsigned long int carta1_populacao;
  float carta1_area;
  float carta1_pib;
  int carta1_pontoTuristicos;
  float carta1_densidadePopulacional;
  float carta1_pibPerCapita;
  float carta1_superPoder;

  // Variaveis da carta 2
  char carta2_estado;
  char carta2_codigo[4];
  char carta2_cidade[25];
  unsigned long int carta2_populacao;
  float carta2_area;
  float carta2_pib;
  int carta2_pontoTuristicos;
  float carta2_densidadePopulacional;
  float carta2_pibPerCapita;
  float carta2_superPoder;

  // Área para entrada de dados
  //Cadastro da primeira carta
  printf("Cadastro de Cartas Super Trunfo!!!\nCadastre a primeira Carta.\n");
  printf("Informe a Letra Inicial do Estado: ");
  scanf(" %c", &carta1_estado);

  printf("Informe o Código da carta - (Inicial do Estado + número de 01 a 04 - ex: A01): ");
  scanf("%s", carta1_codigo);

  printf("Informe o nome da Cidade: ");
  scanf("%s", carta1_cidade);

  printf("Informe a quantidade da População da Cidade: ");
  scanf("%lu", &carta1_populacao);

  printf("Informe a Área em Km² da Cidade: ");
  scanf("%f", &carta1_area);

  printf("Informe o PIB da Cidade: ");
  scanf("%f", &carta1_pib);

  printf("Informe quantos Pontos Turisticos tem na Cidade: ");
  scanf("%d", &carta1_pontoTuristicos);

  //Cadastro da segunda carta
  printf("\nCadastre a segunda Carta.\n");
  printf("Informe a Letra Inicial do Estado: ");
  scanf(" %c", &carta2_estado);

  printf("Informe o Código da carta - (Inicial do Estado + número de 01 a 04 - ex: A01): ");
  scanf("%s", carta2_codigo);

  printf("Informe o nome da Cidade: ");
  scanf("%s", carta2_cidade);

  printf("Informe a quantidade da População da Cidade: ");
  scanf("%lu",&carta2_populacao);

  printf("Informe a Área em Km² da Cidade: ");
  scanf("%f", &carta2_area);

  printf("Informe o PIB da Cidade: ");
  scanf("%f", &carta2_pib);

  printf("Informe quantos Pontos Turisticos tem na Cidade: ");
  scanf("%d", &carta2_pontoTuristicos);

  //Area de calculo da densidade populacional e PIB per Capita
  carta1_densidadePopulacional = (float) carta1_populacao / carta1_area;
  carta1_pibPerCapita = carta1_pib / (float) carta1_populacao;

  carta2_densidadePopulacional = (float) carta2_populacao / carta2_area;
  carta2_pibPerCapita = carta2_pib / (float) carta2_populacao;

  // Super Poder
  carta1_superPoder = carta1_populacao +
                      carta1_area +
                      carta1_pib +
                      carta1_pontoTuristicos +
                      carta1_pibPerCapita +
                      (1 / carta1_densidadePopulacional);

  carta2_superPoder = carta2_populacao +
                      carta2_area +
                      carta2_pib +
                      carta2_pontoTuristicos +
                      carta2_pibPerCapita +
                      (1 / carta2_densidadePopulacional);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", carta1_estado);
  printf("Código: %s\n", carta1_codigo);
  printf("Nome da Cidade: %s\n", carta1_cidade);
  printf("População: %d\n", carta1_populacao);
  printf("Área: %.2f Km²\n", carta1_area);
  printf("PIB: %.2f\n", carta1_pib);
  printf("Número de Pontos Turísticos: %d\n", carta1_pontoTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta1_densidadePopulacional);
  printf("PIB per Capita: %.2f reais\n", carta1_pibPerCapita);
  printf("Super Poder: %.2f\n", carta1_superPoder);
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", carta2_estado);
  printf("Código: %s\n", carta2_codigo);
  printf("Nome da Cidade: %s\n", carta2_cidade);
  printf("População: %d\n", carta2_populacao);
  printf("Área: %.2f Km²\n", carta2_area);
  printf("PIB: %.2f\n", carta2_pib);
  printf("Número de Pontos Turísticos: %d\n", carta2_pontoTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta2_densidadePopulacional);
  printf("PIB per Capita: %.2f reais\n", carta2_pibPerCapita);
  printf("Super Poder: %.2f\n", carta2_superPoder);

  // Comparações
  int comp_populacao = carta1_populacao > carta2_populacao;
  int comp_area = carta1_area > carta2_area;
  int comp_pib = carta1_pib > carta2_pib;
  int comp_pontos = carta1_pontoTuristicos > carta2_pontoTuristicos;
  int comp_densidade = carta1_densidadePopulacional > carta2_densidadePopulacional;
  int comp_pibcapita = carta1_pibPerCapita > carta2_pibPerCapita;
  int comp_superpoder = carta1_superPoder > carta2_superPoder;

  // Resultado das comparações
  printf("\nComparação de Cartas:\n");

  printf("População: Carta 1 venceu (%d)\n", comp_populacao);
  printf("Área: Carta 1 venceu (%d)\n", comp_area);
  printf("PIB: Carta 1 venceu (%d)\n", comp_pib);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comp_pontos);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", comp_densidade);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", comp_pibcapita);
  printf("Super Poder: Carta 1 venceu (%d)\n", comp_superpoder);

  return 0;
}
