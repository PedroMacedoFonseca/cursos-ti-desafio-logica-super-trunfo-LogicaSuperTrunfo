#include <stdio.h>

int main() {
    // Dados da primeira carta (São Paulo)
    char estadoSP[] = "São Paulo";
    char codigoSP[] = "SP";
    char cidadeSP[] = "São Paulo";
    int populacaoSP = 12000000;
    float areaSP = 1521.11; // em km²
    float pibSP = 700.3; // em bilhões de R$
    int pontosTuristicosSP = 200;

    // Dados da segunda carta (Rio de Janeiro)
    char estadoRJ[] = "Rio de Janeiro";
    char codigoRJ[] = "RJ";
    char cidadeRJ[] = "Rio de Janeiro";
    int populacaoRJ = 6700000;
    float areaRJ = 1182.3; // em km²
    float pibRJ = 400.2; // em bilhões de R$
    int pontosTuristicosRJ = 150;

    // Cálculos de densidade e o PIB per Capita
    float densidadePopulacionalSP = populacaoSP / areaSP;
    float pibPerCapitaSP = pibSP * 1000000000 / populacaoSP; // (PIB*Bilhões)/População
    float densidadePopulacionalRJ = populacaoRJ / areaRJ;
    float pibPerCapitaRJ = pibRJ * 1000000000 / populacaoRJ; // (PIB*Bilhões)/População

    // Exibindo os dados pedidos
    printf("\nCarta 1 - Cidade: %s, Estado: %s\n", cidadeSP, estadoSP);
    printf("Código da carta: %s\n", codigoSP);
    printf("População: %d habitantes\n", populacaoSP);
    printf("Área: %.2f km²\n", areaSP);
    printf("PIB: %.2f Bilhões de R$\n", pibSP);
    printf("Pontos turísticos: %d\n", pontosTuristicosSP);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacionalSP);
    printf("PIB per capita: R$ %.2f \n", pibPerCapitaSP);

    printf("\nCarta 2 - Cidade: %s, Estado: %s\n", cidadeRJ, estadoRJ);
    printf("Código da carta: %s\n", codigoRJ);
    printf("População: %d habitantes\n", populacaoRJ);
    printf("Área: %.2f km²\n", areaRJ);
    printf("PIB: %.2f Bilhões de R$\n", pibRJ);
    printf("Pontos turísticos: %d\n", pontosTuristicosRJ);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacionalRJ);
    printf("PIB per capita: R$ %.2f \n", pibPerCapitaRJ);

    // Comparação da população entre as cidades
    if (populacaoSP > populacaoRJ) {
        printf("A carta São Paulo vence. Sua população é maior.");
    } else {
        printf("A carta do Rio de Janeiro vence. A população carioca é maior que a paulista.");
    }

    return 0;
}
