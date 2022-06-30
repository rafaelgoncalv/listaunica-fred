#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que leia 5 números, e imprima a média entre eles.

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int contador,num;
    float soma,media;
    //Inicializando variável
    contador = 1;
    soma = 0;
	
	/* Fim */

	/* Saida de dados */

    while (contador<=5)
    {
        //Entrada de dados
        printf("Digite o %dº valor:",contador);
        scanf("%d",&num);

        //Cálculo matemático

        soma = soma + num;

        //Incrimento do contador

        contador = contador + 1;

    }

    //Cálculos matemáticos

    media = soma/5;

    printf("A média entre os valores digitados é igual a %.2f",media);
    
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
