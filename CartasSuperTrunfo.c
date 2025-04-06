#include <stdio.h>

int main() {
    char estado[2];                          char estado1[2];
    char codigo[3];                          char codigo1[3];
    char cidade[21];                         char cidade1[21];
    int populacao;                           int populacao1;
    float area;                              float area1;
    float pib;                               float pib1;
    int turismo;                             int turismo1;
    

    printf("Desafio Super Trunfo - Países\n");
    printf("\n");
    printf("Cadastro de Cartas\n");
    printf("\n");
    printf("Digite o nome do primeiro estado:\n");
    scanf("%s", estado);
    printf("Digite o código:\n");
    scanf("%s", codigo);
        //funcão setdebuf(stdin,NULL) para limpar quaisquer sobra de entrada no buffer do teclado
    setbuf(stdin,NULL);
    printf("Digite o nome da cidade:\n");
        //funcão fgets utilizada para capturar entrada de caracteres com espaço
    fgets(cidade, 21, stdin);
    printf("Digite a quantidade de população:\n");
    scanf("%d", &populacao);
    printf("Digite a área do estado:\n");
    scanf("%f", &area);
    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo);
    printf("\n");
    printf("Digite o nome do segundo estado:\n");
    scanf("%s", estado1);
    printf("Digite o código:\n");
    scanf("%s", codigo1);
        //funcão setdebuf(stdin,NULL) para limpar quaisquer sobra de entrada no buffer do teclado;
    setbuf(stdin,NULL);
    printf("Digite o nome da cidade:\n");
        //funcão fgets utilizada para capturar entrada de caracteres com espaço
    fgets(cidade1, 21, stdin);
    printf("Digite a quantidade de população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área do estado:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo1);
    
    float densidade;                                    float densidade1;
    float percapita;                                    float percapita1;

    densidade = populacao / area;                       densidade1 = populacao1 / area1;        
    percapita = pib*1000000000 / populacao;             percapita1 = pib1*1000000000 / populacao1;

    printf("\n");
    printf("Carta 1:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s%s\n", estado, codigo);
    printf("Nome da Cidade:%s", cidade);
    printf("População:%d\n", populacao);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2f Bilhões de reais\n", pib);
    printf("Números de pontos turisticos:%d\n", turismo);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade);
    printf("PIB per Capita:%.2f Reais\n", percapita);
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado:%s\n", estado1);
    printf("Código:%s%s\n", estado1, codigo1);
    printf("Nome da Cidade:%s", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%.2fkm²\n", area1);
    printf("PIB:%.2f Bilhões de reais\n", pib1);
    printf("Números de pontos turisticos:%d\n", turismo1);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
    printf("PIB per Capita:%.2f Reais\n", percapita1);

   
    return 0;
}