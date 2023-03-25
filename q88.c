#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> //Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa em C, que coloque a string lida toda em caixa alta. 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    char string[100];
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite uma string:");
    fgets(string,100,stdin);

    // Solicita que o usuário que entre com algum dado qualquer

    printf("\nAntes: %s",string);

    strupr(string); //Convertendo uma string toda para maiúscula

    /*

    Se eu quiser converter a string toda para minúscula procedo da seguinte maneira:

    strlwr(string);

    printf("\nDepois: %s\n",string);

    */


	/* Fim */ 

	/* Saida de dados */
    
    printf("\nDepois: %s\n",string);
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
