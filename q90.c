#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> // Funções matemáticas
#include <conio.h> // Função para a entrada e saída de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> // Funções para manipular strings
#include <time.h> // Trata de tipos de data e hora.
#include <ctype.h> // Contém funções e macros para manipulação de caracteres.

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

 
 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int i,j,k;
    char string[100],vogais[100],consoantes[100],letra;
    //Inicializando a variável
    j = 0;
    k = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite uma string:");
    fgets(string,100,stdin);

	// Solicita que o usuário que entre com algum dado qualquer

    for(i=0;string[i]!='\0';i++){

        letra = string[i];

        if(letra=='a' || letra=='e'|| letra=='i' || letra=='o'|| letra=='u' || letra=='A' || letra=='E'|| letra=='I' || letra=='O'|| letra=='U'){

            vogais[j] = letra;

            j++;
        }else{

            consoantes[k] = letra;

            k++;
        }
    }

    vogais[j] = '\0';
    consoantes[k] = '\0';

    strcat(vogais,consoantes); // vogais armazenará o que está na string vogais + o que está na string consoantes

	/* Fim */ 

	/* Saida de dados */

    printf("String: %s",vogais);
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim