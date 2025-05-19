//SUPER TRUNFO DE CARTAS.

#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    int populacao1;
    int turisticos1;
    float area1;
    float pib1;
    char estado1;
    char codigo1[2];
    char cidade1[20];

    // Declaração das variáveis para a segunda carta
    int populacao2;
    int turisticos2;
    float area2;
    float pib2;
    char estado2;
    char codigo2[2];
    char cidade2[20];
    

    // Entrada de dados da carta 01
    printf("=== Cadastro da Carta 01 ===\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);// Leitura de char, apenas uma letra (ex(A)).

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);// Leitura de char até dois caracteres,(ex(01)).

    printf("Nome da cidade: ");
    scanf("%s", cidade1); // Leitura de char tipo tring (ex(Salvador)).

    printf("População: ");
    scanf("%d", &populacao1);// Leitura de dados do tipo inteiro (ex(10)).

    printf("Área (em km²): ");
    scanf("%f", &area1);// Leitura de dados tipo ponto flutuante (ex(1,7)).

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);// Leitura de dados tipo ponto flutuante (ex(50,000)).

    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos1);// Leitura de dados do tipo inteiro (ex(100)).

    // Entrada dos dados da carta 02
    printf("\n=== Cadastro da Carta 2 ===\n");//INTERAÇÃO COM O USUARIO/ coletando dados
    printf("Estado (letra de A a H): ");// 
    scanf(" %c", &estado2);// Leitura de char, apenas uma letra (ex(B)).

    printf("Código da carta (ex: B03): ");
    scanf("%s", codigo2);// Leitura de char até dois caracteres,(ex(02)).

    printf("Nome da cidade: ");
    scanf("%s", cidade2);// Leitura de char tipo tring (ex(Salvador))

    printf("População: ");
    scanf("%d", &populacao2);// Leitura de dados do tipo inteiro (ex(100))

    printf("Área (em km²): ");
    scanf("%f", &area2);// Leitura de dados tipo ponto flutuante (ex(1,7))

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);// Leitura de dados tipo ponto flutuante (ex(10,7000))

    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos2);// // Leitura de dados do tipo inteiro (ex(100)).

//SAIDA DE DADOS DAS CARTAS
    //Primeira carta    
    printf("\n=== Carta 01 ===\n");//Escrevendo dados da carta 01.
    printf("Estado: %c\n", estado1);//Escrevendo char, apenas uma letra. (ex(A)).
    printf("Código: %s\n", codigo1);////Escrevendo char, até 2 números (ex(02)).
    printf("Nome da Cidade: %s\n", cidade1);//Escrevendo char, tipo sting. (ex(SALVADOR)).
    printf("População: %d\n", populacao1); //Escrevendo int, número inteiro. (ex(100)).
    printf("Área: %.2f km²\n", area1);//Escrevendo float, ponto flutuante. (ex(1,000)).
    printf("PIB: %.2f bilhões de reais\n", pib1);//Escrevendo float, ponto flutuante. (ex(1,000)).
    printf("Número de Pontos Turísticos: %d\n", turisticos1);//Escrevendo int, número inteiro. (ex(10)).


    //Segunda carta
    printf("\n=== Carta 02 ===\n");//Escrevendo dados da carta 02.
    printf("Estado: %c\n", estado2);//Escrevendo char, apenas uma letra. (ex(B)).
    printf("Código: %s\n", codigo2);//Escrevendo char, até 2 números (ex(02)).
    printf("Nome da Cidade: %s\n", cidade2);//Escrevendo char, tipo string. (ex(SALVADOR)).
    printf("População: %d\n", populacao2);//Escrevendo int, número inteiro. (ex(100)).
    printf("Área: %.2f km²\n", area2);//Escrevendo float, ponto flutuante. (ex(1,000)).
    printf("PIB: %.2f bilhões de reais\n", pib2);//Escrevendo float, ponto flutuante. (ex(1,000)).
    printf("Número de Pontos Turísticos: %d\n", turisticos2);//Escrevendo int, número inteiro. (ex(10)).

    return 0;
}
