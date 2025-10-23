#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int NumeroDaCarta; // %i ou %d modificador com &
  char Estado; // %c modificador com &
  char CodigoDaCarta[5]; // %c modificador
  char Cidade[10]; // %s modificador com &
  int Populacao; // %d ou i modificador com &
  float Areakm2; // %f modificador com &
  float Pib; // %f  modificador com &
  int PontosTuristicos; // %d ou %i modificador com &

  // Área para entrada de dados
  printf("Carta: \n");
    scanf(" %d", &NumeroDaCarta);
  
  printf("Estado: \n");
    scanf(" %c", &Estado);
  
  printf("Código: \n");
    scanf(" %s", CodigoDaCarta);

  printf("Nome da Cidade: ");
    scanf(" %s", Cidade);

  printf("População: \n");
    scanf(" %d", &Populacao);

  printf("Área: \n");
    scanf(" %f", &Areakm2);

  printf("PIB: \n");
    scanf(" %f", &Pib);

  printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos);

  // Área para exibição dos dados da cidade

  printf("Carta: %d\n", NumeroDaCarta);
  printf("Estado: %c\n", Estado);
  printf("Código: %s\n", CodigoDaCarta);
  printf("Nome da Cidade: %s", Cidade);
  printf("População: %d\n", Populacao);
  printf("Área: %f\n", Areakm2);
  printf("PIB: %f\n", Pib);
  printf("Número de Pontos Turísticos: %i\n", PontosTuristicos);

return 0;
} 
