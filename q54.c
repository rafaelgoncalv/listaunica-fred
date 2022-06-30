#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Construa um programa que receba um número e verifique se ele é um número triangular.
(Um número é triangular quando é resultado do produto de três números consecutivos.
Exemplo: 24 = 2 x 3 x 4) 

*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int num,num1,produto;
    //Inicializando a variável
    num1 = 1;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"");
    printf("Testador de número triangular");
    printf("------------------------------");
	printf("\nDigite um valor inteiro qualquer:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

    //Cálculos matemático
    // O produto inicial

    produto = num1*(num1 + 1)*(num1+2);

	/* Saida de dados */

    while(produto<num){

        num1++;
        produto = num1*(num1 + 1)*(num1+2);


    }

    printf("= %d",produto);

    if(produto == num){

        printf("%d é trinagular",num);
    }else{

        printf("%d não é trinagular",num);
    }

	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
