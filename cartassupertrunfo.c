#include <stdio.h>

int main (){
//Dados da primeira carta

char Estado_1[5];
char Codigo_da_carta_1[4];
char Cidade_1[12];
unsigned long int Populacao_1;
float Area_1;
float PIB_1;
int Pontos_turisticos_1;
float densidade_1;
float pib_per_capita_1;
float SuperPoder_1;
float inversodensidade_1;

//Dados da segunda carta

char Estado_2[5];
char Codigo_da_carta_2[4];
char Cidade_2[12];
unsigned long int Populacao_2;
float Area_2;
float PIB_2;
int Pontos_turisticos_2;
float densidade_2;
float pib_per_capita_2;
float SuperPoder_2;
float inversodensidade_2;

//Recepção dos dados da primeira carta//

printf("Carta 1\n");

printf("Digite a letra que representa um dos 8 estados:\n");
printf("A - Acre\n B - Bahia\n C - Ceará\n D - Alagoas\n E - Espírito Santo\n F-Amazonas\n G - Goiás\n H - Amapá\n");
scanf ("%s", Estado_1);

printf ("Digite o código da carta ( que deve ser representado pela primeira letra do estado e um numero de 01 a 04):\n");
scanf ("%s", Codigo_da_carta_1);

printf("Digite o nome da cidade:\n");
scanf("%s", Cidade_1);

printf ("Digite o tamanho da população:\n");
scanf ("%lu", &Populacao_1);

printf ("Digite o tamanho da área em km²:\n");
scanf ("%f", &Area_1);

printf ("Digite o PIB:\n");
scanf ("%f", &PIB_1);

printf ("Digite o número de pontos Turísticos:\n");
scanf ("%d", &Pontos_turisticos_1);

// Calculo da densidade populacional da primeira carta//

densidade_1 = (float)(Populacao_1 / Area_1);

// Calculo do PIB per capita da primeira carta //

pib_per_capita_1 = (float)(PIB_1 * 1000000000) / Populacao_1;

// Calculo inverso da densidade populacional para o Super Poder //

inversodensidade_1 = (1 / densidade_1);

// Calculo do Super Poder da primeira carta //

SuperPoder_1 = (float)(Populacao_1) + 
(Area_1) + 
(PIB_1) + 
(float)(Pontos_turisticos_1) + 
(inversodensidade_1) + 
(pib_per_capita_1);

// Impreessão dos dados da primeira carta

printf ("Carta 1\n");

printf("Estado: %s\n", Estado_1);
printf("Código da carta:%s\n", Codigo_da_carta_1);
printf("Nome da cidade: %s\n", Cidade_1);
printf("População: %lu\n", Populacao_1);
printf("Área: %.3f km²\n", Area_1);
printf("PIB: %.3f bilhões de reais \n", PIB_1);
printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
printf("PIB per capita: %.2f reais\n", pib_per_capita_1);
printf("Super Poder: %.1f\n", SuperPoder_1);

//Recepção dos dados da segunda carta

printf ("Carta 2\n");

printf ("Digite a letra que representa um dos 8 estados:\n");
printf("A - Acre\nB - Bahia\nC - Ceará\nM - Minas Gerais\nP - Pará\nR - Rio de Janeiro\nS - São Paulo\nT - Tocantins\n");
scanf ("%s", Estado_2);

printf ("Digite o código da carta ( que deve ser representado pela primeira letra do estado e um numero de 01 a 04):\n");
scanf("%s", Codigo_da_carta_2);

printf ("Digite o nome da cidade:\n");
scanf("%s", Cidade_2);

printf ( "Digite o tamanho da população:\n");
scanf ("%lu", &Populacao_2);

printf ("Digite o tamanho da área em km²:\n");
scanf("%f", &Area_2);

printf("Digite o PIB:\n");
scanf ("%f", &PIB_2 );

printf("Digite o número de pontos turísticos;\n");
scanf("%d", &Pontos_turisticos_2);

// Calculo da densidade populacional da segunda carta //

densidade_2 = (float) Populacao_2 / Area_2;

// Calculo do PIB per capita da segunda carta //
pib_per_capita_2 = (float) (PIB_2 * 1000000000) / Populacao_2;

// Calculo inverso da densidade populacional para o Super Poder da carta 2 //
inversodensidade_2 = (1 / densidade_2);

//Calculo do Super Poder da segunda carta //

SuperPoder_2 = (float)(Populacao_2) + 
(Area_2) + 
(PIB_2) + 
(float)(Pontos_turisticos_2) + 
(inversodensidade_2) + 
(pib_per_capita_2);

//Impressão dos dados da segunda carta

printf("\n");
printf("Carta 2\n");

printf("Estado: %s\n", Estado_2);
printf("Código da carta:%s\n", Codigo_da_carta_2);
printf("Nome da cidade: %s\n", Cidade_2);
printf("População: %lu\n", Populacao_2);
printf ("Área: %.2f km²\n", Area_2);
printf("PIB:%.2f bilhões de reais \n ", PIB_2);
printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
printf("PIB per capita: %.2f reais\n", pib_per_capita_2);
printf("Super Poder: %.1f\n", SuperPoder_2);

//Comparação entre as duas cartas//

printf("Comparação entre as duas cartas:\n");
printf("1 = Carta 1 ganhou\n");
printf("0 = Carta 2 ganhou\n");

printf("\n");

printf("População: %d\n",Populacao_1 > Populacao_2);
printf("Área: %d\n",Area_1 > Area_2);
printf("PIB: %d\n", PIB_1 > PIB_2);
printf("Pontos Turísticos: %d\n", Pontos_turisticos_1 > Pontos_turisticos_2);
printf("Densidade Populacional: %d\n",inversodensidade_1 < inversodensidade_2);
printf("PIB per Capita: %d\n", pib_per_capita_1 > pib_per_capita_2);
printf("Super Poder: %d\n", SuperPoder_1 > SuperPoder_2);



printf("População Carta 1 (%s): %d, População Carta 2(%s): %d.",Cidade_1,Populacao_1,Cidade_2,Populacao_2);
printf("População Carta 1 (%s): %d, População Carta 2(%s): %d.",Cidade_1,Populacao_1,Cidade_2,Populacao_2);
printf("Área Carta 1 (%s): %.2f, Área Carta 2(%s): %.2f.",Cidade_1,Area_1,Cidade_2,Area_2);
printf("Área Carta 1 (%s): %.2f, Área Carta 2(%s): %.2f.",Cidade_1,Area_1,Cidade_2,Area_2);
return 0;

}




