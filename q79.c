#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <conio.h> //Função para a entrada e saída de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> //Funções para manipular strings
#include <time.h> //Trata de tipos de data e hora.

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa em C, que gere a substring de uma string original, dado a posição
inicial e a final da substring.

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int i,j,inicio,final;
    char string[100],substring[100];
    //Inicializando a variável
    j=0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite uma string:");
    fgets(string,100,stdin);
    printf("Digite o início:");
    scanf("%d",&inicio);
    printf("Digite o final:");
    scanf("%d",&final);

	// Solicita que o usuário que entre com algum dado qualquer

    

    for(i = inicio; i<=final;i++){

        substring[j] = string[i];

        j++;
    }

    substring[j] = '\0';

	/* Fim */ 

	/* Saida de dados */

    printf("\nString: %s",string);
    printf("\nSubstring: %s\n",substring);
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
