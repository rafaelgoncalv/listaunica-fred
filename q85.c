#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras
#include <string.h> // Funções para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia uma string representando um número hexadecimal (base
16) e imprima sua representação em decimal (base 10).c

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    char string[100];
    int base = 1;
    int decimal = 0;
    int tam, i;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
    printf("Digite um número hexadecimal:");
    scanf("%100[^\n]", string);

	// Solicita que o usuário que entre com algum dado qualquer

    tam = strlen(string);

    for(i = tam - 1; i >= 0; i--){

        // se o caractere estiver em '0'-'9', convertendo
        //-lo para integral 0-9 subtraindo 48 de
        // valor ASCII

        if(string[i] >= '0' && string[i] <= '9'){

            decimal += ((int)(string[i]) - 48) * base;

            base = base * 16;
        }
        
        else{

        // se o caractere estiver em 'A'-'F' , convertendo
        // para integral 10 - 15 subtraindo 55
        // do valor ASCII
            if(string[i] >= 'A' && string[i] <= 'F'){

                decimal += ((int)(string[i]) - 55) * base;

                base = base * 16;
            }
        }

    }

	/* Fim */ 

	/* Cálculos matemáticos */

	/* Saida de dados */

    printf("%s em decimal é %d", string, decimal);
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 