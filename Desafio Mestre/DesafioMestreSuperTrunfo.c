#include <stdio.h>

int main()
{
    // Informações das cartas
    char estadoSP[] = "São Paulo";
    char cidadeSP[] = "São Paulo";
    int populacaoSP = 12000000;
    float areaSP = 1521.11;
    float pibSP = 700.3;
    int pontosTuristicosSP = 200;
    float densidadePopulacionalSP = populacaoSP / areaSP;

    char estadoRJ[] = "Rio de Janeiro";
    char cidadeRJ[] = "Rio de Janeiro";
    int populacaoRJ = 6700000;
    float areaRJ = 1182.3;
    float pibRJ = 400.2;
    int pontosTuristicosRJ = 150;
    float densidadePopulacionalRJ = populacaoRJ / areaRJ;

    int atributo1, atributo2;

    // Escolha do atributo de comparação:
    printf("Escolha o primeiro atributo para a comparação:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Área\n");
    printf("4. Densidade populacional\n");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo para a comparação (não pode ser o mesmo do primeiro):\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Opção já escolhida! O programa será encerrado. Tente novamente.\n");
        return 0;
    }
    else
        printf("Opções confirmadas!");

    // Variáveis para armazenar os resultados dos atributos escolhidos
    float resultadoSP = 0, resultadoRJ = 0;

    // Comparando o primeiro atributo (atributo1)
    switch (atributo1)
    {
    case 1: // População
        resultadoSP += populacaoSP;
        resultadoRJ += populacaoRJ;
        break;
    case 2: // PIB
        resultadoSP += pibSP;
        resultadoRJ += pibRJ;
        break;
    case 3: // Área
        resultadoSP += areaSP;
        resultadoRJ += areaRJ;
        break;
    case 4: // Densidade populacional
        resultadoSP += densidadePopulacionalSP;
        resultadoRJ += densidadePopulacionalRJ;
        break;
    default:
        printf("Escolha inválida! O programa será encerrado.\n");
        return 0;
    }

    // Comparando o segundo atributo (atributo2)
    switch (atributo2)
    {
    case 1: // População
        resultadoSP += populacaoSP;
        resultadoRJ += populacaoRJ;
        break;
    case 2: // PIB
        resultadoSP += pibSP;
        resultadoRJ += pibRJ;
        break;
    case 3: // Área
        resultadoSP += areaSP;
        resultadoRJ += areaRJ;
        break;
    case 4: // Densidade populacional
        resultadoSP += densidadePopulacionalSP;
        resultadoRJ += densidadePopulacionalRJ;
        break;
    default:
        printf("Escolha inválida! O programa será encerrado.\n");
        return 0;
    }

    // Exibindo os resultados:
    printf("\n\n***Resultados da comparação:***\n");
    printf("Comparando %s e %s:\n\n", estadoSP, estadoRJ);

    // Atributos escolhidos e seus valores
    printf("Atributos escolhidos para a comparação:\n");
    printf("1. ");
    if (atributo1 == 1)
        printf("População\n");
    if (atributo1 == 2)
        printf("PIB\n");
    if (atributo1 == 3)
        printf("Área\n");
    if (atributo1 == 4)
        printf("Densidade populacional\n");

    printf("2. ");
    if (atributo2 == 1)
        printf("População\n");
    if (atributo2 == 2)
        printf("PIB\n");
    if (atributo2 == 3)
        printf("Área\n");
    if (atributo2 == 4)
        printf("Densidade populacional\n");

    // Exibindo os valores dos atributos de cada cidade
    printf("\nValores dos atributos:\n");
    printf("%s:\n", estadoSP);
    if (atributo1 == 1)
        printf("População: %d\n", populacaoSP);
    if (atributo1 == 2)
        printf("PIB: %.2f\n", pibSP);
    if (atributo1 == 3)
        printf("Área: %.2f\n", areaSP);
    if (atributo1 == 4)
        printf("Densidade populacional: %.2f\n", densidadePopulacionalSP);

    if (atributo2 == 1)
        printf("População: %d\n", populacaoSP);
    if (atributo2 == 2)
        printf("PIB: %.2f\n", pibSP);
    if (atributo2 == 3)
        printf("Área: %.2f\n", areaSP);
    if (atributo2 == 4)
        printf("Densidade populacional: %.2f\n", densidadePopulacionalSP);

    printf("\n%s:\n", estadoRJ);
    if (atributo1 == 1)
        printf("População: %d\n", populacaoRJ);
    if (atributo1 == 2)
        printf("PIB: %.2f\n", pibRJ);
    if (atributo1 == 3)
        printf("Área: %.2f\n", areaRJ);
    if (atributo1 == 4)
        printf("Densidade populacional: %.2f\n", densidadePopulacionalRJ);

    if (atributo2 == 1)
        printf("População: %d\n", populacaoRJ);
    if (atributo2 == 2)
        printf("PIB: %.2f\n", pibRJ);
    if (atributo2 == 3)
        printf("Área: %.2f\n", areaRJ);
    if (atributo2 == 4)
        printf("Densidade populacional: %.2f\n", densidadePopulacionalRJ);

    // Exibindo a soma dos atributos de cada cidade
    printf("\nSoma dos atributos para cada cidade:\n");
    printf("%s: %.2f\n", estadoSP, resultadoSP);
    printf("%s: %.2f\n", estadoRJ, resultadoRJ);

    // Exibindo quem venceu ou se houve empate
    printf("\nResultado da comparação: \n");
    if (resultadoSP > resultadoRJ)
    {
        printf("%s venceu!\n", estadoSP);
    }
    else if (resultadoSP < resultadoRJ)
    {
        printf("%s venceu!\n", estadoRJ);
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}