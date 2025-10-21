#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //variaveis carta 1
    float categoriasoma1a = 0;
    float categoriasoma1b = 0;
    float resultadofinalcarta1 = 0;
    char estadoCarta1[10];
    char codigoCarta1[10];
    char nomeCarta1[30];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontoTuristicosCarta1;
    float densidadepopulacional1;
    float pibpercapita1;
    
    //valores das variaveis pre selecionados carta 1
  
    // Valores da Carta 1
    strcpy(estadoCarta1, "SP");
    strcpy(codigoCarta1, "A01");
    strcpy(nomeCarta1, "SãoPaulo");
    populacaoCarta1 = 12300000;       // 12,3 milhões de habitantes
    areaCarta1 = 1521.11;             // km²
    pibCarta1 = 699.28;               // bilhões de reais
    pontoTuristicosCarta1 = 25;       // pontos turísticos
    densidadepopulacional1 = populacaoCarta1 / areaCarta1; // cálculo automático
    pibpercapita1 = (pibCarta1 * 1000000000) / populacaoCarta1; // cálculo automático
 
    //variaveis carta 2
    float categoriasoma2a = 0;
    float categoriasoma2b = 0;
    float resultadofinalcarta2 = 0;
    char estadoCarta2[10];
    char codigoCarta2[10];
    char nomeCarta2[30];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontoTuristicosCarta2;
    float densidadepopulacional2;
    float pibpercapita2;

    //valores das variaveis pre selecionados carta 2

    strcpy(estadoCarta2, "RJ");
    strcpy(codigoCarta2, "A02");
    strcpy(nomeCarta2, "Rio de Janeiro");
    populacaoCarta2 = 6748000;        // 6,7 milhões de habitantes
    areaCarta2 = 1200.27;             // km²
    pibCarta2 = 364.00;               // bilhões de reais
    pontoTuristicosCarta2 = 30;       // pontos turísticos
    densidadepopulacional2 = populacaoCarta2 / areaCarta2; // cálculo automático
    pibpercapita2 = (pibCarta2 * 1000000000) / populacaoCarta2; // cálculo automático
            
            
           
  //--------Mostrando o valor de cada atributo--------//
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
                printf("Escolha a primeira categoria para comparar as cartas: \n");
                printf("1 - População \n");
                printf("2 - Área \n");
                printf("3 - PIB \n");
                printf("4 - Pontos turísticos \n");
                printf("5 - Densidade demográfica \n");

                
                int categoria1;
                printf("Digite o número da categoria escolhida: "); 
                scanf("%d", &categoria1);
                printf("Iniciando comparção primeira categoria!\n");

                    switch (categoria1)     
                    {
                    case 1:
                        categoriasoma1a += populacaoCarta1;
                        categoriasoma1b += populacaoCarta2;

                        if (populacaoCarta1 > populacaoCarta2){
                            printf("%s venceu %s na categoria população\n",nomeCarta1, nomeCarta2);
                        } else if (populacaoCarta1 < populacaoCarta2){
                            printf("%s venceu %s na categoria população\n",nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria população\n");
                        }
                        break;
                        
                    case 2:
                        categoriasoma1a += areaCarta1;
                        categoriasoma1b += areaCarta2;
                        if (areaCarta1 > areaCarta2){
                            printf("%s venceu %s na categoria área\n", nomeCarta1, nomeCarta2);
                        } else if (areaCarta1 < areaCarta2){
                            printf("%s venceu %s na categoria área\n", nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria área\n");
                        }
                        break;
                        
                    case 3:
                        categoriasoma1a += pibCarta1;
                        categoriasoma1b += pibCarta2;
                        if (pibCarta1 > pibCarta2){
                            printf("%s venceu %s na categoria PIB\n", nomeCarta1, nomeCarta2);
                        } else if (pibCarta1 < pibCarta2){
                            printf("%s venceu %s na categoria PIB\n", nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria PIB\n");
                        }
                        break;
                        
                    case 4:
                        categoriasoma1a += pontoTuristicosCarta1;
                        categoriasoma1b += pontoTuristicosCarta2;
                        if (pontoTuristicosCarta1 > pontoTuristicosCarta2){
                            printf("%s venceu %s na categoria pontos turísticos\n", nomeCarta1, nomeCarta2);
                        } else if (pontoTuristicosCarta1 < pontoTuristicosCarta2){
                            printf("%s venceu %s na categoria pontos turísticos\n", nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria pontos turísticos\n");
                        }
                        break;
                        
                    case 5:
                        categoriasoma1a += densidadepopulacional1;
                        categoriasoma1b += densidadepopulacional2;
                        if (densidadepopulacional1 < densidadepopulacional2){
                            printf("%s venceu %s na categoria densidade demográfica\n", nomeCarta1, nomeCarta2);
                        } else if (densidadepopulacional1 > densidadepopulacional2){
                            printf("%s venceu a %s na categoria densidade demográfica\n", nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria densidade demográfica\n");
                            
                        }  
                        break;

                     default:
                        printf("Categoria inválida! Por favor, escolha uma categoria entre 1 e 5.\n");
                        
                        return 0;   
                    }
                    
                    printf("--------------------- \n");
                    //menu de comparação
                    printf("Escolha a segunda categoria para comparar as cartas: \n");
                    printf("1 - População \n");
                    printf("2 - Área \n");
                    printf("3 - PIB \n");
                    printf("4 - Pontos turísticos \n");
                    printf("5 - Densidade demográfica \n");

                    int categoria2;
                    printf("Digite o número da categoria escolhida: ");
                    scanf("%d", &categoria2);
                    printf("Iniciando comparção segunda categoria!\n");
                    if (categoria2 == categoria1)
                    {
                        printf("Você já escolheu essa categoria, por favor escolha outra!\n");
                    } else{
                        switch (categoria2)
                        {
                     case 1:
                        categoriasoma2a += densidadepopulacional1;
                        categoriasoma2b += densidadepopulacional2;
                        if (populacaoCarta1 > populacaoCarta2){
                            printf("%s venceu %s na categoria população\n",nomeCarta1, nomeCarta2);
                        } else if (populacaoCarta1 < populacaoCarta2){
                            printf("%s venceu %s na categoria população\n",nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria população\n");
                        }
                        break;
                        
                    case 2:
                        categoriasoma2a += densidadepopulacional1;
                        categoriasoma2b += densidadepopulacional2;
                        if (areaCarta1 > areaCarta2){
                            printf("%s venceu %s na categoria área\n", nomeCarta1, nomeCarta2);
                        } else if (areaCarta1 < areaCarta2){
                            printf("%s venceu %s na categoria área\n", nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria área\n");
                        }
                        break;
                        
                    case 3:
                        categoriasoma2a += densidadepopulacional1;
                        categoriasoma2b += densidadepopulacional2;
                        if (pibCarta1 > pibCarta2){
                            printf("%s venceu %s na categoria PIB\n", nomeCarta1, nomeCarta2);
                        } else if (pibCarta1 < pibCarta2){
                            printf("%s venceu %s na categoria PIB\n", nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria PIB\n");
                        }
                        break;
                        
                    case 4:
                        categoriasoma2a += densidadepopulacional1;
                        categoriasoma2b += densidadepopulacional2;
                        if (pontoTuristicosCarta1 > pontoTuristicosCarta2){
                            printf("%s venceu %s na categoria pontos turísticos\n", nomeCarta1, nomeCarta2);
                        } else if (pontoTuristicosCarta1 < pontoTuristicosCarta2){
                            printf("%s venceu %s na categoria pontos turísticos\n", nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria pontos turísticos\n");
                        }
                        break;
                        
                    case 5:
                        categoriasoma2a += densidadepopulacional1;
                        categoriasoma2b += densidadepopulacional2;
                        if (densidadepopulacional1 < densidadepopulacional2){
                            printf("%s venceu %s na categoria densidade demográfica\n", nomeCarta1, nomeCarta2);
                        } else if (densidadepopulacional1 > densidadepopulacional2){
                            printf("%s venceu a %s na categoria densidade demográfica\n", nomeCarta2, nomeCarta1);
                        } else {
                            printf("As cartas empataram na categoria densidade demográfica\n");
                            
                        }  
                        break;
                        default:
                        printf("Categoria inválida! Por favor, escolha uma categoria entre 1 e 5.\n");
                        return 0;
                        }
                    
                        printf("-------------------------------------\n");
                        printf("Resultado final da comparação entre as cartas:\n");
                        printf("Comparação entre %s e %s:\n", nomeCarta1, nomeCarta2);
                        resultadofinalcarta1 += (categoriasoma1a + categoriasoma2a);
                        resultadofinalcarta2 += (categoriasoma1b + categoriasoma2b);
                        printf("Soma das categorias de %s: %.2f\n", nomeCarta1, resultadofinalcarta1);
                        printf("Soma das categorias de %s: %.2f\n", nomeCarta2, resultadofinalcarta2);
                        if (resultadofinalcarta1 > resultadofinalcarta2){
                            printf("%s é a carta vencedora!\n", nomeCarta1);
                        } else if (resultadofinalcarta1 < resultadofinalcarta2){
                            printf("%s é a carta vencedora!\n", nomeCarta2);
                        } else {
                            printf("As cartas empataram na comparação final!\n");
                        }
                        

                    }    return 0;
}
                

        

                