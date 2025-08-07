#include <stdio.h> 

    int main(){

    // --> CARTA 01:
    // --> Variáveis Carta 01:
        char estado1;
        char codigo1[5];
        char nome1[20];
        int populacao1;
        float area1;
        double pib1;
        int numero1;

    // --> Variáveis Carta 02:
        char estado2;
        char codigo2[5];
        char nome2[20];
        int populacao2;
        float area2;
        double pib2;
        int numero2;

        printf("\n");    
        printf("Carta 1:");
        printf("\n");

// --> Leitura de dados do usuário - Carta 01:
        printf("Digite a letra do estado: ");
        scanf(" %c", &estado1);

        printf("Digite o código do estado: ");
        scanf("%s", codigo1);
        
        printf("Digite o nome da Cidade: ");
        scanf("%s", nome1);

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao1);

        printf("Qual a área da cidade? ");
        scanf("%f", &area1);

        printf("Qual o PIB da cidade: ");
        scanf("%lf", &pib1);

        printf("Qual o número de pontos turísticos? ");
        scanf("%d", &numero1);

        printf("\n");    
        printf("Carta 2:");
        printf("\n");

// --> Leitura de dados do usuário - Carta 02:
        printf("Digite a letra do estado: ");
        scanf(" %c", &estado2);

        printf("Digite o código do estado: ");
        scanf("%s", codigo2);
        
        printf("Digite o nome da Cidade: ");
        scanf("%s", nome2);

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao2);

        printf("Qual a área da cidade? ");
        scanf("%f", &area2);

        printf("Qual o PIB da cidade: ");
        scanf("%lf", &pib2);

        printf("Qual o número de pontos turísticos? ");
        scanf("%d", &numero2);
    
        printf("\n");
        printf("CARTA 01:");
        printf("\n");

// --> Exibição das informações na tela - Carta 01:
        printf("Estado: %c;\n", estado1);
        printf("Código: %s;\n", codigo1); 
        printf("Nome da Cidade: %s;\n", nome1);
        printf("opulação: %d Habitantes;\n", populacao1);
        printf("Área: %.2f Km2;\n", area1);
        printf("PIB: %.2lf Bilhões\n", pib1);
        printf("Número de Pontos Turísticos: %d;\n", numero1);

        printf("\n");
        printf("CARTA 02:");
        printf("\n");

// --> Exibição das informações na tela - Carta 02:
        printf("Estado: %c;\n", estado2);
        printf("Código: %s;\n", codigo2); 
        printf("Nome da Cidade: %s;\n", nome2);
        printf("opulação: %d Habitantes;\n", populacao2);
        printf("Área: %.2f Km2;\n", area2);
        printf("PIB: %.2lf Bilhões\n", pib2);
        printf("Número de Pontos Turísticos: %d;\n", numero2);

        printf("\n");

return 0;
}
