#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

O número e (número de Euler) pode ser representado e calculado por meio da utilização
da série de Taylor para e quando x=1, como a soma da seguinte série infinita:

euler = 1 + 1/1! + 1/2! + 1/3!+ ⋯ + 1/n!

Escreva um programa, que leia o número de termos da série (n) e imprima como saída, o
cálculo do número de Euler para cada um dos n primeiros elementos da série.
 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num,fatorial,i,j;
	float soma;
	//Inicializando a variável
	soma = 1;

	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite o número de termos:"); //Para 3 termos, O valor e é igual 1,667
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	for(i=1;i<=num;i++){

		fatorial = 1;

		for(j=1;j<=i;j++){

			fatorial = fatorial*j;
		}

		soma = soma + 1/fatorial;
	}


    printf("\nO valor de euler é igual %.10f",soma);

	/* Saida de dados */
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 

   } // Fim 
