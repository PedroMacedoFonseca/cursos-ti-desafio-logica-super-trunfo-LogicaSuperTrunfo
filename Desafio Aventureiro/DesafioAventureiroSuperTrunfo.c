#include <stdio.h>

int main() {
    int opcao, cidadeEscolhida;

    printf("Qual atributo será usado para fazer a comparação?\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    
    printf("Escolha uma opção (1-5): ");
    scanf("%d", &opcao);

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

    printf("\nOs adversários são:\n\n");
    
    printf("Carta 1: %s - %s\n", estadoSP, cidadeSP);
    printf("População: %d\n", populacaoSP);
    printf("Área: %.2f km²\n", areaSP);
    printf("PIB: %.2f bilhões de R$\n", pibSP);
    printf("Pontos turísticos: %d\n", pontosTuristicosSP);
    printf("Densidade Populacional: %.2f hab./m²\n\n", densidadePopulacionalSP);

    printf("Carta 2: %s - %s\n", estadoRJ, cidadeRJ);
    printf("População: %d\n", populacaoRJ);
    printf("Área: %.2f km²\n", areaRJ);
    printf("PIB: %.2f bilhões de R$\n", pibRJ);
    printf("Pontos turísticos: %d\n", pontosTuristicosRJ);
    printf("Densidade Populacional: %.2f hab./m²\n\n", densidadePopulacionalRJ);

    // Escolha do representante
    printf("\nAgora, escolha qual cidade será o seu representante para a comparação:\n");
    printf("1 - %s\n", cidadeSP);
    printf("2 - %s\n", cidadeRJ);
    printf("Escolha uma opção (1-2): ");
    scanf("%d", &cidadeEscolhida);

    // Verificar se a escolha é válida
    if (cidadeEscolhida != 1 && cidadeEscolhida != 2) {
    printf("\nOpção inválida! Escolha uma cidade válida (1 ou 2).\n");
    return 1; // Finaliza o programa se a escolha for inválida
    }

    // Comparação de acordo com a opção escolhida
    switch(opcao) {
        case 1: // População
            if (cidadeEscolhida == 1) {
                if (populacaoSP > populacaoRJ) {
                    printf("\nVocê venceu! %s tem mais população.\n", cidadeSP);
                } else if (populacaoSP < populacaoRJ) {
                    printf("\nVocê perdeu! %s tem mais população.\n", cidadeRJ);
                } else {
                    printf("\nEmpate! %s e %s têm a mesma população.\n", cidadeSP, cidadeRJ);
                }
            } else {
                if (populacaoRJ > populacaoSP) {
                    printf("\nVocê venceu! %s tem mais população.\n", cidadeRJ);
                } else if (populacaoRJ < populacaoSP) {
                    printf("\nVocê perdeu! %s tem mais população.\n", cidadeSP);
                } else {
                    printf("\nEmpate! %s e %s têm a mesma população.\n", cidadeRJ, cidadeSP);
                }
            }
            break;
        case 2: // Área
            if (cidadeEscolhida == 1) {
                if (areaSP > areaRJ) {
                    printf("\nVocê venceu! %s tem uma área maior.\n", cidadeSP);
                } else if (areaSP < areaRJ) {
                    printf("\nVocê perdeu! %s tem uma área maior.\n", cidadeRJ);
                } else {
                    printf("\nEmpate! %s e %s têm a mesma área.\n", cidadeSP, cidadeRJ);
                }
            } else {
                if (areaRJ > areaSP) {
                    printf("\nVocê venceu! %s tem uma área maior.\n", cidadeRJ);
                } else if (areaRJ < areaSP) {
                    printf("\nVocê perdeu! %s tem uma área maior.\n", cidadeSP);
                } else {
                    printf("\nEmpate! %s e %s têm a mesma área.\n", cidadeRJ, cidadeSP);
                }
            }
            break;
        case 3: // PIB
            if (cidadeEscolhida == 1) {
                if (pibSP > pibRJ) {
                    printf("\nVocê venceu! %s tem um PIB maior.\n", cidadeSP);
                } else if (pibSP < pibRJ) {
                    printf("\nVocê perdeu! %s tem um PIB maior.\n", cidadeRJ);
                } else {
                    printf("\nEmpate! %s e %s têm o mesmo PIB.\n", cidadeSP, cidadeRJ);
                }
            } else {
                if (pibRJ > pibSP) {
                    printf("\nVocê venceu! %s tem um PIB maior.\n", cidadeRJ);
                } else if (pibRJ < pibSP) {
                    printf("\nVocê perdeu! %s tem um PIB maior.\n", cidadeSP);
                } else {
                    printf("\nEmpate! %s e %s têm o mesmo PIB.\n", cidadeRJ, cidadeSP);
                }
            }
            break;
        case 4: // Pontos turísticos
            if (cidadeEscolhida == 1) {
                if (pontosTuristicosSP > pontosTuristicosRJ) {
                    printf("\nVocê venceu! %s tem mais pontos turísticos.\n", cidadeSP);
                } else if (pontosTuristicosSP < pontosTuristicosRJ) {
                    printf("\nVocê perdeu! %s tem mais pontos turísticos.\n", cidadeRJ);
                } else {
                    printf("\nEmpate! %s e %s têm o mesmo número de pontos turísticos.\n", cidadeSP, cidadeRJ);
                }
            } else {
                if (pontosTuristicosRJ > pontosTuristicosSP) {
                    printf("\nVocê venceu! %s tem mais pontos turísticos.\n", cidadeRJ);
                } else if (pontosTuristicosRJ < pontosTuristicosSP) {
                    printf("\nVocê perdeu! %s tem mais pontos turísticos.\n", cidadeSP);
                } else {
                    printf("\nEmpate! %s e %s têm o mesmo número de pontos turísticos.\n", cidadeRJ, cidadeSP);
                }
            }
            break;
        case 5: // Densidade populacional
            if (cidadeEscolhida == 1) {
                if (densidadePopulacionalSP > densidadePopulacionalRJ) {
                    printf("\nVocê venceu! %s tem maior densidade populacional.\n", cidadeSP);
                } else if (densidadePopulacionalSP < densidadePopulacionalRJ) {
                    printf("\nVocê perdeu! %s tem maior densidade populacional.\n", cidadeRJ);
                } else {
                    printf("\nEmpate! %s e %s têm a mesma densidade populacional.\n", cidadeSP, cidadeRJ);
                }
            } else {
                if (densidadePopulacionalRJ > densidadePopulacionalSP) {
                    printf("\nVocê venceu! %s tem maior densidade populacional.\n", cidadeRJ);
                } else if (densidadePopulacionalRJ < densidadePopulacionalSP) {
                    printf("\nVocê perdeu! %s tem maior densidade populacional.\n", cidadeSP);
                } else {
                    printf("\nEmpate! %s e %s têm a mesma densidade populacional.\n", cidadeRJ, cidadeSP);
                }
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}