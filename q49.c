#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Escreva um programa que determine se um dado número N (digitado pelo usuário) é
primo ou não.
*/ 


int main() // Função obrigatória

   { /* Início */

	// Atenção! O nome da variável, somente pode conter letras, números e o caracter _ (undescore)

	/* Declaração de constantes ou variáveis */ //

    int contador,num,qtddiv;
    //Inicializando a variável
    qtddiv = 0;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
    printf("Digite um valor inteiro qualquer:");
    scanf("%d",&num);

	// Solicita que o usuário que entre com algum dado qualquer

	/* Saida de dados */

    for(contador=1;contador<=num;contador++){

        if(num%contador == 0){

            printf("\n%d",contador);
            qtddiv = qtddiv + 1;
        }

    }

    printf("\nA quantidade de divisores de %d é %d",num,qtddiv);

    if(qtddiv<=2){

        printf("\nO número %d é primo",num);
    }else{

        printf("\nO número %d não é primo",num);
    }
	// Exibe mensagem na tela

	/* Fim */ 
	   
	   system("PAUSE"); // Pausa o programa assim como o comando "getchar();"
	   return 0; 


   } // Fim 
