#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao[5];
    
    //Gerar numero aleatório para o computador
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //numero entre 1 e 100

    //inicio do jogo 
    printf("Bem vindo ao jogo Maior, Menor ou Igual! \n");
    printf("Voce deve escolher um tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("Digite sua escolha (M, N ou I): ");
    scanf("%s", &tipoComparacao);

    printf("Agora, digite um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);

    //exibir o numero do computador
    printf("O número do computador é: %d\n", numeroComputador);

    switch (tipoComparacao[0])
    {
   case 'M':
   case 'm':
        printf("Você escolheu Maior.\n");
        resultado = (numeroJogador > numeroComputador) ? 1 : 0;
        

        break; 
    case 'N':
    case 'n':
        printf("Você escolheu Menor.\n");
        resultado = (numeroJogador < numeroComputador) ? 1 : 0;
        

        break;

    case 'I':
    case 'i':
        printf("Você escolheu Igual.\n");
        resultado = (numeroJogador == numeroComputador) ? 1 : 0;
        

        break;
    default:
        printf("Opção inválida! Por favor, escolha M, N ou I.\n");
        break;
    }

    printf("O numero do computador é %d e o seu é %d\n", numeroComputador, numeroJogador);

    if (resultado == 1){
        printf("Parabéns! Você ganhou!\n");
    } else {
        printf("Que pena! Você perdeu. Tente novamente!\n");
    }

    return 0;
}