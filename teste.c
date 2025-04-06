#include <stdio.h>
    int main() {

        int populacao;
        float pib;        
        float percapita;
        
        printf("Digite a quantidade de população:\n");
        scanf("%d", &populacao);
        printf("Digite o PIB:\n");
        scanf("%f", &pib);

        percapita = pib*1e9 / populacao;
        printf("População:%d\n", populacao);
        printf("PIB:%.2f Bilhões de reais\n", pib);
        printf("PIB per Capita:%.2f Reais\n", percapita);    
        

        return 0;
    }