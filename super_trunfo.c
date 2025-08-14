#include <stdio.h>

    int main() {

        // PRIMEIRA CARTA:

        // VARIÁVEIS:

        char estado1; // Apenas a letra do Estado de A a h;
        char codigo1[5];  // Letra mais numero de 01 a 04;
        char cidade1[20]; // Nome da cidade;
        int populacao1;   // Habitantes
        float area1; // Em km2;
        float pib1; // Bilhoes de reais;
        int pontos1; // Pontos turísticos.

        // LEITURA DOS DADOS DO USUÁRIO:

        printf("\n");
        printf("PRIMEIRA CARTA:\n");
        printf("\n");

        printf("Digite a letra do estado:\n");
        scanf(" %c", &estado1);

        printf("Digite o código da carta:\n");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade:\n");
        scanf("%s", cidade1);

        printf("Quantos habitantes tem a cidade?\n");
        scanf("%d", &populacao1);

        printf("Qual a área da cidade?\n");
        scanf("%f", &area1);

        printf("Qual o PIB da cidade:\n");
        scanf("%f", &pib1);

        printf("Quantos pontos turísticos tem a cidade?\n");
        scanf("%d", &pontos1);

        // SEGUNDA CARTA:

        // VARIÁVEIS:

        char estado2; 
        char codigo2[5];  
        char cidade2[20]; 
        int populacao2;   
        float area2; 
        float pib2; 
        int pontos2; 

        // LEITURA DOS DADOS DO USUÁRIO:

        printf("\n");
        printf("SEGUNDA CARTA:\n");
        printf("\n");

        printf("Digite a letra do estado:\n");
        scanf(" %c", &estado2);

        printf("Digite o código da carta:\n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade:\n");
        scanf("%s", cidade2);

        printf("Quantos habitantes tem a cidade?\n");
        scanf("%d", &populacao2);

        printf("Qual a área da cidade?\n");
        scanf("%f", &area2);

        printf("Qual o PIB da cidade:\n");
        scanf("%f", &pib2);

        printf("Quantos pontos turísticos tem a cidade?\n");
        scanf("%d", &pontos2);

        // EXIBIÇÃO DAS INFORMAÇÕES NA TELA:

        // CARTA 01:
        printf("\n");
        printf("<< CARTA 01: >>\n");
        printf("\n");

        printf("1. Estado: %c;\n", estado1);
        printf("2. Código: %s;\n", codigo1);
        printf("3. Nome da Cidade: %s;\n", cidade1);
        printf("4. População: %d Habitantes;\n", populacao1);
        printf("5. Área: %.2f km²;\n", area1);
        printf("6. PIB: %f Bilhões de reais;\n", pib1);
        printf("7. Número de Pontos Turísticos: %d.\n", pontos1);

        // CARTA 02:
        printf("\n");
        printf("<< CARTA 02: >>\n");
        printf("\n");

        printf("1. Estado: %c;\n", estado2);
        printf("2. Código: %s;\n", codigo2);
        printf("3. Nome da Cidade: %s;\n", cidade2);
        printf("4. População: %d Habitantes;\n", populacao2);
        printf("5. Área: %.2f km²;\n", area2);
        printf("6. PIB: %f Bilhões de reais;\n", pib2);
        printf("7. Número de Pontos Turísticos: %d.\n", pontos2);

        printf("\n");
        printf("MARANATA - O Senhor Jesus vem!");
        printf("\n\n");
        
        return 0;

    }
