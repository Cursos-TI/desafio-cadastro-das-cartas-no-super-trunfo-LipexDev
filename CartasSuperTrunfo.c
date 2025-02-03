#include <stdio.h>
int main() {

    printf("Desafio Super Trunfo Países \n")

    char Estado [50];
    char código_carta [6];
    char cidade [50];
    int População;
    float Km²;
    float PIB;
    int turismo;

printf("Digite o Estado: \n");
scanf("%s",  &Estado);

printf("Digite o código da carta: \n");
scanf("%s",  &código_carta);

printf("Digite o nome da cidade: \n");
scanf("%s",  &cidade);

printf("Digite a populaçao: \n");
scanf("%i",  &População);

printf(" Digite a Área em Km²: \n");
scanf("%f",  &Km²);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

prinf("Número de pontos turiscitos: \n");
scanf("%i", &turismo);







    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
