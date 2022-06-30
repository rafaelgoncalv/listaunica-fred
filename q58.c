#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> //Funções matemáticas
#include <locale.h> // Habilita o uso de acentuação em palavras


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

O valor aproximado do número π pode ser calculado usando-se a série

s = 1 − 1/3^3 +1/5^3 − 1/7^3 +1/7^3 ...

Faça um programa que calcule e imprima o valor de π usando os N primeiros termos da
série (N sendo informado durante a execução do algoritmo).
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num,contador;
    float pi;
    //Inicializando a variável
    contador = 1;
    pi = 4;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite a quantidade n termmos da série:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */

    while(contador<num){

        if(contador%2 == 0){ // Para os termos pares

            pi = pi + 1/pow(2*contador,3);
        }else{//Para os termos ímpares
            pi = pi - 1/pow((2*contador+1),3);

        }

        contador++;
    }

    printf("O valor aproximado de pi é %2f",pi);
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
