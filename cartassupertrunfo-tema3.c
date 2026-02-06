#include <stdio.h>

int main (){
//Dados da primeira carta

char Estado_1[5];
char Codigo_da_carta_1[4];
char Cidade_1[12];
unsigned int Populacao_1;
float Area_1;
float PIB_1;
int Pontos_turisticos_1;
float densidade_1;
float pib_per_capita_1;
float SuperPoder_1;
float inversodensidade_1;
int escolha1menucomparacao;
int resultado1atributo,resultado2atributo;
float soma1atributo,soma2atributo;
float atributo1carta1,atributo2carta1,atributo1carta2,atributo2carta2;


//Dados da segunda carta

char Estado_2[5];
char Codigo_da_carta_2[4];
char Cidade_2[12];
unsigned int Populacao_2;
float Area_2;
float PIB_2;
int Pontos_turisticos_2;
float densidade_2;
float pib_per_capita_2;
float SuperPoder_2;
float inversodensidade_2;
int escolha2menucomparacao;

//Recepção dos dados da primeira carta//

printf("Carta 1\n");

printf("Digite a letra que representa um dos 8 estados:\n");
printf("A - Acre\nB - Bahia\nC - Ceará\nD - Alagoas\nE - Espírito Santo\nF - Amazonas\nG - Goiás\nH - Amapá\n");
scanf ("%s", Estado_1);

printf ("Digite o código da carta (que deve ser representado pela primeira letra do estado e um numero de 01 a 04):\n");
scanf ("%s", Codigo_da_carta_1);

printf("Digite o nome da cidade:\n");
scanf("%s", Cidade_1);

printf ("Digite o tamanho da população:\n");
scanf ("%d", &Populacao_1);

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
printf("População: %d\n", Populacao_1);
printf("Área: %.3f km²\n", Area_1);
printf("PIB: %.3f bilhões de reais \n", PIB_1);
printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
printf("PIB per capita: %.2f reais\n", pib_per_capita_1);
printf("Super Poder: %.1f\n", SuperPoder_1);

//Recepção dos dados da segunda carta

printf("Carta 2\n");

printf("Digite a letra que representa um dos 8 estados:\n");
printf("A - Acre\nB - Bahia\nC - Ceará\nM - Minas Gerais\nP - Pará\nR - Rio de Janeiro\nS - São Paulo\nT - Tocantins\n");
scanf("%s", Estado_2);

printf ("Digite o código da carta ( que deve ser representado pela primeira letra do estado e um numero de 01 a 04):\n");
scanf("%s", Codigo_da_carta_2);

printf ("Digite o nome da cidade:\n");
scanf("%s", Cidade_2);

printf( "Digite o tamanho da população:\n");
scanf("%d", &Populacao_2);

printf("Digite o tamanho da área em km²:\n");
scanf("%f", &Area_2);

printf("Digite o PIB:\n");
scanf("%f", &PIB_2 );

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
printf("População: %d\n", Populacao_2);
printf("Área: %.2f km²\n", Area_2);
printf("PIB:%.2f bilhões de reais \n", PIB_2);
printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos_2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
printf("PIB per capita: %.2f reais\n", pib_per_capita_2);
printf("Super Poder: %.1f\n", SuperPoder_2);

//Menu Switch para o jogador escolher qual o 1º atributo ele deseja comparar.

printf("Digite qual o 1º atributo deseja comparar:\n");
printf("1-População\n");
printf("2-Área\n");
printf("3-PIB\n");
printf("4-Pontos turísticos\n");
printf("5-Densidade populacional\n");
printf("6-PIB per capita\n");
printf("7-Super poder\n");
printf("Escolha:\n");
scanf("%d", &escolha1menucomparacao);

/*O Menu Switch que leva o jogador para ecolher o 2º atributos a ser comparado
e que "elimina" a opção após ela ser escolhida no 1º atributo;*/

switch (escolha1menucomparacao){
    //Caso o jogador escolha como 1ª opção a População:
case 1:
printf("O 1º Atributo escolhido para comparação foi População.\n");
printf("Digite qual o 2º atributo deseja comparar:\n");
printf("2-Área\n");
printf("3-PIB\n");
printf("4-Pontos turísticos\n");
printf("5-Densidade populacional\n");
printf("6-PIB per capita\n");
printf("7-Super poder\n");
printf("Escolha:\n");
scanf("%d", &escolha2menucomparacao);
break;

//Caso o jogador escolha como 1ª opção a Área:

case 2: 
printf("O 1º Atributo escolhido para comparação foi Área.\n");
printf("Digite qual o 2º atributo deseja comparar:\n");
printf("1-População\n");
printf("3-PIB\n");
printf("4-Pontos turísticos\n");
printf("5-Densidade populacional\n");
printf("6-PIB per capita\n");
printf("7-Super poder\n");
printf("Escolha:\n");
scanf("%d", &escolha2menucomparacao);
break;

//Caso o jogador escolha como 1ª opção PIB;

case 3:
printf("O 1º Atributo escolhido para comparação foi PIB.\n");
printf("Digite qual o 2º atributo deseja comparar:\n");
printf("1-População\n");
printf("2-Área\n");
printf("4-Pontos turísticos\n");
printf("5-Densidade populacional\n");
printf("6-PIB per capita\n");
printf("7-Super poder\n");
printf("Escolha:\n");
scanf("%d", &escolha2menucomparacao);
break;

case 4:
printf("O 1º Atributo escolhido para comparação foi Pontos Turísticos.\n");
printf("Digite qual o 2º atributo deseja comparar:\n");
printf("1-População\n");
printf("2-Área\n");
printf("3-PIB\n");
printf("5-Densidade populacional\n");
printf("6-PIB per capita\n");
printf("7-Super poder\n");
printf("Escolha:\n");
scanf("%d", &escolha2menucomparacao);
break;

case 5:
printf("O 1º Atributo escolhido para comparação foi Densidade Demográfica.\n");
printf("Digite qual o 2º atributo deseja comparar:\n");
printf("1-População\n");
printf("2-Área\n");
printf("3-PIB\n");
printf("4-Pontos Turísticos\n");
printf("6-PIB per capita\n");
printf("7-Super poder\n");
printf("Escolha:\n");
scanf("%d", &escolha2menucomparacao);
break;

case 6:
printf("O 1º Atributo escolhido para comparação foi PIB per Capita.\n");
printf("Digite qual o 2º atributo deseja comparar:\n");
printf("1-População\n");
printf("2-Área\n");
printf("3-PIB\n");
printf("4-Pontos Turísticos\n");
printf("5-Densidade Demográfica\n");
printf("7-Super poder\n");
printf("Escolha:\n");
scanf("%d", &escolha2menucomparacao);
break;

case 7:
printf("O 1º Atributo escolhido para comparação foi o Super Poder.\n");
printf("Digite qual o 2º atributo deseja comparar:\n");
printf("1-População\n");
printf("2-Área\n");
printf("3-PIB\n");
printf("4-Pontos Turísticos\n");
printf("5-Densidade Demográfica\n");
printf("6-PIB per Capita\n");
printf("Escolha:\n");
scanf("%d", &escolha2menucomparacao);
break;

default:
printf("Opção inválida!"); 
return 0;
}

//Printf da escolha do segundo atributo:

switch (escolha2menucomparacao) {
    case 1:
    printf("O 2º Atributo escolhido para comparação foi População.\n ");
    break;

    case 2:
    printf("O 2º Atributo escolhido para comparação foi Área.\n ");
    break;

    case 3:
    printf("O 2º Atributo escolhido para comparação foi PIB.\n ");
    break;

    case 4:
    printf("O 2º Atributo escolhido para comparação foi Pontos Turísticos.\n ");
    break;

    case 5:
    printf("O 2º Atributo escolhido para comparação foi Densidade Demográfica.\n ");
    break;

    case 6:
    printf("O 2º Atributo escolhido para comparação foi PIB per Capita.\n ");
    break;

    case 7:
    printf("O 2º Atributo escolhido para comparação foi Super Poder.\n ");
    break;

}

switch (escolha1menucomparacao){
    case 1:
    resultado1atributo = Populacao_1 > Populacao_2 ? 1 : 0;
    if (resultado1atributo == 1){
        printf("População Carta 1 (%s): %d, População Carta 2(%s): %d.\n",Cidade_1,Populacao_1,Cidade_2,Populacao_2);
        printf("A Carta 1 venceu!\n");
    } else {
        printf("População Carta 1 (%s): %d, População Carta 2(%s): %d.\n",Cidade_1,Populacao_1,Cidade_2,Populacao_2);
        printf("A Carta 2 venceu!\n");
    }
    break;

    case 2: 
    resultado1atributo = Area_1 > Area_2 ? 1 : 0;
    if (resultado1atributo == 1) {
        printf("Área Carta 1 (%s): %.2f, Área Carta 2(%s): %.2f.\n",Cidade_1,Area_1,Cidade_2,Area_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("Área Carta 1 (%s): %.2f, Área Carta 2(%s): %.2f.\n",Cidade_1,Area_1,Cidade_2,Area_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 3: 
    resultado1atributo = PIB_1 > PIB_2 ? 1 : 0;
    if (resultado1atributo == 1) {
        printf("PIB Carta 1 (%s): %.2f, PIB Carta 2(%s): %.2f.\n",Cidade_1,PIB_1,Cidade_2,PIB_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("PIB Carta 1 (%s): %.2f, PIB Carta 2(%s): %.2f.\n",Cidade_1,PIB_1,Cidade_2,PIB_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 4: 
    resultado1atributo = Pontos_turisticos_1 > Pontos_turisticos_2 ? 1 : 0;
     if (resultado1atributo == 1) {
        printf("Pontos Turísticos Carta 1 (%s): %d, Pontos Turísticos Carta 2(%s): %d.\n",Cidade_1,Pontos_turisticos_1,Cidade_2,Pontos_turisticos_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("Pontos Turísticos Carta 1 (%s): %d, Pontos Turísticos Carta 2(%s): %d.\n",Cidade_1,Pontos_turisticos_1,Cidade_2,Pontos_turisticos_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 5: 
    resultado1atributo = densidade_1 < densidade_2 ? 1 : 0;
    if (resultado1atributo == 1) {
        printf("Densidade Populacional Carta 1 (%s): %.2f, Densidade Populacional Carta 2(%s): %.2f.\n",Cidade_1,densidade_1,Cidade_2,densidade_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("Densidade Populacional Carta 1 (%s): %.2f, Densidade Populacional Carta 2(%s): %.2f.\n",Cidade_1,densidade_1,Cidade_2,densidade_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 6: 
    resultado1atributo = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
    if (resultado1atributo == 1) {
        printf("PIB per Capita Carta 1 (%s): %.2f, PIB per Capita Carta 2(%s): %.2f.\n",Cidade_1,pib_per_capita_1,Cidade_2,pib_per_capita_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("Densidade Populacional Carta 1 (%s): %.2f, PIB per Capita Carta 2(%s): %.2f.\n",Cidade_1,pib_per_capita_1,Cidade_2,pib_per_capita_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 7: 
    resultado1atributo = SuperPoder_1 > SuperPoder_2 ? 1 : 0;
    if (resultado1atributo == 1) {
        printf("Super Poder Carta 1 (%s): %.1f, Super Poder Carta 2(%s): %.1f.\n",Cidade_1,SuperPoder_1,Cidade_2,SuperPoder_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("Super Poder Carta 1 (%s): %.1f, Super Poder Carta 2(%s): %.1f.\n",Cidade_1,SuperPoder_1,Cidade_2,SuperPoder_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

}

switch (escolha2menucomparacao){
    case 1: 
    resultado2atributo = Populacao_1 > Populacao_2 ? 1 : 0;
    if (resultado2atributo == 1) {
        printf("População Carta 1 (%s): %d, População Carta 2(%s): %d.\n",Cidade_1,Populacao_1,Cidade_2,Populacao_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("População Carta 1 (%s): %d, População Carta 2(%s): %d.\n",Cidade_1,Populacao_1,Cidade_2,Populacao_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 2:
    resultado2atributo = Area_1 > Area_2 ? 1 : 0;
    if (resultado2atributo == 1){
        printf("Área Carta 1 (%s): %.2f, Área Carta 2(%s): %.2f.\n",Cidade_1,Area_1,Cidade_2,Area_2);
        printf("A Carta 1 venceu!\n");
    } else {
        printf("Área Carta 1 (%s): %.2f, Área Carta 2(%s): %.2f.\n",Cidade_1,Area_1,Cidade_2,Area_2);
        printf("A Carta 2 venceu!\n");
    }
    break;

    case 3: 
    resultado2atributo = PIB_1 > PIB_2 ? 1 : 0;
     if (resultado2atributo == 1) {
        printf("PIB Carta 1 (%s): %.2f, PIB Carta 2(%s): %.2f.\n",Cidade_1,PIB_1,Cidade_2,PIB_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("PIB Carta 1 (%s): %.2f, PIB Carta 2(%s): %.2f.\n",Cidade_1,PIB_1,Cidade_2,PIB_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 4: 
    resultado2atributo = Pontos_turisticos_1 > Pontos_turisticos_2 ? 1 : 0;
    if (resultado2atributo == 1) {
        printf("Pontos Turísticos Carta 1 (%s): %d, Pontos Turísticos Carta 2(%s): %d.\n",Cidade_1,Pontos_turisticos_1,Cidade_2,Pontos_turisticos_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("Pontos Turísticos Carta 1 (%s): %d, Pontos Turísticos Carta 2(%s): %d.\n",Cidade_1,Pontos_turisticos_1,Cidade_2,Pontos_turisticos_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 5: 
    resultado2atributo = densidade_1 < densidade_2 ? 1 : 0;
    if (resultado2atributo == 1) {
        printf("Densidade Populacional Carta 1 (%s): %.2f, Densidade Populacional Carta 2(%s): %.2f.\n",Cidade_1,densidade_1,Cidade_2,densidade_2);
        printf("A carta 1 Venceu.");
    } else {
        printf("Densidade Populacional Carta 1 (%s): %.2f, Densidade Populacional Carta 2(%s): %.2f.\n",Cidade_1,densidade_1,Cidade_2,densidade_2);
        printf("A carta 2 Venceu.\n");
    }
    break;

    case 6: 
    resultado2atributo = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
    if (resultado2atributo == 1) {
        printf("PIB per Capita Carta 1 (%s): %.2f, PIB per Capita Carta 2(%s): %.2f.\n",Cidade_1,pib_per_capita_1,Cidade_2,pib_per_capita_2);
        printf("A carta 1 Venceu.\n");
    } else {
        printf("Densidade Populacional Carta 1 (%s): %.2f, PIB per Capita Carta 2(%s): %.2f.\n",Cidade_1,pib_per_capita_1,Cidade_2,pib_per_capita_2);
        printf("A carta 2 Venceu.\n");
    }

    break;

    case 7: 
    resultado2atributo = SuperPoder_1 > SuperPoder_2 ? 1 : 0;
    if (resultado2atributo == 1) {
        printf("Super Poder Carta 1 (%s): %.1f, Super Poder Carta 2(%s): %.1f.\n",Cidade_1,SuperPoder_1,Cidade_2,SuperPoder_2);
        printf("A carta 1 Venceu.");
    } else {
        printf("Super Poder Carta 1 (%s): %.1f, Super Poder Carta 2(%s): %.1f.\n",Cidade_1,SuperPoder_1,Cidade_2,SuperPoder_2);
        printf("A carta 2 Venceu.\n");
    }
    break;
}

//Definindo o que cada Atributo é com base nas escolhas do menu 1
//Carta 1 Atributo 1:

if (escolha1menucomparacao == 1) {
    (atributo1carta1 = Populacao_1);
}else if (escolha1menucomparacao == 2){
    (atributo1carta1 = Area_1);
}else if (escolha1menucomparacao == 3){
    (atributo1carta1 = PIB_1);
}else if (escolha1menucomparacao == 4){
    (atributo1carta1 = Pontos_turisticos_1);
}else if (escolha1menucomparacao == 5){
    (atributo1carta1 = densidade_1);
}else if (escolha1menucomparacao == 6){
    (atributo1carta1 = pib_per_capita_1);
}else if (escolha1menucomparacao == 7){
    (atributo1carta1 = SuperPoder_1);
} else {
    return 0;
}
//Definindo o que cada Atributo é com base nas escolhas do menu 2
//Carta 1 Atributo 2:

if (escolha2menucomparacao == 1) {
    (atributo2carta1 = Populacao_1);
}else if (escolha2menucomparacao == 2){
    (atributo2carta1 = Area_1);
}else if (escolha2menucomparacao == 3){
    (atributo2carta1 = PIB_1);
}else if (escolha2menucomparacao == 4){
    (atributo2carta1 = Pontos_turisticos_1);
}else if (escolha2menucomparacao == 5){
    (atributo2carta1 = densidade_1);
}else if (escolha2menucomparacao == 6){
    (atributo2carta1 = pib_per_capita_1);
}else if (escolha2menucomparacao == 7){
    (atributo2carta1 = SuperPoder_1);
} else {
    return 0;
}

//Definindo o que cada Atributo é com base nas escolhas do menu 1:
//Carta 2 Atributo 1

if (escolha1menucomparacao == 1) {
    (atributo1carta2 = Populacao_2);
}else if (escolha1menucomparacao == 2){
    (atributo1carta2 = Area_2);
}else if (escolha1menucomparacao == 3){
    (atributo1carta2 = PIB_2);
}else if (escolha1menucomparacao == 4){
    (atributo1carta2 = Pontos_turisticos_2);
}else if (escolha1menucomparacao == 5){
    (atributo1carta2 = densidade_2);
}else if (escolha1menucomparacao == 6){
    (atributo1carta2 = pib_per_capita_2);
}else if (escolha1menucomparacao == 7){
    (atributo1carta2 = SuperPoder_2);
} else {
    return 0;
}

//Definindo o que cada Atributo é com base nas escolhas do menu 1:
//Carta 2 Atributo 2

if (escolha2menucomparacao == 1) {
    (atributo2carta2 = Populacao_2);
}else if (escolha2menucomparacao == 2){
    (atributo2carta2 = Area_2);
}else if (escolha2menucomparacao == 3){
    (atributo2carta2 = PIB_2);
}else if (escolha2menucomparacao == 4){
    (atributo2carta2 = Pontos_turisticos_2);
}else if (escolha2menucomparacao == 5){
    (atributo2carta2 = densidade_2);
}else if (escolha2menucomparacao == 6){
    (atributo2carta2 = pib_per_capita_2);
}else if (escolha2menucomparacao == 7){
    (atributo2carta2 = SuperPoder_2);
} else {
    return 0;
}

//Soma dos atributos de Cada carta
    
soma1atributo = (atributo1carta1 + atributo2carta1);
soma2atributo = (atributo1carta2 + atributo2carta2);

if (soma1atributo > soma2atributo) {
    printf("Somando Atributos da Carta 1:\n");
    printf("%f + %f = %f \n",atributo1carta1,atributo2carta1,soma1atributo);
    printf("Somando Atributos da Carta 2:\n");
    printf("%f + %f = %f \n",atributo1carta2,atributo2carta2,soma2atributo);
    printf("A Soma de atributos da Carta 1 é maior!\n");
    printf("Carta 1 Vencedora\n");

} else if (soma1atributo < soma2atributo) {
    printf("Somando Atributos da Carta 1:\n");
    printf("%f + %f = %f \n",atributo1carta1,atributo2carta1,soma1atributo);
    printf("Somando Atributos da Carta 2:\n");
    printf("%f + %f = %f \n",atributo1carta2,atributo2carta2,soma2atributo);
    printf("A Soma de atributos da Carta 2 é maior!\n");
    printf("Carta 2 Vencedora\n");
    
} else {
    printf("A soma de atributos da Carta 1 e da Carta 2 são igual!");
    printf("Empate!");
}


return 0;

}

