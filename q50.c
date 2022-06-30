#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia um valor e imprima todas as possíveis combinações em
que o lançamento de um par de dados tenha como resultado da soma dos valores dos
dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve
imprimir as seguintes combinações:
• 1 6

• 2 5
• 3 4
• 4 3
• 5 2
• 6 1
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int c1,c2;

	/* Fim */ 

	/* Saida de dados */

    for(c1=1;c1<=6;c1++){
        for(c2=1;c2<=6;c2++){

            if(c1+c2 == 7){

                printf("\n%d,%d",c1,c2);
            }
        }

    }
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 

