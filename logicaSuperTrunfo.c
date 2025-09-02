#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
//Aluno - Gustavo Achcar

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[5], codigo2[5], nome1[50], nome2[50];
    int num1, num2, opcao1,opcao2;
    unsigned long int pop1, pop2;
    float area1, area2, pib1,pib2, dp1, dp2, pibper1, pibper2, super1, super2, x1, x2, y1, y2, resultado1, resultado2;

 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o estado da carta 1: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade da carta 1: \n");
    scanf(" %4s", codigo1);
    printf("Digite o nome da cidade da carta 1:\n");
    scanf(" %[^\n]", nome1);
    printf("Digite a população da cidade da carta 1: \n");
    scanf("%lu", &pop1);
    printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &num1);
    printf("Digite a área em Km² da cidade da carta 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pib1);
    printf("Digite o estado da carta 2: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade da carta 2: \n");
    scanf(" %4s", codigo2);
    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %[^\n]", nome2);
    printf("Digite a população da cidade da carta 2: \n");
    scanf("%lu", &pop2);
    printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &num2);
    printf("Digite a área em Km² da cidade da carta 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pib2);

    // Cálculo da densidade populacional das cartas:

    dp1 = pop1/area1;
    dp2 = pop2/area2;

    // Cálculo do PIB per capita:

    pibper1 = (pib1/pop1)*1000000;
    pibper2 = (pib2/pop2)*1000000;

    //Cálculo super poder:

    super1 = area1 + pib1 + pibper1 + (1/dp1) + num1;
    super2 = area2 + pib2 + pibper2 + (1/dp2) + num2;

    // Inclusão de Menu

    printf("Digite a primeira opção para comparar as cartas:\n");
    printf("1. Comparar Área.\n");
    printf("2. Comparar População.\n");
    printf("3. Comparar PIB.\n");
    printf("4. Comparar PIB per capita.\n");
    printf("5. Comparar Número de pontos turísticos.\n");
    printf("6. Comparar Densidade Populacional.\n");
    printf("7. Comparar Super Poder.\n");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo.\n");
    printf("Atenção! Você deve escolher um atributo diferente do primeiro.\n");
    printf("1. Comparar Área.\n");
    printf("2. Comparar População.\n");
    printf("3. Comparar PIB.\n");
    printf("4. Comparar PIB per capita.\n");
    printf("5. Comparar Número de pontos turísticos.\n");
    printf("6. Comparar Densidade Populacional.\n");
    printf("7. Comparar Super Poder.\n");
    scanf("%d", &opcao2);

    printf("\nAs cidades escolhidas foram: %s e %s\n" , nome1, nome2);
    printf("\nOs dois atributos usados na comparação foram:\n\n");

    switch (opcao1){
    case 1:
        printf("Área:\n");
        printf("Área da carta 1: %.2f Km² e Área da carta 2: %.2f Km²\n", area1,area2);
        x1 = area1;
        y1 = area2;
        if (area1 > area2) {
            printf("Carta 1 venceu!\n");
        } else if (area1 < area2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 2:
        printf("População:\n");
        printf("População da carta 1: %lu habitantes e População da carta 2: %lu habitantes.\n", pop1,pop2);
        x1 = pop1;
        y1 = pop2;
        if (pop1 > pop2) {
            printf("Carta 1 venceu!\n");
        } else if (pop1 < pop2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 3:
        printf("PIB:\n");
        printf("PIB da carta 1: %.2f bilhões de reais e PIB da carta 2: %.2f bilhões de reais.\n", pib1,pib2);
        x1 = pib1;
        y1 = pib2;
        if (pib1 > pib2) {
            printf("Carta 1 venceu!\n");
        } else if (pib1 < pib2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 4:
        printf("PIB per capita:\n");
        printf("PIB per capita da carta 1: %.2f milhões de reais e PIB per capita da carta 2: %.2f milhões de reais.\n", pibper1,pibper2);
        x1 = pibper1;
        y1 = pibper2;
        if (pibper1 > pibper2) {
            printf("Carta 1 venceu!\n");
        } else if (pibper1 < pibper2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 5:
        printf("Número de Pontos Turísticos:\n");
        printf("Número de Pontos Turísticos da carta 1: %d e Número de Pontos Turísticos da carta 2: %d.\n", num1,num2);
        x1 = num1;
        y1 = num2;
        if (num1 > num2) {
            printf("Carta 1 venceu!\n");
        } else if (num1 < num2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 6:
        printf("Densidade Populacional:\n");
        printf("Densidade Populacional da carta 1: %.2f e Densidade Populacional da carta 2: %.2f.\n", dp1,dp2);
        x1 = dp1;
        y1 = dp2;
        if (dp1 < dp2) {
            printf("Carta 1 venceu!\n");
        } else if (dp1 > dp2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 7:
        printf("Super Poder:\n");
        printf("Super Poder da carta 1: %.2f e Super Poder da carta 2: %.2f.\n", super1,super2);
        x1 = super1;
        y1 = super2;
        if (super1 > super2) {
            printf("Carta 1 venceu!\n");
        } else if (super1 < super2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

        switch (opcao2){
    case 1:
        printf("\nÁrea:\n");
        printf("Área da carta 1: %.2f Km² e Área da carta 2: %.2f Km²\n", area1,area2);
        x2 = area1;
        y2 = area2;
        if (area1 > area2) {
            printf("Carta 1 venceu!\n");
        } else if (area1 < area2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 2:
        printf("\nPopulação:\n");
        printf("População da carta 1: %lu habitantes e População da carta 2: %lu habitantes.\n", pop1,pop2);
        x2 = pop1;
        y2 = pop2;
        if (pop1 > pop2) {
            printf("Carta 1 venceu!\n");
        } else if (pop1 < pop2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 3:
        printf("\nPIB:\n");
        printf("PIB da carta 1: %.2f bilhões de reais e PIB da carta 2: %.2f bilhões de reais.\n", pib1,pib2);
        x2 = pib1;
        y2 = pib2;
        if (pib1 > pib2) {
            printf("Carta 1 venceu!\n");
        } else if (pib1 < pib2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 4:
        printf("\nPIB per capita:\n");
        printf("PIB per capita da carta 1: %.2f milhões de reais e PIB per capita da carta 2: %.2f milhões de reais.\n", pibper1,pibper2);
        x2 = pibper1;
        y2 = pibper2;
        if (pibper1 > pibper2) {
            printf("Carta 1 venceu!\n");
        } else if (pibper1 < pibper2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 5:
        printf("\nNúmero de Pontos Turísticos:\n");
        printf("Número de Pontos Turísticos da carta 1: %d e Número de Pontos Turísticos da carta 2: %d.\n", num1,num2);
        x2 = num1;
        y2 = num2;
        if (num1 > num2) {
            printf("Carta 1 venceu!\n");
        } else if (num1 < num2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 6:
        printf("\nDensidade Populacional:\n");
        printf("Densidade Populacional da carta 1: %.2f e Densidade Populacional da carta 2: %.2f.\n", dp1,dp2);
        x2 = dp1;
        y2 = dp2;
        if (dp1 < dp2) {
            printf("Carta 1 venceu!\n");
        } else if (dp1 > dp2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    case 7:
        printf("\nSuper Poder:\n");
        printf("Super Poder da carta 1: %.2f e Super Poder da carta 2: %.2f.\n", super1,super2);
        x2 = super1;
        y2 = super2;
        if (super1 > super2) {
            printf("Carta 1 venceu!\n");
        } else if (super1 < super2) {
            printf("Carta 2 venceu!\n");
        }else {
            printf("Houve um empate!\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    resultado1 = x1+x2;
    resultado2 = y1+y2;
    printf("A soma dos atributos da carta 1 é: %.2f e da carta 2 é: %.2f\n", resultado1, resultado2);
    if (resultado1 > resultado2){
        printf("Carta 1 ganhou a rodada!");
    }else if (resultado1 < resultado2){
        printf("Carta 2 ganhou a rodada!");
    }else{
        printf("Rodada empatou!");
    }
return 0;
}