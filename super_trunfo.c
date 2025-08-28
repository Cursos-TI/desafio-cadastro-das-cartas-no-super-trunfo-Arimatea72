#include <stdio.h>

int main(){

// PRIMEIRA CARTA:

printf("\n\n");
printf(" >> DADOS CARTA 01:\n\n");

// VARIÁVEIS:

char estado1;
char codigo1[5];
int populacao1;
char cidade1[20];
int turistico1;
float area1, pib1, densidade1, pibpercapta1;

printf("1. DIGITE O LETRA DO ESTADO: ");
scanf(" %c", &estado1);

printf("2. DIGITE O CÓDIGO DA CIDADE: ");
scanf("%s", codigo1);

printf("3. DIGITE O NOME DA CIDADE: ");
scanf("%s", cidade1);

printf("4. QUAL A POPULAÇÃO? ");
scanf("%d", &populacao1);

printf("5. QUAL A ÁREA DA CIDADE (km2) ");
scanf("%f", &area1);

printf("6. QUAL O PIB DA CIDADE? ");
scanf("%f", &pib1);

printf("7. QUANTOS PONTOS TURÍSTICOS TEM A CIDADE? ");
scanf("%d", &turistico1);

// CÁLCULOS ARITMÉTICOS:

densidade1 = populacao1 / area1;
pibpercapta1 = (pib1 *1000000000) / populacao1;

printf("\n\n");

// SEGUNDA CARTA:

printf("\n");
printf("<< DADOS CARTA 02:\n\n");

// VARIÁVEIS:

char estado;
char codigo[5];
int populacao;
char cidade[20];
int turistico;
float area, pib, densidade, pibpercapta;

printf("1. DIGITE O LETRA DO ESTADO: ");
scanf(" %c", &estado);

printf("2. DIGITE O CÓDIGO DA CIDADE: ");
scanf("%s", codigo);

printf("3. DIGITE O NOME DA CIDADE: ");
scanf("%s", cidade);

printf("4. QUAL A POPULAÇÃO? ");
scanf("%d", &populacao);

printf("5. QUAL A ÁREA DA CIDADE (km2) ");
scanf("%f", &area);

printf("6. QUAL O PIB DA CIDADE? ");
scanf("%f", &pib);

printf("7. QUANTOS PONTOS TURÍSTICOS TEM A CIDADE? ");
scanf("%d", &turistico);

// CÁLCULOS ARITMÉTICOS:

densidade = populacao / area;
pibpercapta = (pib *1000000000) / populacao;

// IMPRIMIR NA TELA OS RESULTADOS DAS DUAS CARTAS: 

// CARTA 01:

printf("\n");
printf("** CARTA 01: **\n");
printf("\n");

printf("1. Estado: %c;\n", estado1);
printf("2. Código: %s;\n", codigo1);
printf("3. Nome da Cidade: %s;\n", cidade1);
printf("4. População: %d;\n", populacao1);
printf("5. Área: %.2fkm2;\n", area1);
printf("6. PIB: %.2F Bilhões de Reais;\n", pib1);
printf("7. Número de Pontos Turísticos: %d;\n", turistico1);
printf("8. Densidade Populacional: %.2f hab/km2;\n", densidade1);
printf("9. PIB per Capta: %.2f reais;\n", pibpercapta1);

printf("\n\n");
printf("** CARTA 02: **\n\n");

// CARTA 01:

printf("1. Estado: %c;\n", estado);
printf("2. Código: %s;\n", codigo);
printf("3. Nome da Cidade: %s;\n", cidade);
printf("4. População: %d;\n", populacao);
printf("5. Área: %.2fkm2;\n", area);
printf("6. PIB: %.2F Bilhões de Reais;\n", pib);
printf("7. Número de Pontos Turísticos: %d;\n", turistico);
printf("8. Densidade Populacional: %.2f hab/km2;\n", densidade);
printf("9. PIB per Capta: %.2f reais;\n", pibpercapta);

printf("\n\n");
printf("MARANATA - O Senhor Jesus vem!\n\n");

return 0;

}
