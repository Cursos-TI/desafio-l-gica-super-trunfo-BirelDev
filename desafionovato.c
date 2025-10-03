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

                //comparacao entre as 2 cartas
                printf("Comparação de cartas \n");

                if (populacaoCarta1 > populacaoCarta2){
                    printf("Carta 1 venceu a carta 2 na categoria população\n");
                } else {
                    printf("Carta 2 venceu a carta 1 na categoria população\n");
                }   
                
                if (areaCarta1 > areaCarta2){
                    printf("Carta 1 venceu a carta 2 na categoria área\n");
                } else {
                    printf("Carta 2 venceu a carta 1 na categoria área\n");
                }

                if (pibCarta1 > pibCarta2){
                    printf("Carta 1 venceu a carta 2 na categoria PIB\n");
                } else {
                    printf("Carta 2 venceu a carta 1 na categoria PIB\n");
                }

                if (pontoTuristicosCarta1 > pontoTuristicosCarta2){
                    printf("Carta 1 venceu a carta 2 na categoria pontos turísticos\n");
                } else {
                    printf("Carta 2 venceu a carta 1 na categoria pontos turísticos\n");
                }

                if (pibpercapita1 > pibpercapita2){
                    printf("Carta 1 venceu a carta 2 na categoria PIB per capita\n");
                } else {
                    printf("Carta 2 venceu a carta 1 na categoria PIB per capita\n");
                }
                
                if (densidadepopulacional1 < densidadepopulacional2){
                    printf("Carta 1 venceu a carta 2 na categoria densidade populacional\n");
                } else {
                    printf("Carta 2 venceu a carta 1 na categoria densidade populacional\n");
                }

                

                //Variavel superpoder
                double superpoder1 = (double)populacaoCarta1 
                                    + (double)areaCarta1 
                                    + (double)pibCarta1 
                                    + (double)pontoTuristicosCarta1 
                                    + pibpercapita1  // já é float, vai ser convertido automaticamente
                                    + densidadepopulacional1; // já é float


                double superpoder2 = (double)populacaoCarta2 
                                    + (double)areaCarta2 
                                    + (double)pibCarta2 
                                    + (double)pontoTuristicosCarta2 
                                    + pibpercapita2 
                                    + densidadepopulacional2;                    


                printf("SuperPoder carta 1 %.2f \nSuperPoder carta 2: %.2f \n", superpoder1, superpoder2);
                if (superpoder1 > superpoder2){
                    printf("Carta 1 é a vencedora do Super Trunfo \n");
                } else if (superpoder2 > superpoder1){
                    printf("Carta 2 é a vencedora do Super Trunfo \n");
                } else {
                    printf("As cartas empataram no Super Trunfo \n");
                }

    
                return 0;

}    

    