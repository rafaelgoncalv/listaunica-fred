#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que gere números primos entre 200 e 500
 

*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    int max,qtddiv,resto;
    int i,j;
    //Inicializando a variável
    qtddiv = 0;

	
	/* Fim */

	/* Saida de dados */

    for(i= 200; i<1000;i++){ // Verifica os divisores até o limite definido
        qtddiv=0;
        for(j = 1;j <= i;j++){ // Verifica os divisores de i
            resto = i%j;

            if(resto == 0){// Se o resto for zero incrementa um ao qtddiv

                qtddiv++;
            }
        }

        if(qtddiv == 2){ //Se a quantidade de divisores for igual a 2 então o número é primo

            printf("\n %d",i);
        }
    }
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa assim como o comando "getchar()"

   } // Fim 
