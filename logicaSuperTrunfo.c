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
    int num1, num2, c;
    unsigned long int pop1, pop2;
    float area1, area2, pib1,pib2, dp1, dp2, pibper1, pibper2, super1, super2;

 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade da carta 1: \n");
    scanf(" %4s", codigo1);
    
    printf("Digite o nome da cidade da carta 1: \n");
    ((c = getchar()) != '\n' && c !=EOF);
    fgets ( nome1, sizeof (nome1), stdin);

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
    ((c = getchar()) != '\n' && c !=EOF);
    fgets ( nome2, sizeof (nome2), stdin);

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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n --- Dados da Carta 1 --- \n");
    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("População: %lu habitantes\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num1);
    printf("Densidade Populacional: %.2f\n", dp1);
    printf("PIB per capita: %.2f milhões de reais\n", pibper1);
    printf("Super poder: %.2f\n", super1);


    printf("\n --- Dados da Carta 2 --- \n");
    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("População: %lu habitantes\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num2);
    printf("Densidade Populacional: %.2f\n", dp2);
    printf("PIB per capita: %.2f milhões de reais\n", pibper2);
    printf("Super poder: %.2f\n\n", super2);

    //Comparações entre as propriedades de cada carta

    printf("Carta vencedora do critério Área: %d\n", area1 > area2);
    printf("Carta vencedora do critério População: %d\n", pop1 > pop2);
    printf("Carta vencedora do critério PIB: %d\n", pib1 > pib2);
    printf("Carta vencedora do critério PIB per capita: %d\n", pibper1 > pibper2);
    printf("Carta vencedora do critério Número de Pontos Turísticos: %d\n", num1 > num2);
    printf("Carta vencedora do critério Densidade Populacional: %d\n" , (1/dp1) > (1/dp2));
    printf("Carta vencedora do critério Super Poderes: %d\n\n", super1 > super2);

// Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (area1 > area2) {
        printf("A cidade: %s tem maior área.", nome1);
    } else {
        printf("A cidade: %s tem maior área.\n\n", nome2);
    }

    if (pop1 > pop2) {
        printf("A cidade: %s tem maior população.\n\n", nome1);
    } else {
        printf("A cidade: %s tem maior população.\n\n", nome2);
    }

    if (pib1 > pib2) {
        printf("A cidade: %s tem maior PIB.\n\n", nome1);
    } else {
        printf("A cidade: %s tem maior PIB.\n\n", nome2);
    }

    if (pibper1 > pibper2) {
        printf("A cidade: %s tem maior PIB per capita.\n\n", nome1);
    } else {
        printf("A cidade: %s tem maior PIB per capita.\n\n", nome2);
    }

    if (num1 > num2) {
        printf("A cidade: %s tem maior número de pontos turísticos.\n\n", nome1);
    } else {
        printf("A cidade: %s tem maior número de pontos turísticos.\n\n", nome2);
    }

     if (dp1 > dp2) {
        printf("A cidade: %s tem maior densidade populacional.\n\n", nome1);
    } else {
        printf("A cidade: %s tem maior densidade populacional.\n\n", nome2);
    }

    if (super1 > super2) {
        printf("A cidade: %s tem maior Super Poderes.\n\n", nome1);
    } else {
        printf("A cidade: %s tem maior Super Poderes.\n\n", nome2);
    }


    return 0;
}

 

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


