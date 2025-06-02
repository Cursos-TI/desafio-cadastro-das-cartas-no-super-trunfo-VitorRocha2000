#include <stdio.h>

        int main (){
            int populacao1;            
            char estado1;
            char codigodacarta1 [100];
            char nomedacidade1 [100];
            int numerodepontosturistico1;
            float area1;
            float pib1;

            char nomedacidade2 [100];            
            char codigodacarta2 [100];
            char estado2;                                 
            int populacao2;
            int numerodepontosturistico2;
            float area2;
            float pib2, densidade1, pibporcapital1, densidade2, pibporcapital2;

            
            printf("digite o codigo da carta 1: \n");
            scanf("%s", &codigodacarta1);                     
            
            printf("digite o nome da cidade da carta 1: \n");
            scanf("%s", &nomedacidade1);            
                        
            printf("digite sua populacao da carta 1: \n");
            scanf("%d", &populacao1);

            printf("digite seu numero de pontos turistico da carta 1: \n");
            scanf("%d", &numerodepontosturistico1);

            printf("digite sua area da carta 1: \n");
            scanf("%f", &area1);

            printf("digite seu pib da carta 1: \n");
            scanf("%f", &pib1);

            printf("digite a densidade da carta 1: \n");
            scanf("%f", &densidade1);

            printf("digite o pib da capital da carta 1: \n");
            scanf("%f", &pibporcapital1);



            printf("digite o codigo da carta 2: \n");
            scanf("%s", &codigodacarta2);                     
            
            printf("digite o nome da cidade carta 2: \n");
            scanf("%s", &nomedacidade2);  

            printf("digite sua populacao da carta 2: \n");
            scanf("%d", &populacao2);

            printf("digite seu numero de pontos turistico da carta 2: \n");
            scanf("%d", &numerodepontosturistico2);

            printf("digite sua area da carta 2: \n");
            scanf("%f", &area2);

            printf("digite seu pib da carta 2: \n");
            scanf("%f", &pib2);

            printf("digite a densidade da carta 2: \n");
            scanf("%f", &densidade2);

            printf("digite o pib da capital da carta 2: \n");
            scanf("%f", &pibporcapital2);

            printf("codigo da carta 1: %s\n", codigodacarta1);
            printf("cidade da carta 1 : %s\n", nomedacidade1);
            printf("populacao carta 1 : %d\nnumero de pontos turistico carta 1: %d\n", populacao1, numerodepontosturistico1);
            printf("area carta 1: %.2f\npib carta1: %.2f\n", area1, pib1);
            densidade1 = (populacao1 / area2); 
            pibporcapital1 = (pib1 / populacao1);
            printf("densidade carta 1: %.2f\npib da capital da carta 1 : %.2f\n", densidade1, pibporcapital1);

            printf("codigo da carta 2: %s\n", codigodacarta2);
            printf("cidade da carta 2: %s\n", nomedacidade2);
            printf("populacao carta 2: %d\nnumero de pontos turistico carta 2: %d\n", populacao2, numerodepontosturistico2);
            printf("area carta 2: %.2f\npib carta 2: %.2f\n", area2, pib2);
            densidade2 = (populacao2 / area2); 
            pibporcapital2 = (pib2 / populacao2);
            printf("densidade carta 2: %.2f\npib da capital da carta 2 : %.2f\n", densidade2, pibporcapital2);


        
}