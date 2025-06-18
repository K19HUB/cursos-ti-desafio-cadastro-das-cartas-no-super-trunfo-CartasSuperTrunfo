#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - calcular super poder
// Este código inicial serve como base para comparar as informações dos atributos e descobrir qual carta ganhou.
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

    float densidade_populacional1;
    float pib_per_capita1;

    //carta 2
    char cartNa2;
    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[30];
    int  numero_habitantes2;
    float area_cidade2;
    float pib2;
    int pontos_turisticos2;

    float densidade_populacional2;
    float pib_per_capita2;

    
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



    //calculo necessario para descobrir a densiadade populacional e o pib per capita de ambas as cartas:
    //calculo da densidade populacional da carta 1
    densidade_populacional1 = numero_habitantes1 / area_cidade1 ;

    //calcular o PIB per capita da carta 1
    pib_per_capita1 =  pib1 / numero_habitantes1 ; 
                // o PIB é float e o número de habitantes é int 
                //fazendo a divisão o resultado saira em float

    //calculo da densidade populacional da carta 2
    densidade_populacional2 = numero_habitantes2 / area_cidade2 ;

    //calcular o PIB per capita da carta 2
    pib_per_capita2 =  pib2 / numero_habitantes2 ; 
                 // o PIB é float e o número de habitantes é int 
                 //fazendo a divisão o resultado saira em float


    
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

    printf("Densidade populacional: %.2f hab/km² \n",densidade_populacional1);
    printf("PIB per capita: %.2f reais  \n\n",pib_per_capita1);


    //exibir todos os dados da carta (2)
    printf("Carta 2 \n\n");
    printf("Estado : %c\n",estado2);
    printf("Código :%s\n",codigo_da_carta2);
    printf("Nome da cidade :%s\n ",nome_da_cidade2);
    printf("População :%d\n",numero_habitantes2);
    printf("Área :%.2f km²\n",area_cidade2);
    printf("PIB :%.2f milhões de reais\n",pib2);
    printf("Números de pontos turísticos :%d\n",pontos_turisticos2);

    printf("Densidade populacional: %.2f hab/km² \n",densidade_populacional2);
    printf("PIB per capita: %.2f reais \n\n",pib_per_capita2);


    
    // calculando super poder :
    //esse codigo serve para descobrir qual carta ganha, atravez de um sistema de pontuação  onde quem tem mais pontos ganha .
    float super_poder1 = numero_habitantes1 + area_cidade1 + pib1 + pontos_turisticos1 + pib_per_capita1 + densidade_populacional1;
    float super_poder2 = numero_habitantes2 + area_cidade2 + pib2 + pontos_turisticos2 + pib_per_capita2 + densidade_populacional2;
    
    //comparação das cartas :
    //compara o atributo x da carta 1 e o atributo y da carta 2.
    printf("  Comparação das cartas    \n\n");
    printf("População: Carta 1 venceu (%d)\n", numero_habitantes1 > numero_habitantes2 ? 1:0);
    printf("Área: Carta 1 venceu (%d)\n", area_cidade1 > area_cidade2 ? 1:0);
    printf("PIB: carta 1 venceu (%d)\n",pib1 > pib2 ? 1 : 0);
    printf("Pontos turísticos: carta 1 venceu (%d)\n",pontos_turisticos1>pontos_turisticos2 ? 1 : 0);
    printf("Densidade populacional: carta 2 venceu (%d)\n",densidade_populacional1 > densidade_populacional2 ? 1 : 0);
    printf("PIB per capita :carta 1 venceu (%d)\n",pib_per_capita1>pib_per_capita2 ? 1 : 0);
    printf("Super poder: carta 1 venceu(%d)\n",super_poder1>super_poder2 ? 1 : 0);





    return 0;
}
