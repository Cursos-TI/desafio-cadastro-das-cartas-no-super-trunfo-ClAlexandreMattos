#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários.

int main(){
    printf("Carta 1:\n");

         char estado[20]; //Digite uma letra de A a H sequencial.
         char codcarta[40]; //Código da carta com a letra da cidade e o numero de 01 a 04 ex: A02, B03.
         char nome[30]; //Nome da cidade.
         int populacao; // Total de habitantes.
         float area; //Área da cidade em quilometros quadrados.
         float pib; //O produto bruto da cidade.
         int numerotur;//Quantidade de pontos turistícos na cidade. 


            printf("Digite o Estado: \n");
            scanf("%s", &estado);

            printf("Digite o Código da Carta: \n");
            scanf("%s", &codcarta);

            printf("Digite o Nome da Cidade: \n");
            scanf("%s", &nome);

            printf("Digite a População: \n");
            scanf("%d", &populacao);

            printf("Digite a Área em Km²: \n");
            scanf("%f", &area);
            
            printf("Digite o PIB:\n");
            scanf("%f", &pib);

            printf("Digite o Número de Pontos Turisticos: \n");
            scanf("%d", &numerotur);

            
           
                printf("Carta 2:\n");

                char estado2[20]; //digite uma letra de A a H sequancial
                char codcarta2[40]; //código da carta com a letra da cidade e o numero de 01 a 04 ex:A01, B03
                char nome2[30]; //nome da cidade
                int populacao2; // total de habitante
                float area2; //Área da cidade em quilometros quadrados
                float pib2; //O produto bruto da cidade.
                int numerotur2;//Quantidade de pontos turistícos na cidade. 
   
                printf("Digite o Estado: \n");
                scanf("%s", &estado2);
   
                printf("Digite o Código da Carta: \n");
                scanf("%s", &codcarta2);
   
                printf("Digite o Nome da Cidade: \n");
                scanf("%s", &nome2);
   
                printf("Digite a População: \n");
                scanf("%d", &populacao2);
   
                printf("Digite a Área em Km²: \n");
                scanf("%f", &area2);

                printf("Digite o PIB:\n");
                scanf("%f", &pib2);

                printf("Digite o Número de Pontos Turisticos: \n");
                scanf("%d", &numerotur2);

            printf("Carta 1:\n");
            printf("Estado:%s\n", estado);
            printf("Código:%s\n", codcarta);
            printf("Nome da Cidade:%s\n", nome);
            printf("População:%d\n", populacao);
            printf("Área em Km²:%f\n", area);
            printf("PIB:%f\n", pib);
            printf("Número de Pontos Turísticos:%d\n\n\n",numerotur);


                printf("Carta 2:\n");
                printf("Estado:%s\n", estado2);
                printf("Código:%s\n", codcarta2);
                printf("Nome da Cidade:%s\n", nome2);
                printf("População:%d\n", populacao2);
                printf("Área em Km²:%f\n", area2);
                printf("PIB:%f\n", pib2);
                printf("Número de Pontos Turísticos:%d\n\n\n",numerotur2);




    return 0;


}
