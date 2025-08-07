#include <stdio.h> 
#include <string.h>

    int main(){
        char estado;
        char codigo[5];
        char nome[20];
        int populacao;
        float area;
        double pib;
        int numero;

        //ENTRADA DE DADOS PELO USUÁRIO:
        printf("\n");
        printf("Carta 1:");
        printf("\n");

        printf("Digite a letra do estado: ");
        scanf(" %c", &estado);

        printf("Digite o código do estado: ");
        scanf("%s", codigo);

        getchar();
        
        printf("Digite o nome da Cidade: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome,"\n")] = 0;

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao);

        printf("Qual a área da cidade? ");
        scanf("%f", &area);

        printf("Qual o PIB da cidade: ");
        scanf("%lf", &pib);

        printf("Qual o número de pontos turísticos? ");
        scanf("%d", &numero);

        //IMPRESSÃO DAS INFORMAÇÕES DO USUÁRIO:
        printf("\n");
        printf("Carta 01:");
        printf("\n");

        printf("01) Estado: %c;\n", estado);
        printf("02) Código: %s;\n", codigo); 
        printf("03) Nome da Cidade: %s;\n", nome);
        printf("04) População: %d Habitantes;\n", populacao);
        printf("05) Área: %.2f Km2;\n", area);
        printf("06) PIB: %.2lf Bilhões;\n", pib);
        printf("07) Número de Pontos Turísticos: %d;\n", numero);

        printf("\n");

return 0;
}
