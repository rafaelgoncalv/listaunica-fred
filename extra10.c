#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> // Funções matemáticas
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    
    Escreva um algoritmo que gere uma sequência de números hexagonais de n termos. Um número hexagonal é um número poligonal que pode ser representado na forma de um hexágono.
    A fórmula para um número hexagonal n é:

    hn =2n^(2)-n = n(2n-1) = ((2n) (2n-1))/2;

    Os primeros 20 números hexagonais são:

    1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231, 276, 325, 378, 435, 496, 561, 630, 703, 780

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int num,qtdhexagonais,k;
    int hn;
    //Inicializando a variável

    qtdhexagonais = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite a quantidade de termos:");
    scanf("%d",&k);

	// Solicita que o usuário que entre com algum dado qualquer

    while(qtdhexagonais < k)
    {
        for(num = 1; num<=32767 ; num++){

            hn = 2*pow(num,2) - num;
            qtdhexagonais++;

            if(qtdhexagonais <= k){

                /* Saida de dados */

                printf("\n%d",hn);

                // Exibe mensagem na tela

            }

        }
    }

	/* Fim */ 
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 