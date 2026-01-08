#include <stdio.h>

int main (){

char Estado_1[50];
char Codigo_da_carta_1[3];
char Cidade_1[50];
int Populacao_1;
float Area_1;
float PIB_1;
int Pontos_turisticos_1;

char Estado_2[50];
char Codigo_da_carta_2[3];
char Cidade_2[50];
int Populacao_2;
float Area_2;
float PIB_2;
int Pontos_turisticos_2;


printf("Carta 1\n");

printf("Digite o estado:\n");
scanf ("%s", &Estado_1);

printf ("Digite o código da carta:\n");
scanf ("%s", &Codigo_da_carta_1);

printf("Digite o nome da cidade:\n");
scanf("%s", &Cidade_1);

printf ("Digite o tamanho da população:\n");
scanf ("%f", &Populacao_1);

printf ("Digite o tamanho da área:\n");
scanf ("%f", &Area_1);

printf ("Digite o PIB:\n");
scanf ("%f", &PIB_1);

printf ("Digite o número de pontos Turísticos:\n");
scanf ("%d", &Pontos_turisticos_1);



printf ("Carta 2\n");

printf ("Digite o Estado:\n");
scanf ("%s", &Estado_2);

printf ("Digite o código da carta:\n");
scanf("%s", &Codigo_da_carta_2);

printf ("Digite o nome da cidade:\n");
scanf("%s", &Cidade_2);

printf ( "Digite o tamanho da população:\n");
scanf ("%f", &Populacao_2);

printf ("Digite o tamanho da área:\n");
scanf("%f", &Area_2);

printf("Digite o PIB:\n");
scanf ("%f", &PIB_2 );

printf("Digite o número de pontos turísticos;\n");
scanf("%d", &Pontos_turisticos_2);


printf ("Carta 1\n");

printf("Estado: %s\n", Estado_1);
printf("Código da carta:%s\n", Codigo_da_carta_1);
printf("Nome da cidade: %s\n", Cidade_1);
printf("População: %f\n", Populacao_1);
printf("Área: %f\n", Populacao_1);
printf("PIB: %f", PIB_1);
printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_1);

printf("Carta 2\n");

printf("Estado: %s\n", Estado_2);
printf("Código da carta:%s\n", Codigo_da_carta_2);
printf("Nome da cidade: %s", Cidade_2);
printf("População: %f\n", Populacao_2);
printf ("Área: %f\n", Area_2);
printf("PIB:%f\n", PIB_2);
printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_2);


return 0;

}