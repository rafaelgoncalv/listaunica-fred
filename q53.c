#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
um programa, que imprima o tempo necessário para que a população do país A ultrapasse
a população do país B.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int a,b,na,nb,anos;
    //Inicializando a variável
    a = 5000000;
    b = 7000000;
    anos = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");

	// Solicita que o usuário que entre com algum dado qualquer

    while(b > a){

        na = a * 0.03;
        nb = b * 0.02;

        a = a + na;
        b = b + nb;

        anos++;
    }


	/* Fim */ 

	/* Saida de dados */

    printf("Para a ultrapassar a população de b será necessário %d anos", anos);
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 