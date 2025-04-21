#include <stdio.h>
int main (){
 // variáveis para coleta dos dados das cartas
   
  char cidade1[15],cidade2[15];   
    char estado1,estado2;
    char cod1[2],cod2[2];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int ponto1,ponto2;
   
    // armazenamento dos dados da carta 1

    printf("\n\n       Bem vindo ao Super trunfo!\n\n Para iniciar informe a Cidade da sua primeira carta.\n");
    scanf("%s",&cidade1);

    printf("Digite uma letra entre 'A' e 'H':\n");
    scanf("%s",&estado1);

    printf("Digite um número entre '01' e '04':\n");
    scanf("%s",&cod1);

    printf("Qual a população deste Estado?\n");
    scanf("%d",&populacao1);

    printf("Qual a área do Estado?\n");
    scanf("%f",&area1);

    printf("qual o seu PIB?.\n");
    scanf("%f",&pib1);

    printf("Quantos pontos Turísticos?\n");
    scanf("%d",&ponto1);

    //Armazenamento da carta 2
    printf("\n Informe a cidade da sua segunda carta.\n");
    scanf("%s",&cidade2);

    printf("Digite uma letra entre 'A' e 'H':\n");
    scanf("%s",&estado2);

    printf("Digite um número entre '01' e '04':\n");
    scanf("%s",&cod2);

    printf("Qual a população deste Estado?\n");
    scanf("%d",&populacao2);

    printf("Qual a área do Estado?\n");
    scanf("%f",&area2);

    printf("qual o seu PIB?.\n");
    scanf("%f",&pib2);

    printf("Quantos pontos Turísticos?\n");
    scanf("%d",&ponto2);

    // informações da carta 1
    printf("\n\n Carta 1 \n");
    printf("\n Estado: %s",&estado1);

    printf ("\n Código: %s",&estado1);
    printf("%s",&cod1);

    printf ("\n Nome da cidade:  %s",&cidade1);

    printf("\n População: %d",populacao1);

    printf("\n Área: %.2f",area1);
    printf(" Km²");

    printf("\n PIB: %.2f",pib1);
    printf(" bilhões de Reais");

    printf("\n Pontos Turísticos: %d",ponto1);

    // Informações da Carta 2
    printf("\n\n Carta 2 \n" );
    printf("\n Estado: %s",&estado2);

    printf ("\n Código: %s",&estado2);
    printf("%s",&cod2);

    printf ("\n Nome da cidade: %s",&cidade2);

    printf("\n População: %d",populacao2);

    printf("\n Área: %.2f",area2);
    printf(" Km²");

    printf("\n PIB: %.2f",pib2);
    printf(" bilhões de Reais");

    printf("\n Pontos Turísticos: %d \n\n",ponto2);

    printf("OBRIGADO POR JOGAR!!!\n\n\n\n");
   
return 0;
 }
