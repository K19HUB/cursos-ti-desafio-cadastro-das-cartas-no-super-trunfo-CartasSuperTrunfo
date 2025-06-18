#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

     // carta 1
    char carta1;
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[30];
    int  numero_habitantes1;
    float area_cidade1;
    float pib1;
    int pontos_turisticos1;

    //carta 2
    char cartNa2;
    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[30];
    int  numero_habitantes2;
    float area_cidade2;
    float pib2;
    int pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

     //coleta de dados da carta 1
    printf("carta 1 \n");

    printf("escolha um estado de a-h :\n");
    scanf("%c",&estado1);
    
    printf("digite o código da carta ex(A01,B02): \n");
    scanf("%s",codigo_da_carta1);

    printf ("digite o nome da cidade : \n");
    scanf(" %[^\n]",nome_da_cidade1);//  (" %[^\n]")Permitir por espaço no nome 

    printf("transcreva quantos habitantes há nessa cidade:\n");
    scanf("%d", &numero_habitantes1);

    printf("qual a área da cidade ? \n");
    scanf("%f",&area_cidade1);

    printf("informe qual o PIB da cidade.\n ");
    scanf("%f",&pib1);
    
    printf("digite quantos pontos turisticos existem na cidade :\n\n");
    scanf("%d",&pontos_turisticos1);


    //coleta de dados da Carta 2 
    printf("carta 2 \n");
    
    printf("escolha uma estado de a-h :\n");
    scanf(" %c",&estado2);
    
    printf("digite o código da carta ex(A01,B02): \n");
    scanf("%s",codigo_da_carta2);
    
    printf ("digite o nome da cidade : \n");
    scanf(" %[^\n]",nome_da_cidade2);//  (" %[^\n]")Permitir por espaço no nome 

    printf("transcreva quantos habitantes há nessa cidade:\n");
    scanf("%d", &numero_habitantes2);
    
    printf("qual a área da cidade ? \n");
    scanf("%f",&area_cidade2);
    
    printf("informe qual o PIB da cidade.\n ");
    scanf("%f",&pib2);
    
    printf("digite quantos pontos turisticos existem na cidade :\n\n");
    scanf("%d",&pontos_turisticos2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //exibir todos os dados da carta (1)
    printf("Carta 1\n\n");
    printf("Estado : %c\n",estado1);
    printf("Código :%s\n",codigo_da_carta1);
    printf("Nome da cidade :%s\n ",nome_da_cidade1);
    printf("População :%d\n",numero_habitantes1);
    printf("Área :%.2f km²\n",area_cidade1);
    printf("PIB :%.2f milhões de reais\n",pib1);
    printf("Números de pontos turísticos :%d\n\n",pontos_turisticos1);

    //exibir todos os dados da carta (2)
    printf("Carta 2 \n\n");
    printf("Estado : %c\n",estado2);
    printf("Código :%s\n",codigo_da_carta2);
    printf("Nome da cidade :%s\n ",nome_da_cidade2);
    printf("População :%d\n",numero_habitantes2);
    printf("Área :%.2f km²\n",area_cidade2);
    printf("PIB :%.2f milhões de reais\n",pib2);
    printf("Números de pontos turísticos :%d\n",pontos_turisticos2);



    return 0;
}
