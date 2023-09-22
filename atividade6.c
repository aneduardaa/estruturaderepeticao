#include<stdio.h>

main(){

float totalfruta, totalcompra, qtd, totalabacaxi, totalmaca, totalpera; 
int opcao, codfruta, num1, num2;

do{
    printf("\nFrutas: 1. Abacaxi-R$5,00 2. Maçã-R$1,00 3. Pera-R$4,00 a unidade");
    scanf("%d", &codfruta);

    switch(codfruta){
        case 1:
        printf("\ndigite a quantidade de Abacaxis");
        scanf("%d",&qtd);
        totalfruta = qtd * 5;
        totalcompra+= totalabacaxi;
        printf("%.2f", totalabacaxi);
    }

    switch(codfruta){
        case 2:
        printf("\ndigite a quantidade de Maçãs");
        scanf("%d",&qtd);
        totalfruta = qtd * 1;
        totalcompra+= totalmaca;
        printf("%.2f", totalmaca);
    }

    switch(codfruta){ 
        case 1:
        printf("\ndigite a quantidade de Peras");
        scanf("%d",&qtd);
        totalfruta = qtd * 4;
        totalcompra+= totalpera;
        printf("%.2f", totalpera);
    }

    printf("deseja escolher outra? 1-sim, 2-nao");
    scanf("%d %d", &num1, &num2 );

    } while (opcao != 0);
        printf("total compra%.2f", totalcompra);

}
