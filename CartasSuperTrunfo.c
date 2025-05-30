#include <stdio.h>

        int main (){
            int populacao1;
            int numerodepontosturistico1;
            float area1;
            float pib1;

            int populacao2;
            int numerodepontosturistico2;
            float area2;
            float pib2;

            printf("digite sua populacao da carta 1: \n");
            scanf("%d", &populacao1);

            printf("digite seu numero de pontos turistico da carta 1: \n");
            scanf("%d", &numerodepontosturistico1);

            printf("digite sua area da carta 1: \n");
            scanf("%f", &area1);

            printf("digite seu pib da carta 1: \n");
            scanf("%f", &pib1);



            printf("digite sua populacao da carta 2: \n");
            scanf("%d", &populacao2);

            printf("digite seu numero de pontos turistico da carta 2: \n");
            scanf("%d", &numerodepontosturistico2);

            printf("digite sua area da carta 2: \n");
            scanf("%f", &area2);

            printf("digite seu pib da carta 2: \n");
            scanf("%f", &pib2);



            printf("populacao carta 1: %d\nnumero de pontos turistico carta 1: %d\n", populacao1, numerodepontosturistico1);
            printf("area carta 1: %f\npib carta1: %f\n", area1, pib1);

            printf("populacao carta 2: %d\nnumero de pontos turistico carta 2: %d\n", populacao2, numerodepontosturistico2);
            printf("area carta 2: %f\npib carta 2: %f", area2, pib2);

}