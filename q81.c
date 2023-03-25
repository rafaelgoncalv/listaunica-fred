#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> // Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa em C que normalize uma string lida, em uma nova string.
Normalizar uma string é o processo de remover os espaços excedentes que separam as
palavras.

Questão não resolvida

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int i,j,tam;
    char string[100];
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite uma string com espaços excedentes:");
    fgets(string,100,stdin);

	// Solicita que o usuário que entre com algum dado qualquer

    printf("A strring original: %s",string);

    tam = strlen(string);

    for(i = 0; string[i] != '\0'; i++){
        for(j = i + 1;j < tam - 1; j++){

            if(string[i] = ' ' && string[i] == string[j]){

                string[i] = string[j];
            }
        }
    }

	/* Fim */ 

	/* Saida de dados */

    printf("\n String normalizada: %s",string);
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 