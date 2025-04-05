#include <stdio.h>

int main() {
    char estado[3];   char estado1[3];
    char codigo[3];   char codigo1[3];
    char cidade[21];  char cidade1[21];
    int populacao;    int populacao1;
    float area;       float area1;
    float pib;        float pib1;
    int turismo;      int turismo1;


    printf("Desafio Super Trunfo - Países\n");
    printf("\n");
    printf("Cadastro de Cartas\n");
    printf("Digite o nome do primeiro estado:\n");
    scanf("%s", &estado);
    printf("Digite o código:\n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);
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
    scanf("%s", &estado1);
    printf("Digite o código:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s]", &cidade1);
    printf("Digite a quantidade de população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área do estado:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo1);

    printf("Carta 1:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s%s\n", estado, codigo);
    printf("Nome da Cidade:%s\n", cidade);
    printf("População:%d\n", populacao);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2f Bilhões de reais\n", pib);
    printf("Números de pontos turisticos:%d\n", turismo);
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado:%s\n", estado1);
    printf("Código:%s%s\n", estado1, codigo1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%.2fkm²\n", area1);
    printf("PIB:%.2f Bilhões de reais\n", pib1);
    printf("Números de pontos turisticos:%d\n", turismo1);

   
    return 0;
}
