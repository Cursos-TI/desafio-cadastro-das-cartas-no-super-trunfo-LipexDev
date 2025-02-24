#include <stdio.h>
int main() {


    printf("Desafio Super Trunfo Países \n");

    char A, B;
    char A1[3];
    char B1[3];
    char SaoPaulo[25], Maranhao[25];
    int População1, População2;
    float areaKm1, areaKm2;
    float PIB1, PIB2;
    int turismo1, turismo2;

    
//dados da primeira carta A1
    
printf("Dados da carta: \n");
scanf("%c",  &A);

printf("Digite o código da carta: \n");
scanf( "%s",  &A1);

printf("Digite o nome da cidade: \n");
scanf( "%s",  &SaoPaulo);

printf("Digite a populaçao: \n");
scanf("%d",  &População1);

printf(" Digite a Área em Km²: \n");
scanf("%f",  &areaKm1);

printf("Digite o PIB: \n");
scanf("%f", &PIB1);

printf("Número de pontos turisticos: \n");
scanf("%d", &turismo1);


    //dados da segunda carta B1


    printf("Dados da carta: \n");
scanf("%c",  &B);

printf("Digite o código da carta: \n");
scanf("%s",  &B1);

printf("Digite o nome da cidade: \n");
scanf("%s",  &Maranhao);

printf("Digite a populaçao: \n");
scanf("%d",  &População2);

printf(" Digite a Área em Km²: \n");
scanf("%f",  &areaKm2);

printf("Digite o PIB: \n");
scanf("%f", &PIB2);

printf("Número de pontos turisticos: \n");
scanf("%d", &turismo2);
    








    return 0;

}
