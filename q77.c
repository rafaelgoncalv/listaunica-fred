#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> //Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa em C, que leia uma string, gere uma nova string com o texto
invertido e imprima esta nova string.
 
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */
    int i,j,tam;
    char string1[100],string2[100],letra;
    //Inicializando a variável
    j = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite uma string:");
    scanf("%100[^\n]",string1); // string não precisa de & comercial porque já é interpretado pelo programa como um ponteiro

	// Solicita que o usuário que entre com algum dado qualquer

    tam = strlen(string1);

    for(i = tam-1;i>=0;i--){

        string2[j] = string1[i];

        j++;

    }

    string2[j]='\0';

	/* Fim */ 

	/* Saida de dados */

    printf("\n%s",string2);
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 