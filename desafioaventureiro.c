#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //variaveis
    char estadoCarta1[10];
    char codigoCarta1[10];
    char nomeCarta1[30];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontoTuristicosCarta1;
    float densidadepopulacional1;
    float pibpercapita1;
      
    //coleta do estado 
    printf("Digite o estado: ");
    scanf(" %s", estadoCarta1);

    //coleta do codigo da carta
    printf("Digite o código: ");
    scanf(" %s", codigoCarta1);

    //coleta do nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCarta1);

    //coleta da populacao 
    printf("Digite a População:");
    scanf(" %d", &populacaoCarta1);

    //coleta da area
    printf("Digite a Área: ");
    scanf(" %f", &areaCarta1);
    getchar();

    //coleta do pib
    printf("Digite o PIB: ");
    scanf(" %f", &pibCarta1);
    getchar();
    
    //coleta do ponto turistico
    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &pontoTuristicosCarta1);

    //Calculo densidade populacional
    densidadepopulacional1 = populacaoCarta1 / areaCarta1;

    //calculo PIB per capita
    pibpercapita1 = pibCarta1 / (float)populacaoCarta1;

    //Mensagem informando sobre coleta da carta 2
    printf("Carta 1 cadastrada com sucesso por favor insira as informações da segunda carta\n");



        // ---------------- Coleta da carta 2 ----------------//

            //variaveis
            char estadoCarta2[10];
            char codigoCarta2[10];
            char nomeCarta2[30];
            int populacaoCarta2;
            float areaCarta2;
            float pibCarta2;
            int pontoTuristicosCarta2;
            float densidadepopulacional2;
            float pibpercapita2;
     
            
            
            //coleta do estado 
            printf("Digite o estado: ");
            scanf("%s", estadoCarta2);

            //coleta do codigo da carta
            printf("Digite o código: ");
            scanf("%s", codigoCarta2);

            //coleta do nome da cidade
            printf("Digite o nome da cidade: ");
            scanf("%s", nomeCarta2);

            //coleta da populacao 
            printf("Digite a População:");
            scanf("%d", &populacaoCarta2);

            //coleta da area
            printf("Digite a Área: ");
            scanf("%f", &areaCarta2);

            //coleta do pib
            printf("Digite o PIB: ");
            scanf("%f", &pibCarta2);
            
            //coleta do ponto turistico
            printf("Digite a quantidade de pontos turisticos: ");
            scanf("%d", &pontoTuristicosCarta2);

            //Calculo densidade populacional
            densidadepopulacional2 = populacaoCarta2 / areaCarta2;

            //calculo PIB per capita
            pibpercapita2 = pibCarta2 / (float)populacaoCarta2;

            //informando finalização da coleta de dados
            printf("--------------------- \n");

            printf("Cartas cadastradas com sucesso confira as irfomações a seguir: \n");

            printf("--------------------- \n");
    
                //--------Resultado final mostrando a 1 carta--------//
                printf("Carta 1: \n");

                printf("Estado: %s \n", estadoCarta1);

                printf("Codigo: %s \n", codigoCarta1);

                printf("Nome da cidade: %s \n", nomeCarta1);

                printf("População: %d \n", populacaoCarta1);

                printf("Área: %.2f km²\n", areaCarta1);

                printf("PIB: R$ %.2f bilhões\n", pibCarta1);

                printf("Pontos turisticos: %d \n", pontoTuristicosCarta1);

                printf("Densidade populacional: %.2f \n", densidadepopulacional1);

                printf("PIB per capita: %.5f \n", pibpercapita1);

                //--------Resultado final mostrando a 2 carta--------//
                printf("--------------------- \n");
                printf("Carta 2: \n");

                printf("Estado: %s \n", estadoCarta2);

                printf("Codigo: %s \n", codigoCarta2);

                printf("Nome da cidade: %s \n", nomeCarta2);

                printf("População: %d \n", populacaoCarta2);

                printf("Área: %.2f km²\n", areaCarta2);

                printf("PIB: R$ %.2f bilhões\n", pibCarta2);

                printf("Pontos turisticos: %d \n", pontoTuristicosCarta2);

                printf("Densidade populacional: %.2f \n", densidadepopulacional2);

                printf("PIB per capita: %.5f \n", pibpercapita2);

                printf("--------------------- \n");

                //menu de comparação
                printf("Escolha a categoria para comparar as cartas: \n");
                printf("1 - População \n");
                printf("2 - Área \n");
                printf("3 - PIB \n");
                printf("4 - Pontos turísticos \n");
                printf("5 - Densidade demográfica \n");

                int categoria;
                printf("Digite o número da categoria escolhida: "); 
                scanf("%d", &categoria);
                printf("--------------------- \n");
                switch (categoria)
                {
                case 1:
                    if (populacaoCarta1 > populacaoCarta2){
                        printf("%s venceu %s na categoria população\n",nomeCarta1, nomeCarta2);
                    } else if (populacaoCarta1 < populacaoCarta2){
                        printf("%s venceu %s na categoria população\n",nomeCarta2, nomeCarta1);
                    } else {
                        printf("As cartas empataram na categoria população\n");
                    }
                    break;
                case 2:
                    if (areaCarta1 > areaCarta2){
                        printf("%s venceu %s na categoria área\n", nomeCarta1, nomeCarta2);
                    } else if (areaCarta1 < areaCarta2){
                        printf("%s venceu %s na categoria área\n", nomeCarta2, nomeCarta1);
                    } else {
                        printf("As cartas empataram na categoria área\n");
                    }
                    break;
                case 3:
                    if (pibCarta1 > pibCarta2){
                        printf("%s venceu %s na categoria PIB\n", nomeCarta1, nomeCarta2);
                    } else if (pibCarta1 < pibCarta2){
                        printf("%s venceu %s na categoria PIB\n", nomeCarta2, nomeCarta1);
                    } else {
                        printf("As cartas empataram na categoria PIB\n");
                    }
                    break;
                case 4:
                    if (pontoTuristicosCarta1 > pontoTuristicosCarta2){
                        printf("%s venceu %s na categoria pontos turísticos\n", nomeCarta1, nomeCarta2);
                    } else if (pontoTuristicosCarta1 < pontoTuristicosCarta2){
                        printf("%s venceu %S na categoria pontos turísticos\n", nomeCarta2, nomeCarta1);
                    } else {
                        printf("As cartas empataram na categoria pontos turísticos\n");
                    }
                    break;
                case 5:
                    if (densidadepopulacional1 < densidadepopulacional2){
                        printf("%s venceu %s na categoria densidade demográfica\n", nomeCarta1, nomeCarta2);
                    } else if (densidadepopulacional1 > densidadepopulacional2){
                        printf("%s venceu a %s na categoria densidade demográfica\n", nomeCarta2, nomeCarta1);
                    } else {
                        printf("As cartas empataram na categoria densidade demográfica\n");
                    }  

                }

                return 0;

}    

    