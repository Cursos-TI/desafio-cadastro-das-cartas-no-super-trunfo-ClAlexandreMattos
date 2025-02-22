#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    printf("Carta 1:\n");

         char estado[20];
         char codcarta[40]; //código da carta
         char nome[30]; //nome da cidade
         int populacao; // total de habitante


            printf("Digite o Estado: \n");
            scanf("%s", estado);

            printf("Digite o Código da Carta: \n");
            scanf("%s", codcarta);

            printf("Digite o Nome da Cidade: \n");
            scanf("%s", nome);

            printf("Digite a População: \n");
            scanf("%d", populacao);


            printf("Carta 1:\n");
            printf("Estado:%s\n", estado);
            printf("Código:%s\n", codcarta);
            printf("Nome da Cidade:%s\n", nome);
            printf("População:%s\n", populacao);

            
    return 0;


}
