#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> // Funções matemáticas
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    
    Escreva um algoritmo que gere uma sequência de números pentagonais de n termos. O n-ésimo número pentagonl pn é a quantidade de pontos distintos num padrão de pontos 
    que consistem dos contornos de pentágonos regulares com os lados até n pontos, onde os pentágonos são sobrepostos de modo que eles compartilhem um vértice.

    pn é dado pela seguinte fórmula:

    pn = 3n^(2)-n/(2)
    Para todo  n ≥ 1. Os primeiros números pentagonais são:

    1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176, 210, 247, 287, 330, 376, 425, 477, 532, 590, 651, 715, 782, 852, 925, 1001 (sequência A000326 na OEIS).

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int num,qtdpentagonais,k;
    float pn;
    //Inicializando a variável

    qtdpentagonais = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite a quantidade de termos:");
    scanf("%d",&k);

	// Solicita que o usuário que entre com algum dado qualquer

    while(qtdpentagonais < k)
    {
        for(num = 1; num<=32767 ; num++){

            pn = (3*pow(num,2) - num)/2.0;
            qtdpentagonais++;

            if(qtdpentagonais <= k){

                /* Saida de dados */

                printf("\n%.0f",pn);

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