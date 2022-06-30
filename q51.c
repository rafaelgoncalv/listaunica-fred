#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    A série de Fibonacci é formada pela sequencia:
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
    Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N
sendo uma entrada do algoritmo).
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int v1,v2,v3,limite,contador;
    //Inicializando a variável

    v1 = -1;
    v2 = 1;

    /*

    O valor de v1 = -1 e o de v2 = 1, pois é necessário que seja assim para que a sequência Fibonnacci comece a partir de 1.

        A série de Fibonacci é formada pela sequencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

        O 1 é a soma do anterior que é 0 mais 1. Note que para isto ser possível o anterior ao zero precisou ser 1 e antes deste -1 para que a soma resultante
        deles desse 0 e a sequência pudesse dar ínicio.

        -1,1,0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
    */


	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite quantos termos deseja exibir:");
    scanf("%d",&limite);

	// Solicita que o usuário que entre com algum dado qualquer

    for(contador = 1; contador<=limite;contador++){

        v3= v1 + v2;// Gerando o valor seguinte
        v1 = v2; //
        v2 = v3;
        printf("%d ",v3);

    }

	/* Fim */ 

	/* Cálculos matemáticos */

	/* Saida de dados */
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 

